class Solution {
    public int maxProfit(int[] prices) {
        int min = prices[0], max=0, profit;

        for(int i=1; i<prices.length; i++){
            if(prices[i]<min){
                min = prices[i];
            }else{
                profit = prices[i]-min;
                max = Math.max(max,profit);
            }
           
        }
        return max;
    }
}