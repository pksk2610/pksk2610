/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int findDuplicate(vector<int>&arr){
    
    int ans=0;
    
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    
    for (int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}
