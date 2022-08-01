/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
vector<vecto<int>> pairSum(vector<int>&arr,int s){
    vector<vector<int>> ans;
    
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
