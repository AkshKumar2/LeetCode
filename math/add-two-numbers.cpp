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
        ListNode* dum=new ListNode(0);
        ListNode* cur=dum;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int first_val=0;
            int second_val=0;
            if(l1!=nullptr){
                first_val=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                second_val=l2->val;
                l2=l2->next;
            }
            int sum=first_val+second_val+carry;
            int digit=sum%10;
            carry=sum/10;
            cur->next=new ListNode(digit);
            cur=cur->next;

        }
        return dum->next;
    }
};