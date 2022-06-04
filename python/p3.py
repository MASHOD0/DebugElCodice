# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        total = 0
        init_answer = ListNode(0)
        init_answer.next = ListNode(0)
        answer_list = init_answer.next

        weight = 1
        while not l1.next==None:

            total += weight
        
        weight = 1
        while not l2.next==None:
            total += weight*l2.val
            weight *= 10
            l2 = l2.next
        total += weight*l2.val
        total = str(total)
        
        for i in range(len(total)-1,0,-1):
            answer_list.val = total[i]  
        answer_list.next = ListNode(0)
            answer_list = answer_list.next
            
        answer_list.val = total[0]
        
        
        return init_answer.next
        