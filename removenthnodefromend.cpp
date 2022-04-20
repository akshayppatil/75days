class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=new ListNode();
        start->next=head;
        ListNode *fast=start;
        ListNode *slow=start;
        // ListNode *pre;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        // cout<<fast->val<<endl;
        while(fast->next!=NULL){
            // pre=slow;
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
        return start->next;
    }
};