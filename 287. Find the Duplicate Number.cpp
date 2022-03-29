#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
  int slow = 0;
  int fast = 0;
  while ((slow = nums[slow]) != (fast = nums[nums[fast]]))
    ;
  slow = 0;
  while ((slow = nums[slow]) != (fast = nums[fast]))
    ;
  return slow;
}
