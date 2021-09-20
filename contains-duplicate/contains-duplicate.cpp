class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        map<int, bool>vis;
        for(auto &i: nums)
        {
            if(vis[i])
                ans = true;
            vis[i] = true;
        }
        return ans;
    }
};