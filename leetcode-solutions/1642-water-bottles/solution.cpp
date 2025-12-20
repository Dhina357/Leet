class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n=numExchange;
        int sum=numBottles;
        while(numBottles/n!=0){
            int a=numBottles%n;
            numBottles=numBottles/n;
            sum+=numBottles;
            numBottles+=a;
 }return sum;
    }
};
