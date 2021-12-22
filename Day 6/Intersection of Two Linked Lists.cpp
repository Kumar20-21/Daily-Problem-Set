/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<string>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA,* tempB=headB;
        if(headA==NULL||headB==NULL)
            return NULL;
        int m=1,n=1;
        while(tempA->next!=NULL||tempB->next!=NULL)
        {
            if(tempA->next!=NULL)
            {
                tempA=tempA->next;
                m++;
            }
            if(tempB->next!=NULL)
            {
                tempB=tempB->next;
                n++;
            }
        }
        tempA=headA;
        tempB=headB;
        while(m>n||m<n)
        {
            if(m>n)
            {
                tempA=tempA->next;
                m--;
            }
            else
            {
                n--;
                tempB=tempB->next;
            }
        }
        while(tempA!=tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        /*
        while(tempA!=tempB)
        {
            tempA=tempA==NULL?headB:tempA->next;
            tempB=tempB==NULL?headA:tempB->next;
        }
        */
        return tempA;
    }
};
