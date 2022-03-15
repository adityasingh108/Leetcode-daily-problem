#include<bits/stdc++.h>
using namespace std; 

string minRemovalToMakeValid(string s){
    // create a stack 
    stack<int> st;

    // check parenthesis in string
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '(')
            st.push(i);
        else if(s[i] == ')' ){
            if(! st.empty() && s[st.top()] == '(' )
                st.pop();
            else 
                st.push(i); 
        }
    }

    while (!st.empty())
    {
        s.erase(st.top() , 1);
        st.pop();
    }
    return s;
}