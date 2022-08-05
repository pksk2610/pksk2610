/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class solution{
public:
      int peakIndexInMountainArray(vector<int>&arr){
          int s=0;
          int e= arr.size()-1;
          int mid=s+(e-s)/2;
          while(s<e){
              if (arr[mid]<arr[mid]+1){
                  s=mid+1;
              }
              else{
                  e=mid;
              }
              mid=s+(e-s)/2;
             
          }
          return s;
      }

}
