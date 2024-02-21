#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1) // constructor
  {
    data = data1;
    next = next1;
    back = back1;
  }

public:
  Node(int data1) // constructor
  {
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};

void print(Node *head) // Print the LL
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }

  cout << endl;
}

Node *convertArr2DLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = prev->next;
  }

  return head;
}

Node *insertBeforeHead(Node *head, int value)
{
  Node *newHead = new Node(value, head, nullptr);
  head->back = newHead;

  return newHead;
}

Node *insertBeforeTail(Node *head, int value)
{
  if (head->next == NULL)
  {
    return insertBeforeHead(head, value);
  }

  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }

  Node *prev = tail->back;
  Node *newNode = new Node(value, tail, prev);
  prev->next = newNode;
  tail->back=newNode;

  return head;
}

int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2DLL(arr); // Convert the array to a linked list
  head = insertBeforeTail(head, 10);
  print(head);

  return 0;
}
