#include<bits/stdc++.h>
using namespace std; 

int brokenCalc(int startValue, int target) {
    int result= 0;
    while(target>startValue){
        result++;
        if(target % 2 == 0)
            target/=2;
        else    
            target++;
        }
    return result + (startValue-target);
}


int main()
{
    int start = 2;
    int target = 3;
    cout<<brokenCalc(start, target);
    return 0;
}