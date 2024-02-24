/*

You are given two non-negative numbers 'num1' and 'num2' represented in the form of linked lists.

The digits in the linked lists are stored in reverse order, i.e. starting from least significant digit (LSD) to the most significant digit (MSD), and each of their nodes contains a single digit.

Calculate the sum of the two numbers and return the head of the sum list.

Example :
Input:
'num1' : 1 -> 2 -> 3 -> NULL
'num2' : 4 -> 5 -> 6 -> NULL

Output: 5 -> 7 -> 9 -> NULL

Explanation: 'num1' represents the number 321 and 'num2' represents 654. Their sum is 975.


*/


// ************************************ CODE ************************************

/*

Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 

 Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *temp1=num1;
    Node *temp2=num2;
    Node *dummyHead=new Node(-1);
    Node *curr=dummyHead;
    int carry=0;

    while(temp1!=NULL or temp2!=NULL)
    {
        int sum=carry;

        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;

        Node *newNode=new Node(sum%10);
        carry=sum/10;

        curr->next=newNode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;

    }

    if(carry)
    {
        Node *newNode=new Node(carry);
        curr->next=newNode;
    }

    return dummyHead->next;
}

*/


// https://youtu.be/XmRrGzR6udg?feature=shared
