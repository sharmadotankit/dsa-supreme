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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> listArr;
        while(head){
            listArr.push_back(head->val);
            head = head->next;
        }
        stack<int> stackOfIndex;
        for(int i=0;i<listArr.size();++i){
            while(  !stackOfIndex.empty() && listArr[stackOfIndex.top()] < listArr[i] ){
                int indexOfElementToUpdate = stackOfIndex.top();
                stackOfIndex.pop();
                listArr[indexOfElementToUpdate] = listArr[i];
            }
            stackOfIndex.push(i);
        }

        while(!stackOfIndex.empty()){
            listArr[stackOfIndex.top()] = 0;
            stackOfIndex.pop();
        }

        listArr[listArr.size()-1] = 0;

        return listArr;
    }
};