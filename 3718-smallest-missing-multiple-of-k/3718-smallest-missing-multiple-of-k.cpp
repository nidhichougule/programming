class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_set<int> s(nums.begin(), nums.end());
        int i= 1;
        while(true) {
            int multiple= k * i;
            if (s.find(multiple)== s.end()) {
                return multiple;
            }
            i++;
        }
    }
};