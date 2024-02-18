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

Node *InsertingAtKthposition(Node *head, int value, int k)
{
  if (head == NULL)
  {
    if (k == 1)
      return new Node(value);
    else
      return NULL;
  }

  if (k == 1)
  {
    Node *temp = new Node(value, head);
    return temp;
  }

  int cnt = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    cnt++;

    if (cnt == k - 1)
    {
      Node *x = new Node(value);
      x->next = temp->next;
      temp->next=x;
      break;
    }

    temp = temp->next;
  }

  return head;
}

int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2LL(arr);
  head = InsertingAtKthposition(head, 32,3);
  // head=new Node(100,head); New node is automatically creating the new node and pointing to the head
  print(head);

  return 0;
}