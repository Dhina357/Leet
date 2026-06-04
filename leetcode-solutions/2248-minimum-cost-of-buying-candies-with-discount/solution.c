int solve(int* cost,int costSize){
    int totalCost = 0;
    for (int i = 0; i < costSize; i++) {
        if ((i + 1) % 3 == 0) {
            continue; 
        }
        totalCost += cost[i];
    }
    
    return totalCost;
}
void sort(int* cost, int costSize){
    for(int i=0;i<costSize;i++){
        for(int j=i+1;j<costSize;j++){
            if(cost[i]<cost[j]){
                int temp=cost[i];
                cost[i]=cost[j];
                cost[j]=temp;
            }
        }
    }
}
 int minimumCost(int* cost, int costSize) {
    sort(cost,costSize);
     return solve(cost,costSize);
}
