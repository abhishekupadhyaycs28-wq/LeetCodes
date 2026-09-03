class Solution {
public:

    vector<vector<int>> pfx;
    vector<vector<int>> answer;

    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();

        pfx = vector<vector<int>> (m+1,vector<int>(n+1,0));
        answer = vector<vector<int>> (m,vector<int>(n,0));

        int r1,r2,c1,c2;

        for (int i = 0; i<m; i++) {
            
            for (int j = 0; j<n; j++) {

                pfx[i+1][j+1] = mat[i][j] + pfx[i+1][j] + pfx[i][j+1] - pfx[i][j];

            }

        }

        for (int i = 0; i<m; i++) {
            
            for (int j = 0; j<n; j++) {

                r1 = max(i-k,0);
                c1 = max(j-k,0);
                r2 = min(i+k,m-1);
                c2 = min(j+k,n-1);

                answer[i][j] = pfx[r2+1][c2+1] - pfx[r1][c2+1] - pfx[r2+1][c1] + pfx[r1][c1];

            }

        }

        return answer;

    }
};