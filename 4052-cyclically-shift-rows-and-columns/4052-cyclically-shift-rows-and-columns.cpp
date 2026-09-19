class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        int m=grid[0].size();
        for(int i=0;i<rowShift.size();i++){
            vector<int>newVec(m);
            for(int j=0;j<m;j++){
                newVec[(j-rowShift[i]+n)%n]=grid[i][j];
            }
            grid[i]=newVec;
        }
        for(int i=0;i<colShift.size();i++){
            vector<int>newVec(n);
            for(int j=0;j<n;j++){
                newVec[(j-colShift[i]+n)%n]=grid[j][i];
            }
            for(int j=0;j<n;j++){
               grid[j][i]=newVec[j];
            }
        }
        return grid;
    }
};