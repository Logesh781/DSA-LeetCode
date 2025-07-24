class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;
        if(find(nums.begin(),nums.end(),target) == nums.end()){
              for(int i = 0;i<n;i++){
                if(target > nums[n-1]){
                    result = n;
                    return result;
                }
                if(nums[i] > target){
                    return i;
                }
              }
        }
        else{
            for(int i = 0;i<n;i++){
                if(nums[i] == target){
                    return i;
                }
            }
        }
        return 0;
    }
};