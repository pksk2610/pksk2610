/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++h>
vector<vector<int>> finfTriplets(vector<int>arr,int n,int k){
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int left,right;
    for(int i=0;i<n;i++){
        left=i+1;
        right=n-1;
        while(left<right){
            if(arr[left]+arr[right]+arr[i]==k){
                ans.push_back({arr[i],arr[left],arr[right]});
                
                int x=arr[left];
                int y=arr[right];
                while (left<right && arr[left]==y){
                    left++;
                    
                }
                while(left<right&&arr[right]==y){
                    right--;
                    
                }
            }
            else if(arr[left]+arr[right]+arr[i]<k){
                left++;
            }
            else{
                right--;
            }
        }
        while(i+1<n && arr[i]=arr[i+1]){
            i++;
        }
    }
    return ans;
}
