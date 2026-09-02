const fs = require('fs');
const path = require('path');

async function fetchSubmissions() {
  const endpoint = 'https://leetcode.com';
  const query = `
    query submissionList($offset: Int!, $limit: Int!) {
      submissionList(offset: $offset, limit: $limit) {
        submissions {
          id
          lang
          title
          titleSlug
          statusDisplay
          timestamp
        }
      }
    }
  `;

  const headers = {
    'content-type': 'application/json',
    'cookie': `LEETCODE_SESSION=${process.env.LEETCODE_SESSION}; csrftoken=${process.env.LEETCODE_CSRF_TOKEN}`,
    'x-csrftoken': process.env.LEETCODE_CSRF_TOKEN,
  };

  const response = await fetch(endpoint, {
    method: 'POST',
    headers,
    body: JSON.stringify({ query, variables: { offset: 0, limit: 20 } })
  });

  const data = await response.json();
  return data.data.submissionList.submissions.filter(s => s.statusDisplay === 'Accepted');
}

async function getQuestionFrontendId(titleSlug) {
  const endpoint = 'https://leetcode.com';
  const query = `
    query questionData($titleSlug: String!) {
      question(titleSlug: $titleSlug) {
        frontendQuestionId
      }
    }
  `;

  const response = await fetch(endpoint, {
    method: 'POST',
    headers: { 'content-type': 'application/json' },
    body: JSON.stringify({ query, variables: { titleSlug } })
  });

  const data = await response.json();
  return data.data.question.frontendQuestionId;
}

async function run() {
  try {
    const submissions = await fetchSubmissions();
    const destDir = path.join(__dirname, 'leetcode-solutions');
    if (!fs.existsSync(destDir)) fs.mkdirSync(destDir);

    for (const sub of submissions) {
      const frontId = await getQuestionFrontendId(sub.titleSlug);
      const folderName = `${frontId}-${sub.titleSlug}`;
      const problemPath = path.join(destDir, folderName);

      if (!fs.existsSync(problemPath)) {
        fs.mkdirSync(problemPath, { recursive: true });
        
        const fileExt = sub.lang === 'java' ? 'java' : 'txt'; 
        fs.writeFileSync(path.join(problemPath, `solution.${fileExt}`), `// Submission ID: ${sub.id}\n// Language: ${sub.lang}`);
        fs.writeFileSync(path.join(problemPath, 'README.md'), `# ${frontId}. ${sub.title}`);
        console.log(`Synced: ${folderName}`);
      }
    }
  } catch (err) {
    console.error('Sync failed:', err);
    process.exit(1);
  }
}

run();
