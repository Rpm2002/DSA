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

void print(Node *head)  // Print the LL
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  cout << endl;
}

Node *removesTail(Node *head)
{
  if(head==NULL or head->next==NULL)
  {
    return NULL;
  }

  Node *temp=head;

  while(temp->next->next!=NULL)
  {
    temp=temp->next;
  }

  delete temp->next;
  temp->next=nullptr;

  return head;
}

int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2LL(arr);
  head=removesTail(head);
  print(head);

  return 0;
}