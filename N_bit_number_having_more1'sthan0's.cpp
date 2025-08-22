//N-bit binary number having more 1's than 0's ----

#include <iostream>
#include<vector>
#include<string>
using namespace std;
void find(vector<string>&ans,int one,int zero,int N,string temp){
    if(temp.size()==N){
        ans.push_back(temp);
        return;
    }
    //for zero
    if(zero<one){
        temp.push_back('0');
        find(ans,one,zero+1,N,temp);
        temp.pop_back();
    }
    //for one
    temp.push_back('1');
    find(ans,one+1,zero,N,temp);
    temp.pop_back();
}
int main() {
   vector<string>ans;
   int N=4;
   string temp;
   find(ans,0,0,N,temp);
   
   for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<endl;
   }
   
   
}