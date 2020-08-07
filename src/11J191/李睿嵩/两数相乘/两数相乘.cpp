/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param l1: the first list
     * @param l2: the second list
     * @return: the product list of l1 and l2
     */
    long long multiplyLists(ListNode * l1, ListNode * l2) {
        // write your code here
        long a=0,b=0;
        while(l1!=NULL)
        {
            a*=10;
            a+=l1->val;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            b*=10;
            b+=l2->val;
            l2=l2->next;
        }
        return a*b;
    }
};