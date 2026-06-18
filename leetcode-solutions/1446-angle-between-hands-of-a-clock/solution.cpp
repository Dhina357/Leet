class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour=(hour==12)?0:hour;
       double a=(hour*30) +(double)(minutes/2.0);
        double b=minutes*6;
        double diff=abs(a-b);
        return min(diff,360-diff);
    }
};
