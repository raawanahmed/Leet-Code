class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, mx = -1e6, ans = 0, sz = nums.size();
        for(int i = 0; i < sz; i++){
            mx =  max(mx, nums[i]);
            sum += nums[i];
            if(sum < 0)
                sum = 0;
            ans = max(ans, sum);
        }
        ans = max(mx, ans);
        if(ans <= 0)
            ans = mx;
        return ans;
    }
};