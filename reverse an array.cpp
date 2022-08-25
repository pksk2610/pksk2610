/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0, e=v.size()-1;
    while (s<=e){
        swap(v[s],v[e]);
        s++;
        e--;

    }

    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int>v;
    v.push_back(11);
    v.push_back(1);
    v.push_back(9);
    v.push_back(14);



    vector<int> ans=reverse(v);

    print(ans);





 return 0;
}