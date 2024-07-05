public class SearchMatrix {
    public static boolean search(int[][] mat, int n, int m, int key) {
        int i = 0, j = m - 1;

        while (i < n && j >= 0) {
            if (mat[i][j] == key) {
                System.out.println("found at cell (" + i + "," + j + ")");
                return true;
            } else if (mat[i][j] > key) {
                j--;       // move left
            } else {
                i++;      // move down
            }
        }
        System.out.println("key not found");
        return false;
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}
        };
        search(matrix, 4, 4, 33);
    }
}
