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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int size = 0;
        while (temp)
        {
            size++;
            temp = temp->next;
        }
        cout << size << endl;
        int half = (size/2);
        cout << half << endl;
        while (half--)
        {
            head = head->next;
        }
        return head;
    }
};
