/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool isPossible(int arr[],int size,int mid,int value){
    int sum=0;
    for(int i=0;i<size;i++){
        if(mid<arr[i]){
            sum=sum+arr[i]-mid;
        }
        if (sum>=value){
        return true;
        }
        
    }
    return false;
}
int maxInt(int arr[],int size,int value){
    int s=0;
    int maxi=-1;
    for(int i=0;i<size;i++){
        
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,size,mid,value)){
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

int main()

{
  
   int arr[5]={4 ,42 ,40 ,26, 46};
   cout<<maxInt(arr,5,20)<<endl; 
   
    int brr[5]={20,10,15,17};
    cout<<maxInt(brr,5,7)<<endl;
    return 0;
}
