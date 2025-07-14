class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
      sort(nums.begin(),nums.end());
      int lastSmall = INT_MIN, curCnt = 0, longest = 1;
      for(int i = 0;i<nums.size();i++){
        if(nums[i] - 1 == lastSmall){
            curCnt++;
            lastSmall = nums[i];
        }
        else if(nums[i] != lastSmall){
           curCnt = 1;
           lastSmall = nums[i];
        }
        longest = max(longest, curCnt);
      }
    return longest;

    }
};