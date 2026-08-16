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
    ListNode* merge(ListNode* l,ListNode* r){
        ListNode* dummyN=new ListNode(-1);
        ListNode* p1=l;
        ListNode* p2=r;
        ListNode* temp=dummyN;
        while(p1!=NULL && p2!=NULL){ 
            if(p1->val<p2->val){
                temp->next=p1;
                temp=p1;
                p1=p1->next;
                
            }
            else {
                temp->next=p2;
                temp=p2;
                p2=p2->next;
            }
        }
        if(p1){
            temp->next=p1;
        }
        else temp->next=p2;
        return dummyN->next;

    }
    ListNode* middle(ListNode* head){
        if(head==NULL || head->next==NULL)return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* mid=middle(head);
        ListNode* LeftNode=head;
        ListNode* RightNode=mid->next;
        mid->next=NULL;
        ListNode* left=sortList(LeftNode);
        ListNode* right=sortList(RightNode);
        return merge(left,right);
    }
};