#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp = NULL;
        if (list1 == NULL)
            temp = list2;
        else if (list2 == NULL)
            temp = list1;
        else if (list1->val < list2->val)
        {
            temp = list1;
            temp->next = mergeTwoLists(list1->next, list2);
        }
        else
        {
            temp = list2;
            temp->next = mergeTwoLists(list1, list2->next);
        }
        return temp;
    }
};