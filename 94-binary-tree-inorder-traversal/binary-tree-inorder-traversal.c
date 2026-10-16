void inorder(struct TreeNode* root,int* arr,int* n)
{
    if(root==NULL)
        return;

    inorder(root->left,arr,n);
    arr[(*n)++]=root->val;
    inorder(root->right,arr,n);
}

int* inorderTraversal(struct TreeNode* root,int* returnSize)
{
    int *arr=malloc(100*sizeof(int));
    *returnSize=0;
    inorder(root,arr,returnSize);
    return arr;
}