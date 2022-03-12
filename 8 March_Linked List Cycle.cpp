#include<bits/stdc++.h>
using namespace std; 
  //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

bool hasCycle(ListNode *head) {
        if(head == NULL) 
            return false;
        
        ListNode* slow = head;
        ListNode*fast = head->next;
        
        while(slow != fast){
            if(fast == NULL || fast->next == NULL) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
        
    }