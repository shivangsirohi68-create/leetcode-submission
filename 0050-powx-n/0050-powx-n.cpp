// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long m=n;
//            double ans=1;
//        if(m<0){
//         x=1/x;
//         m=-(m+1);
//         ans=ans*x;
//        }
         
//         while(m>0){
          
//         if(m%2==0){
//             m=m/2;
//             x=x*x;
            
//         }
//         else{
//             ans=ans*x;
//             m=m-1;
//         }
//          }
         
      
            
//          return ans;
       
//     }
// };


class Solution {
public:
    double myPow(double x, int n) {

        long long m = n;
        long double base = x;
        long double ans = 1.0;

        if(m < 0) {
            base = 1.0 / base;
            m = -m;
        }

        while(m > 0) {

            if(m % 2 == 1) {
                ans = ans * base;
                m--;
            }
            else {
                base = base * base;
                m /= 2;
            }
        }

        return (double)ans;
    }
};
