/*

Problem statement
You are given a doubly-linked list of size 'N', consisting of positive integers. Now your task is to reverse it and return the head of the modified list.

Note:
A doubly linked list is a kind of linked list that is bidirectional, meaning it can be traversed in both forward and backward directions.
Example:

Input: 
4
4 3 2 1

Output: 
1 2 3 4


****************************** CODE ****************************


Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};



Node* reverseDLL(Node* head)
{   
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;

    Node *prev=NULL;
    Node *current=head;

    while(current!=NULL)
    {
        prev=current->prev;
        current->prev=current->next;
        current->next=prev;

        current=current->prev;
    }

    return prev->prev;

}

*/

// https://youtu.be/u3WUW2qe6ww?feature=shared

// The idea is to swap next and prev pointers between every two consecutive nodes.
//  And in last making the last node as head and return it.





