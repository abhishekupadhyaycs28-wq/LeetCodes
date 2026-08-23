class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
/*      int sum = 0;
        int ans = INT_MAX;
        int n = nums.size();
        int len = 0;
        bool flag = false;
        
        for (int i = 0; i<n; i++) {
            sum = 0;
            for (int j = i; j<n; j++) {
                sum+=nums[j];
                
                if (sum>=target) {
                    len = j-i+1;
                    ans = min(ans,len);
                    flag = false;
                }
            }
        
        }
        if ( ans == INT_MAX ) {
            return 0;
        }
        return ans; */

        int left = 0;
        int right = 0;
        int ans = INT_MAX;
        int n = nums.size();
        int sum = 0;

        while (right < n) {
            sum = sum + nums[right];
            right++;
            
            while (sum>=target) {
                ans= min(ans,right-left);
                sum = sum-nums[left];
                left++;
            }
            
        }

        if (ans==INT_MAX) {
            return 0;
            
        }
        return ans;        
    }
};