//Leet code 2 : Add two number

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
        ListNode*ans = new ListNode();
        ListNode*temp = ans;
        int carry = 0;
        while(l1!=nullptr && l2!=nullptr){
            int value = 0;
            value+= (l1->val + l2->val)+carry;
            int newValue = value%10;      
            l1 = l1->next;
            l2 = l2->next;
            ListNode*localListNode = new ListNode(newValue);
            temp->next =  localListNode;
            temp = temp->next;
            if(value>9){
                carry =  ceil(value/10);
            }else{
                    carry = 0;
                }
        }

        if(l1!=nullptr){
            while(l1!=nullptr){
                int value = l1->val + carry;
                int newValue = value%10;  
                l1 = l1->next;  
                ListNode*localListNode = new ListNode(newValue);
                temp->next =  localListNode;
                temp = temp->next;
                if(value>9){
                    carry =  ceil(value/10);
                }else{
                    carry = 0;
                }
            }
        }
        if(l2!=nullptr){
            while(l2!=nullptr){
                int value = l2->val + carry;
                int newValue = value%10;  
                l2 = l2->next;  
                ListNode*localListNode = new ListNode(newValue);
                temp->next =  localListNode;
                temp = temp->next;
                if(value>9){
                    carry =  ceil(value/10);
                }else{
                    carry = 0;
                }
            }
        }

        if(carry>0){
             ListNode*localListNode = new ListNode(carry);
                temp->next =  localListNode;
                temp = temp->next;
        }
        return ans->next;
    }
};