#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == NULL || headB == NULL) {
      return NULL;
    }

    int len1 = 0;
    int len2 = 0;

    ListNode *l1 = headA;
    ListNode *l2 = headB;

    while (l1 != NULL) {
      len1++;
      l1 = l1->next;
    }

    while (l2 != NULL) {
      len2++;
      l2 = l2->next;
    }

    l1 = headA;
    l2 = headB;
    int diff = len1 - len2;
    if (diff >= 0) {
      for (int i = 0; i < diff; i++) {
        l1 = l1->next;
      }
    } else {
      for (int i = 0; i < 0 - diff; i++) {
        l2 = l2->next;
      }
    }

    while (l1->next != 0) {
      if (l1 == l2) {
        return l1;
      }
      l1 = l1->next;
      l2 = l2->next;
    }

    return NULL;
  }
};

int main() {
  ListNode l1[] = {{1}, {2}, {3}, {4}, {5}};
  ListNode *h1 = l1;

  ListNode l2[] = {{1}};
  ListNode *h2 = l2;

  int size1 = sizeof(l1) / sizeof(ListNode);

  for (int i = 0; i < size1 - 1; i++) {
    l1[i].next = &l1[i + 1];
  }

  h2->next = &l1[2];

  Solution solution;

  ListNode *result = solution.getIntersectionNode(h1, h2);

  cout << result->val << endl;

  return 0;
}
