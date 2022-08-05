/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class solution{
public:
      int pivotIndex(vector<int>&nums){
          int n=nums.size(),rightsum=0,leftsum=0;
          for(int i=o;i<n;i++)
          rightsum+=numms[i];
          
          for(int i=0;i<n;i++){
              rightsum-=nums[i];
              if(leftsum==rightsum){
                  return i;
              }
              leftsum+=nums[i];
          }
          return -1;
      }
 
};