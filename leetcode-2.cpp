/*
* ID: LeetCode 2
* Link: https://leetcode.com/problems/add-two-numbers/
* Author: SashiRin
* Date: 2018/04/04
* Update: 2018/04/07
* Time: 63MS
* Memory: N/A
* Note: N/A
*/
#include <iostream>

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
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        int carry = 0;
        int l1_val = 0;
        int l2_val = 0;
        int sum = 0;
        while (l1 != NULL || l2 != NULL)
        {
            l1_val = l1 != NULL ? l1->val : 0;
            l2_val = l2 != NULL ? l2->val : 0;
            sum = (l1_val + l2_val + carry);
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1 != NULL ? l1->next : NULL;
            l2 = l2 != NULL ? l2->next : NULL;
        }
        if (carry > 0)
        {
            curr->next = new ListNode(carry);
        }
        return ans->next;
    }
};

int main(int argc, char** argv)
{
    Solution solution;
    ListNode *l1 = new ListNode(2);
    ListNode *curr = l1;
    curr->next = new ListNode(4);
    curr = curr->next;
    curr->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    curr = l2;
    curr->next = new ListNode(6);
    curr = curr->next;
    curr->next = new ListNode(4);
    ListNode* l3 = solution.addTwoNumbers(l1, l2);
    return 0;
}
