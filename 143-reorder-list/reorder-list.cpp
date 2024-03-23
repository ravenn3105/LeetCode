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
    void reorderList(ListNode* head) {
         vector<int> v1;
        ListNode* temp2 = head;
        while(temp2 != NULL){
            v1.push_back(temp2->val);
            temp2 = temp2->next;
        }
        
        int i = 0, j = v1.size()-1;
        while(i <= j || head != NULL){
            head->val = v1[i];
            head = head->next;
            if(head != NULL) 
            {
              head->val = v1[j];
              head = head->next;
            }
            i++;
            j--;
        }
    }
};