/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class solution{
public:
       vector<int> findDuplicates(vector<int>&ans){
           vector<int>ans;
           
           int i=0;
           int n=nums.size();
           
           while(i<n){
               if(nums[i]!=nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
               else i++;
               
           }
           for(i=0;i<n;i++){
               if(i!=num[i]-1){
                   ans.push_back(nums[i]);
                   
               }
           }
           return ans; 
           
       }
}
