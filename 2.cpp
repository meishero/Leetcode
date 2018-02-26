/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1,s2;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        
        while(cur1)
        {
            char c[2]={0};
            sprintf(c,"%d",cur1->val);
            s1.append(c,1);
            cur1 = cur1->next;
        }
        while(cur2)
       {
            char c[2]={0};
            sprintf(c,"%d",cur2->val);
            s2.append(c,1);
            cur2 = cur2->next;
        }
            
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        char str[2048] ={0};
        sprintf(str,"%d",(stoi(s1,NULL,10)+stoi(s2,NULL,10)));
        string s3 =str;
        cur1 = l1;
        for(int i =0;i<s3.length();i++)
        {
            int a;
            atoi(s3[i],&a,10);
            cur1->val = a;
            
            if(!cur1->next)
            {
                cur1->next = new ListNode(0);
            }
            cur1=cur->next;
        }
        
        return l1;
    }
};