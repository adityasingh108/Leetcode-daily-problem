#include<bits/stdc++.h>
using namespace std; 

 int scoreOfParentheses(string S) {
       stack<int> stack;
        int cur = 0;
        for (char i : S)
            if (i == '(') {
                stack.push(cur);
                cur = 0;
            }
            else {
                cur += stack.top() + max(cur, 1);
                stack.pop();
            }
        return cur;
    }


int main()
{
    string s = "()()()()()()()()((((((";
    cout<<scoreOfParentheses(s);
    
    return 0;
}    