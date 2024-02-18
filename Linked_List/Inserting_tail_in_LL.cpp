#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *convertArr2LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }

  return head;
}

void print(Node *head) // Print the LL
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  cout << endl;
}

Node *InsertingTail(Node *head,int val)
{
  if(head==NULL) return new Node(val);

  Node *temp=head;

  while(temp->next!=NULL)
  {
    temp=temp->next;
  }

  Node *newtail=new Node(val);
  temp->next=newtail;

  return head;
}



int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2LL(arr);
  head = InsertingTail(head,32);  
  // head=new Node(100,head); New node is automatically creating the new node and pointing to the head
  print(head);

  return 0;
}