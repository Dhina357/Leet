class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled=s+s;
	string trimed=doubled.substr(1,doubled.size()-2);
	if (trimed.find(s)!=string::npos){
		return true;
		
	}
	else {
		return false;
	}
        
    }
};
