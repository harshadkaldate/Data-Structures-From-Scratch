int majorityElement(int* nums,int numsSize){
    int x=0,c=0;

    for(int i=0;i<numsSize;i++){
        if(c==0)x=nums[i];
        c+=(nums[i]==x)?1:-1;
    }

    return x;
}