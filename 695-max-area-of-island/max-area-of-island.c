int dfs(int** grid,int m,int n,int i,int j){
    if(i<0||j<0||i>=m||j>=n||grid[i][j]==0)return 0;
    grid[i][j]=0;
    return 1+dfs(grid,m,n,i+1,j)+dfs(grid,m,n,i-1,j)+dfs(grid,m,n,i,j+1)+dfs(grid,m,n,i,j-1);
}

int maxAreaOfIsland(int** grid,int gridSize,int* gridColSize){
    int m=gridSize,n=gridColSize[0],max=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(grid[i][j]){
                int area=dfs(grid,m,n,i,j);
                if(area>max)max=area;
            }
    return max;
}