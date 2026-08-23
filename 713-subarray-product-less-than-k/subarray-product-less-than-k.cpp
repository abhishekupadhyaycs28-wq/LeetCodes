class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if (k<=1) return 0;

        int right = 0;
        int left = 0;
        long long count = 0;
        long long n = nums.size();
        long long pd = 1;
        
        while (right < n) {
            
            pd = pd*nums[right];
            
            while (pd >= k) {
                pd = (pd/(nums[left]));
                left++;
            }

            count = count + (right - left + 1);
            
            right++;
            
        }
        return count;
    }
};