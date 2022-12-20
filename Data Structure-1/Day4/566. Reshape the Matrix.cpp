class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if(row == 0){
            return mat;
        }
        if (row*col != r*c){
            return mat;
        }
        vector<vector<int>> output(r,vector<int>(c));
        int rown = 0, coln = 0;
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                output[rown][coln] = mat[i][j];
                coln++;
                if(coln == c){
                    rown++;
                    coln = 0;
                }
            }
        }
        return output;
    }
};
