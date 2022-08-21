/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;
void bubbleSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false);
        break;
    }
}

