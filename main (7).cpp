/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc ++.h>

void sort012(int arr[],int n){
    int i=0;
    int mid=0;
    int k=n-1;
    while(mid<=k){
        if(arr[mid]==0){
            swap(arr[i],arr[mid]);
            i++;
            mid++;
            
            
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[k]);
            k--;
        }
            
        }
    }
}
