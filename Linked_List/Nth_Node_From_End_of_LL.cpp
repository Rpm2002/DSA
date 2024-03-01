/*

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:
Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there are 9 nodes in linked list and we need to find 2nd node from end. 2nd node from end is 8.

Example 2:
Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the linked list, 
the output is -1.

*/

// *********************************** CODE**********************************

/*

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    
    int LengthofLL(Node *head)
    {
        int cnt=0;
        Node *temp=head;
        
        while(temp)
        {
            cnt++;
            temp=temp->next;
        }
        
        return cnt;
    }
    
    int getNthFromLast(Node *head, int n)
    {
        int length=LengthofLL(head);
        
        int nodeFromBeg=length-n+1;
        
        if(nodeFromBeg<=0)
        {
            return -1;
        }
        
        Node * temp=head;
        int cnt=0;
        
        while(temp)
        {
            cnt++;
            
            if(cnt==nodeFromBeg)
            {
                return temp->data;
                break;
            }
            
            temp=temp->next;
        }
           
    }
};

// https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

*/