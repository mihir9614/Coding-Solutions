class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(), nums.end());
        
        int maxStreak = 0;
        int currStreak = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == maxEle) {
                currStreak++;
                maxStreak = max(maxStreak, currStreak);
            } else {
                currStreak = 0;
            }
        }
        
        return maxStreak;
    }
};
