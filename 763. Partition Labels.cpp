#include<bits/stdc++.h>
using namespace std; 


vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        // filling impact of character's
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        // making of result
        vector<int> res;
        int prev = -1;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i){
                // partition time
                res.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return res;
    }
    

int main()
{
    vector<int> ans;
    string  s = "ababcbacadefegdehijhklij";

    ans = partitionLabels(s);
    for(int i: ans){cout << i<< " ";}

    return 0;
}    