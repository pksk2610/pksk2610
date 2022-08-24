/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

void insertionSort(int n,vector<int>&arr){
    int i=1;
    while(i<n){
        int j=i-1;
        int temp=arr[i];
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1]=temp;
       
    }
    
}

