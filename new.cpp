class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int oneCount =0;
        int max1 = 0;

        for(int num : nums){
            if(num ==0){
                oneCount=0;
            }
            else{
                oneCount++;
                max1 = Math.max(max1,oneCount);
            }
        }
        return max1;
        
    }
}
