#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* zipLinkedList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    // Reverse the second half of the linked list
    ListNode *secondHalf = slow->next;
    slow->next = NULL;
    ListNode *temp1 = NULL;
    ListNode *temp2 = secondHalf;
    ListNode *nextNode;

    while (temp2 != NULL) {
        nextNode = temp2->next;
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = nextNode;
    }
    secondHalf = temp1;

    // Zip the linked list
    ListNode *firstHalf = head;
    while (secondHalf != NULL)
        {
        nextNode = firstHalf->next;
        firstHalf->next = secondHalf;
        secondHalf = secondHalf->next;
        firstHalf->next->next = nextNode;
        firstHalf = nextNode;`
    }

    return head;
}

void printList(ListNode *head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;

        ListNode *head = NULL;
        ListNode *tail = NULL;

        for (int i = 0; i < K; i++) {
            int value;
            cin >> value;
            ListNode *newNode = new ListNode(value);

            if (head == NULL) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        head = zipLinkedList(head);
        printList(head);
    }

    return 0;
}
