//APP 1 
lass Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode*curr = head;
        while(curr!=NULL){
            count++;
            curr =  curr -> next;
        }
        curr = head;
        for(int i = 0; i<count/2;i++){
            curr = curr->next;
        }
        return curr;
    }
};

//APP 2
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    } 
    return slow;
 }

}
