#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1, mid;
    bool found = false;
    while (s <= e){
        mid = (s + e) / 2;
        if (nums[mid] < target)
            s = mid + 1;
        else if (nums[mid] > target)
          e = mid - 1;
        else{
            found = 1;
            nums.push_back(mid);
            break;
            }
    }
    if (found)
        return nums[nums.size() - 1];
    else
        return -1;
}

int Bsearch(vector<int>& nums, int target) {
       int l = 0; 
       int h = nums.size()-1;
       int mid;
       while(l<= h){
           mid = (l+h)/2;
           if(target < nums[mid])
                h= mid-1;
            else if(target > nums[mid])  
                l = mid+1;
            else
                return mid;      
       }
       return -1;
}