class Solution {
public:
int reqdays(vector<int>& weights, int cap){
    int n=weights.size();
    int load=0;
    int dayss=1;
    for(int i=0; i<n; i++){
        if(load+weights[i]>cap){
            dayss=dayss+1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return dayss;
}

    int shipWithinDays(vector<int>& weights, int days) {
         int low=*max_element(weights.begin(),weights.end());
         int high= accumulate(weights.begin(),weights.end(),0);

         while(low<=high){
            int mid=(low+high)/2;
           
           int noOfdays=reqdays(weights,mid);
           if(noOfdays<=days){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
         }


return low;

    }
};