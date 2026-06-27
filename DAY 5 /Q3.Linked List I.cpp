class Solution {
public:
    bool hasCycle(ListNode *head) {
       if(head ==NULL || head -> next == NULL){
        return false;
       }
       ListNode* slow = head;
       ListNode* fast = head;

       slow = slow->next;
       fast = fast ->next->next;

       while(fast && fast -> next){
        if(slow ==fast){
         break;
        }
        slow = slow->next;
        fast = fast ->next->next; 
    }
       if(slow ==fast){
        return true;
       }else{
        return false;
       }
    }
};
