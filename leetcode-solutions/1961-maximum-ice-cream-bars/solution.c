int maxIceCream(int* costs, int costsSize, int coins) {
    int max = 0;
    for (int i = 0; i < costsSize; i++) {
        if (max < costs[i])
            max = costs[i];
    }
    int* csort = (int*)calloc(max + 1, sizeof(int));
    for (int i = 0; i < costsSize; i++) {
        csort[costs[i]]++;
    }
    int sum = 0;
    int count = 0;
    for (int i = 0; i < max + 1; i++) {
        if (csort[i] == 0)
            continue;
        if (coins < i) {
            break;
        }

        // Calculate how many ice creams of price 'i' we want vs how many we can
        // afford
        int barsToBuy = csort[i];
        if (coins < (long long)barsToBuy * i) {
            barsToBuy = coins / i; // Buy as many as our remaining coins allow
        }

        // Update stats
        count += barsToBuy;
        coins -= barsToBuy * i;

        // If we are completely out of coins, exit early
        if (coins < i) {
            break;
        }}
        free(csort);

        return count;
    }
