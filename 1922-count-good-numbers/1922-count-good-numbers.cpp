class Solution {
public:
const long long mod=1e9 + 7; 
long long findpower(long long a,long long b){
   if(b==0) return 1;

   long long half=findpower(a,b/2);
   long long result=(half*half)%mod;
   if(b%2==1){
    result=(result*a)%mod;
   }
   return result;

}
    int countGoodNumbers(long long n) {
        return (findpower(5,(n+1)/2) * findpower(4,n/2))%mod;
        
    }
};