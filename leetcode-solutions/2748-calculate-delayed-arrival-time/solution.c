int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int a;
    a = arrivalTime +delayedTime;
    if(a>24){
      a=a-24;
      return a;
    }
     if(a==24){
      
      return 0;
    }
    return a;
}
