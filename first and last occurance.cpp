/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int even[8]={3,5,8,17,28,35,44,47};
    int odd[5]={2,3,14,29,33};
    
    int evenIndex=binarySearch(even,8,28);
    cout<<evenIndex<<endl;
    
    int oddIndex=binarySearch(odd,5,14);
    cout<<oddIndex<<endl;

    return 0;
}
