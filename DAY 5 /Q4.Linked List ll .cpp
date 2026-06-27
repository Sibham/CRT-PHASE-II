class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            break;
        }
    }
    //ListNode* prev = NULL  // for remove loop
    if(!(fast && fast->next))
    return NULL;
    
    while(head!=slow){
        head = head->next;
        //prev = slow;
        slow = slow ->next;
    }
    return head;
    }
};
