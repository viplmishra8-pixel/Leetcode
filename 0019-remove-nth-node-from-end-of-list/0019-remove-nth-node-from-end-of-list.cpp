class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head ; 
        int len = 0 ; 
        while(curr!=nullptr){
            len++;
            curr= curr->next ;
        }
        int k = len - n ; 
        curr = head; 
        if(n == len){return head->next ;}
        for(int i= 1 ; i< k ; i++){
            curr= curr->next ;
        }
        curr->next = curr->next->next;
        return head ;
    }
};