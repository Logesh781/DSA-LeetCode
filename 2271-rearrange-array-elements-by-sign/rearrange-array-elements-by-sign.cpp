class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int negInd = 1, posInd = 0;
        vector<int> arr(n,0);
        for(int i = 0;i<nums.size();i++){
              if(nums[i] < 0){
                  arr[negInd] = nums[i];
                  negInd += 2;
              }
              else{
                arr[posInd] = nums[i];
                posInd += 2;
              }
        } 
        return arr;
    }
};