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
  void merge(vector<int>&nums1,int m,vector<int>nums2,int n){
      int k=0;
      vector<int>res(m+n);
      int i=0, j=0;
      
      while(i<m&&j<n){
          if(nums1[i]<nums2[j]){
              res[k++]=nums1[i];
          }
          else{
              res[k++]=nums2[j];
          }
      }
      while(i<m){
          res[k++]=nums1[i++];
      }
      while(j<n){
          res[k++]=nums2[j++];
      }
      for(int i=0;i<m+n;i++){
          nums1[i]=res[i];
      }
      return;
  }
    
    
};
    



