/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

class solution{
public:
       long long int binarySearch(int n){
           int s=0;
           int e=n;
           long long int  mid=s+(e-s)/2;
           long long int ans=-1;
           while(s<=e){
               long long int square=mid*mid;
               if(square==n)
               return mid;
               if(square<n){
                   ans=mid;
                   s=mid+1;
               }
               else{
                   e=mid-1;
               }
               mid=s+(e-s)/2;
               
           }
           return ans;
       }
       int mySqrt(int x){
           return binarySearch(x);
       }
};
