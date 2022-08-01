/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

vector<int> findArrayIntersection(vector<int> & arr1,int n,vector<int> arr2,int m){
    int i=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
            
        }
        else{
            j++;
        }
    }
    return ans;
}