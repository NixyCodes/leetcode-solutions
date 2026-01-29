class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i, j, len=nums.length;
        for(i =0; i<len-1; i++){
            for(j = i+1; j<len; j++){
                if(nums[i]+nums[j] == target){
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
    
}