class Solution {
public:
int countpartition(vector<int>& nums, int maxsum){
    int partition=1;
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]+sum<=maxsum){
            sum+=nums[i];
        }
        else{
            partition++;
           sum=nums[i];
        }
    }
    return partition;
}


    int splitArray(vector<int>& nums, int k) {
         int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while(low<=high){
            int mid=(low+high)/2;

            int partition=countpartition(nums,mid);
            if(partition<=k){
            high=mid-1;
            }
            else{
                low=mid+1;
            }

            
        }
        return low;
        
    }
};