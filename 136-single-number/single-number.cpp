class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        unordered_map<int,int>hash;
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(hash[nums[i]] == 1){
            ans = nums[i];
            break;    
            } 
        }
        return ans;
    }
};