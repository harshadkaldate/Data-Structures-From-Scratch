bool searchMatrix(int** matrix,int matrixSize,int* matrixColSize,int target){
    int m=matrixSize,n=matrixColSize[0];
    int l=0,r=m*n-1;

    while(l<=r){
        int mid=l+(r-l)/2;
        int x=matrix[mid/n][mid%n];

        if(x==target)return true;
        else if(x<target)l=mid+1;
        else r=mid-1;
    }

    return false;
}
