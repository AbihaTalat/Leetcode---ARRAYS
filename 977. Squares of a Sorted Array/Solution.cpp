class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> square;
        int st;
        for(int i = 0; i < nums.size(); i++)
        {
            st = nums[i] * nums[i];
            square.push_back(st);
        }
        
        sort(square.begin(), square.end());
        return square;
    }
};
