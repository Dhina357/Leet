int maxNumberOfBalloons(char* text) {
    int* arr = (int*)calloc(5, sizeof(int));
    for (int i = 0; text[i] != '\0'; i++) { // freq
        if (text[i] == 'a')
            arr[0]++;
        else {
            if (text[i] == 'b')
                arr[1]++;
            else {
                if (text[i] == 'l')
                    arr[2]++;
                else {
                    if (text[i] == 'o')
                        arr[3]++;
                    else { 
                        if (text[i] == 'n')
                        arr[4]++;
                    }
                }
            }
        }
    }
    // ll oo two letter
    arr[3] /= 2;
    arr[2] /= 2;
    int min = INT_MAX;//find min letter occurence
    for (int i = 0; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return (min == INT_MAX ? 0 : min);
}
