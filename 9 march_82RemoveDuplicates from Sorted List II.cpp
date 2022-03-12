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
  
ListNode* deleteDuplicates(ListNode* head) {
        
         ListNode *dumy = new ListNode(1);
        dumy->next  = head;
        
        ListNode *prev = dumy;
        
        ListNode *current = head;
        while(current != NULL){
            while(current->next != nullptr && prev->next->val == current->next->val){
                 current = current->next;
            }
               if(prev->next == current)
                    prev= prev->next;
                else{
                    prev->next = current->next;
                }    
        
            current = current->next;
        }
        head = dumy->next;
        return head;