<<<<<<< HEAD
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str) {
      stack<char> st;

      for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(st.size()==0){
                return false;        //stack empty--
            }
            if((st.top()=='('&&str[i]==')')||
                (st.top()=='{'&&str[i]=='}')||
                (st.top()=='['&&str[i]==']'))
            {
                st.pop();
            } 
            else{
            return false;}   
        }    
        }
        return st.size()==0;
}

int main(){
    string str="({}[])";
     if (isValid(str))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;

=======
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str) {
      stack<char> st;

      for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(st.size()==0){
                return false;        //stack empty--
            }
            if((st.top()=='('&&str[i]==')')||
                (st.top()=='{'&&str[i]=='}')||
                (st.top()=='['&&str[i]==']'))
            {
                st.pop();
            } 
            else{
            return false;}   
        }    
        }
        return st.size()==0;
}

int main(){
    string str="({}[])";
     if (isValid(str))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;

>>>>>>> 585a2e6c4fb44532aafecd2011ea5d5611bb2a8c
}