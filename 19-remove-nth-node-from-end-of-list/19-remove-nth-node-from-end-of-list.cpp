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
    int cal(ListNode* head)
    {
        int len=0;
        while(head!=NULL)
            len++,head=head->next;
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=cal(head)-n;
        if(len==0){
            ListNode* tmp=head->next;
            head->next=NULL;
            head=tmp;
        }else{
            // len--;
            ListNode* tmp=head,*pre=head;
            while(len--)
            {
                pre=tmp;
                tmp=tmp->next;
            }
            // cout<<tmp->val<<" ";
            pre->next=tmp->next;
        }
        return head;
    }
};