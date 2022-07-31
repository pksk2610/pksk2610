/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
class solution{
public:
      bool uniqueOccurances(vector<int>&arr){
          unorderd_map<int,int>m;
          
          for(int i=0;i<arr.size();i++);i++
          m.[arr[i]]++;
          
          unorderd_set<int>s;
          for (auto it=m.begin();it!=m.end();it++){
              if(s.find(it->second)!=s.end())
              return false;
              s.insert(it->second);
              
          }
          return true;
          
      }
    
    
};
