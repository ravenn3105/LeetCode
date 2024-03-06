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
int size(ListNode* head){
    int s=0;
    ListNode* temp=head;
    while (temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s;
}
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        // int s= size(head);
        int p=0;
        // if (s<k){
        //     k= k-s;
        // }
        if(head==NULL || k==0){return head;}
        while (temp->next!=NULL){
            temp=temp->next;
            p++;
            }
            temp->next=head;
            k=k%(p+1);
            int j=p-k;
            temp=head;
            while(j){
                temp=temp->next;
                j--;
            }
        ListNode* h= temp->next;
        temp->next=NULL;
        return h;
    }
};