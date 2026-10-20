int sortableIntegers(int* nums,int numsSize){
    int n=numsSize,ans=0;

    for(int k=1;k<=n;k++){
        if(n%k!=0)continue;

        int ok=1,prev=0;

        for(int i=0;i<n;i+=k){
            int min=i,max=i;

            for(int j=i+1;j<i+k;j++){
                if(nums[j]<nums[min])min=j;
                if(nums[j]>nums[max])max=j;
            }

            if(min!=i){
                if(nums[i+k-1]>nums[i]){
                    ok=0;
                    break;
                }
            }

            int drops=0;
            for(int j=i+1;j<i+k;j++)
                if(nums[j]<nums[j-1])drops++;

            if(drops>1||(drops==1&&nums[i+k-1]>nums[i])){
                ok=0;
                break;
            }

            int first=nums[min];
            if(i>0&&prev>first){
                ok=0;
                break;
            }

            prev=nums[(min==i)?i+k-1:min-1];
        }

        if(ok)ans+=k;
    }

    return ans;
}
