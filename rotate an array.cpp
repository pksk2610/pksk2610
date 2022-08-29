/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
class solution{
public:
     void rotate(vector<int> & nums,int k){
         vector<int>temp(nums.size());
         for(int i=0;i<nums.size();i++){
             temp[(i+k)%nums.size()]=nums[i];
         }
         nums=temp;
     }
    
    
};


