class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode *dummy = new ListNode(-1), *pre = dummy, *new_start = nullptr;
    int out = 0, carry = 0;
    dummy -> next = l1; 
    
    
    while(l1 != NULL && l2 != NULL){
        // insert codehere
        
        
    }
    
   
    new_start = (l1 == NULL) ? l2: l1;        
    pre -> next = new_start;
    
    while(new_start != NULL){
        pre = new_start;
        pre = (new_start -> val + carry)/10;
        new_start -> val = out;
        
        new_start = new_start -> next;
    }
    
    //  determine the last node;
    if(carry != 0){
       // insert code here
    }
    
    return dummy -> next;
    
}

};