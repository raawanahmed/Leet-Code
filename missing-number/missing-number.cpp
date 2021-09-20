class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = (int)nums.size(); 
        long long sum = (n*(n+1))/2, cur = 0;
        for(auto &i: nums) 
            cur+=i;
        return sum-cur;
    }
};