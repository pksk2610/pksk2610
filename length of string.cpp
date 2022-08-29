/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0' ;i++){
        count++;

    }
    return count++;

}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is"<<endl;
    cout<<name;
    cout<<"Length:"<<getLength(name)<<endl;
    return 0;
}
