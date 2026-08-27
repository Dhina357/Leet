class Solution {
    public int integerReplacement(int n) {
        int ans = 0;
        long temp=n;
        while (temp != 1) {
            if ((temp & 1) == 0)
                temp = temp >> 1;
            else {
                if (temp == 3 || (temp & 3) == 1)
                    temp = temp - 1;
                else
                    temp = temp + 1;
            }
            ans++;
        }
        return ans;

    }
}
