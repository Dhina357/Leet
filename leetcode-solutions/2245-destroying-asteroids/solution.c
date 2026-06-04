bool solve(long long mass, int* asteroids, int asteroidsSize){
    for(int i=0;i<asteroidsSize;i++){
        if(asteroids[i]<=mass)mass+=asteroids[i];
        else 
        return false;
         }
    return true;
}
int compare_asteroids(const void *a, const void *b) {
    int val1 = *(const int *)a;
    int val2 = *(const int *)b;
    
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}
bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {
     qsort(asteroids, asteroidsSize, sizeof(int), compare_asteroids);
    return solve(mass,asteroids,asteroidsSize);
}
