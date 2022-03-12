#include<bits/stdc++.h>
using namespace std; 

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


    Node* copyRandomList(Node* head) {
        Node *iter = head;
        Node *front = head;
        
        //1 step make copy of each node 
        
        while(iter != NULL){
            front = iter->next;
            Node *copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        
        //# 2nd step  assign random poiter to the copy nodes
        iter = head;
        while(iter != NULL){
            if(iter->random != NULL)
                iter->next->random = iter->random->next;
        iter = iter->next->next;
        }
        
        // 3rd step restore the original list, and extract the copy list.
        
        iter = head;
        // create a new  dumpy head
        Node *dumyhead = new Node(0);
        
        Node*copy = dumyhead;
        while(iter != NULL){
            front = iter->next->next;
            
            // extract the copy
            copy->next = iter->next;
            
            // restore  the  list
            iter->next = front;
            
            // move copy and iter
            copy = copy->next;
            iter = iter->next;
        }
    
        head = dumyhead->next;
        return head;    
    }