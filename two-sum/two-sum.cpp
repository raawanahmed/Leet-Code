class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, bool>vis;
        map<int, int>idx;
        for(int i=0; i<(int)nums.size(); i++){
            vis[nums[i]] = true;
            idx[nums[i]] = i;
        }
        vector<int>ans;
        for(int i=0; i<(int)nums.size(); i++){
            int elba2y = target - nums[i];
            if(vis[elba2y] && idx[elba2y]!=i){
                ans.push_back(i), ans.push_back(idx[elba2y]);
                break;
             }
        }
        return ans;
    }
};