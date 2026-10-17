void dfs(struct Node* root,int* ans,int* k){
    if(root==NULL)return;

    for(int i=0;i<root->numChildren;i++)
        dfs(root->children[i],ans,k);

    ans[(*k)++]=root->val;
}

int* postorder(struct Node* root,int* returnSize){
    int* ans=malloc(10000*sizeof(int));
    *returnSize=0;
    dfs(root,ans,returnSize);
    return ans;
}