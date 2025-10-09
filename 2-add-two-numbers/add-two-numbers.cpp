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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carryOver=0;
        int a,b, num;
        ListNode* result = new ListNode(0);
        ListNode* tail = result;

        while (l1!=NULL || l2!= NULL || carryOver!=0){
            if (l1!=NULL){
                a=l1->val;
            } else{
                a=0;
            }
            if (l2!=NULL){
                b=l2->val;
            } else{
                b=0;
            }
            int sum= a+b+carryOver;
            carryOver= sum/10;
            num=sum%10;

            ListNode* newNode= new ListNode(num);
            tail->next= newNode;
            tail=tail->next;

            if (l1!= NULL){
                l1=l1->next;
            }else {
                l1=NULL;
            }
            if (l2!= NULL){
                l2=l2->next;
            }else {
                l2=NULL;
            }
        }
        result = result->next;
        
        return result;


    }
};