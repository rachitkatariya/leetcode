public class SpiralMatrix {
    public static void spiralMatrix(int[][] matrix, int n, int m) {
        int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;

        while (srow <= erow && scol <= ecol) {
            // Top
            for (int j = scol; j <= ecol; j++) {
                System.out.print(matrix[srow][j] + " ");
            }

            // Right
            for (int i = srow + 1; i <= erow; i++) {
                System.out.print(matrix[i][ecol] + " ");
            }

            // Bottom
            for (int j = ecol - 1; j >= scol; j--) {
                if (srow == erow) {
                    break;
                }
                System.out.print(matrix[erow][j] + " ");
            }

            // Left
            for (int i = erow - 1; i >= srow + 1; i--) {
                if (scol == ecol) {
                    break;
                }
                System.out.print(matrix[i][scol] + " ");
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        spiralMatrix(matrix, 4, 4);
    }
}
