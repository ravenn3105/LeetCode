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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* temp1= dummy;
        ListNode* temp2= head;
        
        while (temp2 && temp2->next && temp2->next->next){
            temp1= temp1-> next;
            temp2= temp2->next->next;
        }
        ListNode* bleh;
        if (temp2->next==NULL){
            bleh= temp1->next;
            temp1->next= bleh->next;
            
        }else if(temp2->next->next==NULL){bleh= temp1->next->next;
        temp1->next->next= bleh->next;}
        
        return dummy->next;
    }
};
