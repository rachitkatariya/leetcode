import java.util.Arrays;

public class trapWater {

    public static int trapWater(int[] heights) {
        int n = heights.length;
        if (n == 0) return 0;

        int[] leftMax = new int[n];
        int[] rightMax = new int[n];
        leftMax[0] = heights[0];
        rightMax[n - 1] = heights[n - 1];

        // Fill leftMax array
        for (int i = 1; i < n; i++) {
            leftMax[i] = Math.max(leftMax[i - 1], heights[i]);
        }

        // Fill rightMax array
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = Math.max(rightMax[i + 1], heights[i]);
        }

        int waterTrapped = 0;
        for (int i = 0; i < n; i++) {
            int currWater = Math.min(leftMax[i], rightMax[i]) - heights[i];
            if (currWater > 0) {
                waterTrapped += currWater;
            }
        }

        System.out.println("Water trapped: " + waterTrapped);
        return waterTrapped;
    }

    public static void main(String[] args) {
        int[] heights = {5, 4, 3, 2, 1};
        trapWater(heights);
    }
}
