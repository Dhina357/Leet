int areaOfMaxDiagonal(int** dimensions, int dimensionsSize, int* dimensionsColSize) {
    int MaxArea=0,maxDia=0;
    for(int i=0;i<dimensionsSize;i++){
        int l=dimensions[i][0];
        int w=dimensions[i][1];
        int curDia=l*l+w*w;
    
    while(curDia>maxDia||(curDia==maxDia && MaxArea<l*w)){
        maxDia=curDia;
        MaxArea=l*w;
    }}
    return MaxArea;
    
}
