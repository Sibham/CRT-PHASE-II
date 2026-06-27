
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
      unordered_map<ListNode*,int>mp;
      while(head1!=NULL){
        mp[head1]++;
        head1=head1->next;
      }
      while(head2!=NULL){
        if(mp.find(head2) != mp.end()){
            return head2;
        }
        head2= head2->next;
      }
      return NULL;
    }
};
