int* intersect(int* nums1,int nums1Size,int* nums2,int nums2Size,int* returnSize){
    int count[1001]={0};
    int* ans=malloc(1000*sizeof(int));
    *returnSize=0;

    for(int i=0;i<nums1Size;i++)
        count[nums1[i]]++;

    for(int i=0;i<nums2Size;i++)
        if(count[nums2[i]]>0){
            ans[(*returnSize)++]=nums2[i];
            count[nums2[i]]--;
        }

    return ans;
}