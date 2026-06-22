class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>num_index;
      for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
    
        if (num_index.find(complement) != num_index.end()){
            return{num_index[complement],i};
        }
        num_index[nums[i]]=i;
      }  
      return {};
    }
};