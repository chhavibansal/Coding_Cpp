/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode *ohead = NULL , *ehead = NULL ,*odd = NULL ,*even = NULL;
        
        int pos  = 1;
        while(head != NULL){
            // odd =>true
            if(pos&1){
                if(ohead == NULL){
                    ohead = head;
                    odd = head;
                }else{
                    odd->next = head;
                    odd = odd->next;
                }
            }else{
                //even pos == even
                if(ehead == NULL){
                    ehead = head;
                    even = head;
                }else{
                    even->next = head;
                    even = even->next;
                }
                
            }
            pos+=1;
            head = head->next;
        }
        // condiiton linkinf 
        odd->next = ehead;
        even->next= NULL;
        return ohead;
    }
};
