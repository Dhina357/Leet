class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        int l = m * n;
        List<Integer> result = new ArrayList<>();
        int a = 0;
        int left = 0, up = 0, down = m - 1, right = n - 1;
        int i = 0, j = 0;
        while (a < l) {

            for (j = left; j <= right && a < l; j++) {
                result.add(matrix[up][j]);
                a++;

            }
            up++;

            for (i = up; i <=down && a < l; i++) {
                result.add(matrix[i][right]);
                a++;
            }
            right--;

            for (j = right; j >= left && a < l; j--) {
                result.add(matrix[down][j]);
                a++;

            }
            down--;

            for (i = down ; i >= up && a < l; i--) {
                result.add(matrix[i][left]);
                a++;
            }
            left++;

        }
        return result;
    }
}
