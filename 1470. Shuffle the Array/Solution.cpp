class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int x;
        int y;
        vector<int> ans(nums.size());
        for(int i = 0; i < n; i++)
        {
            x = nums[i];
            y = nums[i + n];
            ans[2*i] = x;
            ans[2*i + 1] = y;
        }

        return ans;

    }
};
