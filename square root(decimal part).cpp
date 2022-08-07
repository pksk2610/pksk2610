//******************************************************************************

//Welcome to GDB Online.
//GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
//C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
//Code, Compile, Run and Debug online from anywhere in world.

//*******************************************************************************
#include <iostream>
using namespace std;
long long int squareInteger(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n)
        return mid;
        if(square<n){
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

double morePrecision(int n,int precision,int tempsoln){
    double factor=1;
    double ans=tempsoln;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=tempsoln;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Number "<< endl;
    cin>>n;
    int tempsoln=squareInteger(n);
    cout<<"Ans is"<<" "<<morePrecision(n,3,tempsoln);
    return 0;
}
