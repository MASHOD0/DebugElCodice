public class p3 {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        if(l1 == null ){
           return l2;
        }
       if (l2 == null){
           return l1;
       }
           
       ListNode head = new ListNode(0);
       ListNode header = head;     
       int carry = 0;
           
       while(l1 != null || l2 != null){
           
           if (l1 == null){
               //insert code here
           }else if (l2 == null){
               //insert code here
           }
           
               header.next = new ListNode((l1.val + l2.val + carry) %10);
       
               carry = (l1.val + carry) /10;
       
               header = header.next;
               l1 = l1.next;
               l2 = l2.next; 
           }
           
   
           if (carry != 0){
               header.next = new ListNode(carry);
           }
      
           return head.next; 
           
       
       }
    
}
