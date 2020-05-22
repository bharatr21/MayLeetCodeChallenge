int countSquares(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int ct = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j])
            {
                if(i > 0 && j > 0)
                {
                    matrix[i][j] += min(min(matrix[i-1][j], matrix[i][j-1]), matrix[i-1][j-1]);
                }
                ct += matrix[i][j];
            }
        }
    }
    return ct;
}