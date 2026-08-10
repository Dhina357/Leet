class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int n=prices.size();
        int m=discounts.size();
        vector<double>ans; double sum=0;
        
        for(int i=0,j=0;i<n&&j<m;i++,j++){
        ans.push_back((double)prices[i]*((double)(100-discounts[j])/100));
            sum+=ans[i];
        }
        
        for(int i=min(n,m);i<n;i++){
            sum+=prices[i];
            
        }
        return sum;
    }
};
