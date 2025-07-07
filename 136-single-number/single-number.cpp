class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            num = nums[i];
            for(int j = 0;j<nums.size();j++){
                if(nums[j] == num) count++;
            }
        if(count == 1) break;
        else count = 0;
        }
        return num;
    }
};