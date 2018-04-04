/*
* ID: LeetCode 2
* Link: https://leetcode.com/problems/add-two-numbers/
* Author: SashiRin
* Date: 2018-04-04
* Time: 73MS
* Memory: N/A
* Note: N/A
*/
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* l3 = new ListNode(0);
        ListNode* p = l3;
        int cnt = 0;
        ListNode* last = NULL;
        while (l1 != NULL && l2 != NULL)
        {
            p->val = (l1->val + l2->val + cnt) % 10;
            cnt = (l1->val + l2->val + cnt) / 10;
            p->next = new ListNode(0);
            last = p;
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == NULL && l2 != NULL)
        {
            p = listCopy(l2, p, cnt);
        }
        else if (l1 != NULL && l2 == NULL)
        {
            p = listCopy(l1, p, cnt);
        }
        else
        {
            if (cnt == 1)
            {
                p->val = 1;
            }
            else
            {
                last->next = NULL;
            }
        }
        return l3;
    }
private:
    ListNode* listCopy(ListNode *l, ListNode *res, int cnt)
    {
        ListNode* p = res;
        ListNode* last = NULL;
        while (l != NULL)
        {
            p->val = (l->val + cnt) % 10;
            cnt = (l->val + cnt) / 10;
            p->next = new ListNode(0);
            last = p;
            p = p->next;
            l = l->next;
        }
        if (cnt == 1)
        {
            p->val = 1;
        }
        else
        {
            last->next = NULL;
        }
        return res;
    }
};

int main(int argc, char** argv)
{
    Solution solution;
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(8);
    ListNode* l2 = new ListNode(0);
    ListNode* l3 = solution.addTwoNumbers(l1, l2);
    return 0;
}
