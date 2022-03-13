#include<bits/stdc++.h>
using namespace std; 


bool IsValid(string x){
    // create a stack 
    stack<char> st;
    for(int i = 0; i<x.length(); i++){
        if(x[i] == '(' or x[i] == '{' or x[i] == '[')
            st.push(x[i]);
        else if(st.empty() == true) 
            return false;
        else if(x[i] == ')' and st.top() != '(' )
            return false;

        else if(x[i] == '}' and st.top() != '{' )
            return false;

        else if(x[i] == ']' and st.top() != '[' )
            return false;
        else
        st.pop();
    }
    if(st.empty())
        return true;
    return false;    
}

int main()
{
    string s = "{}{}}}{}";
    bool a = IsValid(s);
    if(a == true)
        cout<<"TRUE" <<endl;  
    else
        cout<<"False"<<endl;      
    return 0;
}