#pragma once

class SwappingNodesInALinkedList
{
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* first = head;
        ListNode* second = head;
        ListNode* fast = head;

        for (int i = 1; i < k; i++) {
            first = first->next;
            fast = fast->next;
        }

        while (fast->next != nullptr) {
            second = second->next;
            fast = fast->next;
        }

       
        int temp = first->val;
        first->val = second->val;
        second->val = temp;

        return head;
    }
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};