int minimumArea(int** grid, int g, int* gc) {
    int m=g,n =gc[0];
    int minrow=m,maxrow=-1;
    int minclm=n,maxclm=-1; 
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                if(i< minrow) minrow = i;
                if (i > maxrow) maxrow = i;
                if (j < minclm) minclm = j;
                if (j > maxclm) maxclm = j;
            }
        }
    }
    return (maxrow-minrow+1)*(maxclm-minclm+1);
}
