
  //Definition of singly-linked-list:
 
  class ListNode {
  public:
      int val;
      ListNode *next;
      ListNode(int val) {
         this->val = val;
         this->next = NULL;
      }
  }
 



class Solution {
public:
    /**
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        int a=0;
        ListNode *l0;
        ListNode *l1;
        ListNode *l2;
        l0=head;
        l1=head;
        l2=head;
        while(l0!=NULL)
        {
            a++;
            l0=l0->next;
        }
        int *p=new int[a];
        for(int i=0;i<a;i++)
        {
            p[i]=l2->val;
            l2=l2->next;
        }
        int b=a;
        for(int i=0;i<a;i++)
        {
            l1->val=p[b-1];
            b--;
            l1=l1->next;
        }
        delete[] p;
        return head;
    }
};