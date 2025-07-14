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
        // long long d=0;
        string s="";
        while( cur!= NULL){
            // d<<=1;
            // d|= cur->val;
            if (cur->val==1){
                s+= '1';
            }
            else{ s+='0';}
            
            cur= cur->next;
        }
        cout<< s;
        return stoi(s, nullptr, 2);
        
        // int num= getDecimal(d);
        
       
        // return num;
        return 0;
    }
};