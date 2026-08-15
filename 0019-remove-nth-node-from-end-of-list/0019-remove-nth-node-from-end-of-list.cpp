class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0 , head);
        ListNode *slow  = dummy ;
        ListNode *fast = dummy  ;
        for(int i = 0 ;i<=n ; i++){
            fast= fast-> next ;
        }
        while(fast!=nullptr){
            fast = fast -> next ; 
            slow = slow -> next ;
        }
        ListNode* toDel = slow->next; 
        slow->next = slow-> next -> next ;
        delete toDel ;
        return dummy->next ;
    }
};