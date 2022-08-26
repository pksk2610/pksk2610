/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;
class solution{
public:
      void moveZeroes(vector<int>&nums){
          int i=0;
          
          for(int j=0;j<nums.size();j++){
              if(nums[j]!=0){
                  swap(nums[j],nums[i]);
                  i++;
              }
          }
      }
    
};

