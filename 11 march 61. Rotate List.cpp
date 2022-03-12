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
ListNode* rotateRight(ListNode* head, int k) {
        
        // edge case 
        if( !head || !head->next || k ==0 )
            return head;
        
        // compute the length of the list
        ListNode *cur = head;
        int len = 1;
        while(cur->next && ++len)
            cur = cur->next;
        
        // go till that node
        cur->next = head;
        // k assign to the multiple divided
        k= k%len;
        k = len-k;
        // go to the last node of the list
        while(k--)
            cur = cur->next;
        
        // makes the last node null 
        
        
        head = cur->next;
        cur->next = nullptr;
        
        return head;    
    }