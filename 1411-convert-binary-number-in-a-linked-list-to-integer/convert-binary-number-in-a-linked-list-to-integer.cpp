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

    int getDecimalValue(ListNode* head) {
        ListNode * cur= head;
        long long d=0;
        while( cur!= NULL){
            d<<=1;
            d|= cur->val;
            cur= cur->next;
        }
        return d;
        
        // int num= getDecimal(d);
        
       
        // return num;
        return 0;
    }
};