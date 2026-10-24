int dp[201][201];

int solve(int** g,int m,int n,int i,int j){
    if(i>=m||j>=n)return 1000000000;
    if(i==m-1&&j==n-1)return g[i][j];
    if(dp[i][j]!=-1)return dp[i][j];

    int a=solve(g,m,n,i+1,j);
    int b=solve(g,m,n,i,j+1);

    return dp[i][j]=g[i][j]+(a<b?a:b);
}

int minPathSum(int** grid,int gridSize,int* gridColSize){
    int n=gridColSize[0];
    for(int i=0;i<gridSize;i++)
        for(int j=0;j<n;j++)dp[i][j]=-1;

    return solve(grid,gridSize,n,0,0);
}