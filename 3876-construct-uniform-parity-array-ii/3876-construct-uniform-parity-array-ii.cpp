class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mino=INT_MAX;

        for (int x:nums1){
            if(x%2 == 1){
                mino= min(mino, x);

            }
        }
        for( int x: nums1){
              if(x%2 ==0 && mino!= INT_MAX && x < mino){
                return false;
              }  
        }
        return true;
    }
};