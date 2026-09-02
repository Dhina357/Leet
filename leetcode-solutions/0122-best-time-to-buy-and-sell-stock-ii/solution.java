class Solution {
    public int maxProfit(int[] prices) {
        int count =0;
        int min=prices[0];
        int max=0;
        for(int i=1;i<prices.length;i++){
                 if(prices[i]<min){
                    min=prices[i];
                 }
                 else {count+=prices[i]-min;
                 min=prices[i];}
        }
        return count;
    }
}
