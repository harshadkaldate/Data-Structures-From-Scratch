void dfs(struct Node* root,int* ans,int* k){
    if(root==NULL)return;

    ans[(*k)++]=root->val;

    for(int i=0;i<root->numChildren;i++)
        dfs(root->children[i],ans,k);
}

int* preorder(struct Node* root,int* returnSize){
    int* ans=malloc(10000*sizeof(int));
    *returnSize=0;
    dfs(root,ans,returnSize);
    return ans;
}
