class Solution {
public:
    int findMin(vector<int>& nums) {
        int sz = nums.size(), ans = 1e9;
        for(int i = 0; i < sz; i++){
            ans = min(ans, nums[i]);
        }
        return ans;
    }
};