/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

int getPivot(vector<int> & arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s>e){
        if (arr[mid]>=arr[0]){
            s=mid+1;
            
        }
        else{
            
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>&arr,int s,int e,int k){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while(start<=end){
        if (arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    return -1;
}
int findPostion(vector<int>&arr,int n,int k){
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot]&& k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
