class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(1,1);
        for(int i=0; i<= rowIndex; i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]= ans[j-1]+ ans[j];
            }
            ans=row;
        }
        return ans;
    }
};