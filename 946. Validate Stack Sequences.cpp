#include<bits/stdc++.h>
using namespace std; 

 bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        for(auto j :pushed){
            st.push(j); 
            while(st.size() && st.top() == popped[i]){
                st.pop();
                i++;
             
            }
        }
        return st.size() ==0;
        
    }

int main()
{
    
    return 0;
}