#pragma once
class MergeTwoSortedLists
{
    ListNode* mergeTwoSortedLists(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

       
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                current->next = l1;
                l1 = l1->next;
            }
            else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }

       
        if (l1 != nullptr) {
            current->next = l1;
        }
        else {
            current->next = l2;
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
