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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        while(list1 != NULL){
            arr.push_back(list1 -> val);
            list1 = list1 -> next;
        }
        while(list2 != NULL){
            arr.push_back(list2 -> val);
            list2 = list2 -> next;
        }
        sort(arr.begin(),arr.end());
        ListNode* head =NULL;
        ListNode* tail = NULL;
        for(int x : arr){
            ListNode* newNode = new ListNode(x);
        
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        }
        return head;
    }
};