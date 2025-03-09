int accountBalanceAfterPurchase(int purchaseAmount) {
    return 100-(int)(round(purchaseAmount/10.0)*10.0);
}
