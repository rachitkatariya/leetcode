public class DiagonalSum {
    public static int diagonalSum(int[][] mat, int n) {
        int sum = 0;

        // O(N)
        for (int i = 0; i < n; i++) {
            sum += mat[i][i]; // primary diagonal
            if (i != n - i - 1) {
                sum += mat[i][n - i - 1]; // secondary diagonal
            }
        }
        System.out.println("Sum: " + sum);
        return sum;
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        diagonalSum(matrix, 4);
    }
}