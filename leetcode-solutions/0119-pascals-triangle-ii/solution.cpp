class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
         vector<vector<int>>result;
          
        for(int i=0;i<=n;i++){
            vector<int>temp;
            for(int j=0;j<=i;j++){
                if(temp.empty()||j==i)temp.push_back(1);
                else{
                    int a=result[i-1][j-1]+result[i-1][j];
                    temp.insert(temp.begin()+1,a);
                }
            }
            result.push_back(temp);
        }
        return result[rowIndex];
    }
};
