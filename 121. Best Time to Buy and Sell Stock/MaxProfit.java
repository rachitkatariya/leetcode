import java.util.Arrays;

public class MaxProfit {

    public static void maxProfit(int[] prices) {
        int n = prices.length;
        int[] bestBuy = new int[n];
        Arrays.fill(bestBuy, Integer.MAX_VALUE);

        for (int i = 1; i < n; i++) {
            bestBuy[i] = Math.min(bestBuy[i - 1], prices[i - 1]);
        }

        int maxProfit = 0;
        for (int i = 0; i < n; i++) {
            int currProfit = prices[i] - bestBuy[i];
            maxProfit = Math.max(maxProfit, currProfit);
        }
        // O(n+n) = O(2n) -> O(n)
        System.out.println("Max profit: " + maxProfit);
    }

    public static void main(String[] args) {
        int[] prices = {7, 1, 5, 3, 6, 4};
        maxProfit(prices);
    }
}