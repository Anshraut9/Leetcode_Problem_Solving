class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j] == 1) {
                    
            bool found_col = true;
            bool found_row = true;

                    for(int l=0;l<n;l++) {
                        if(i != l && mat[l][j] == 1) {
                            found_col = false;
                            break;
                        }
                    }

                    for(int r=0;r<m;r++) {
                        if(r != j && mat[i][r] == 1) {
                            found_row = false;
                            break;
                        }
                    }

                    if(found_col == true && found_row == true) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};