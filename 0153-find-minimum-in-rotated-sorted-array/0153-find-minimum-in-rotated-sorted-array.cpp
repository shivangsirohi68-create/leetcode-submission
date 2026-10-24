class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int high=n-1;
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                if(nums[low]<mini){
                    mini=nums[low];}
                    low=mid+1;
                
            }
            else{
                if(nums[mid]<mini){
                    mini=nums[mid];}
                    high=mid-1;
                
            }
        }
        return mini;
        
    }
};