class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int n= numExchange;
    int sum=numBottles;
    while((numBottles-n)>=0){
        numBottles-=n;
         numBottles+=1;
        n++;
        sum++;

    }
        return sum;
    }
};
