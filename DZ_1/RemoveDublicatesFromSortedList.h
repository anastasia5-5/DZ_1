#pragma once
class RemoveDublicatesFromSortedList
{
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* current = head;

        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Найден дубликат - удаляем следующий узел
                ListNode* duplicate = current->next;
                current->next = current->next->next;
                delete duplicate;
            }
            else {
                // Переходим к следующему узлу
                current = current->next;
            }
        }

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

