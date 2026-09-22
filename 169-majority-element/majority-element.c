int majorityElement(int* nums,int numsSize){
    int candidate=0,count=0;

    for(int i=0;i<numsSize;i++){
        if(count==0)
            candidate=nums[i];

        if(nums[i]==candidate)
            count++;
        else
            count--;
    }

    return candidate;
}