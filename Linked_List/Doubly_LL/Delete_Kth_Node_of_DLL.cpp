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

Node *DeleteHeadofDLL(Node *head)
{
  if (head == NULL or head->next == NULL)
  {
    return NULL;
  }

  Node *prev = head;
  head = head->next;

  head->back = nullptr;
  prev->next = nullptr;
  delete prev;

  return head;
}

Node *DeleteTailofDLL(Node *head)
{
  if (head == NULL or head->next == NULL)
  {
    return NULL;
  }

  Node *tail = head;

  while (tail->next != NULL)
  {
    tail = tail->next;
  }

  Node *newtail = tail->back;
  newtail->next = nullptr;
  tail->back = nullptr;
  delete tail;

  return head;
}

Node *DeleteKthNode(Node *head, int k)
{
  if (head == NULL)
  {
    return NULL;
  }

  int cnt = 0;
  Node *kNode = head;
  while (kNode != NULL)
  {
    cnt++;
    if (cnt == k)
    {
      break;
    }
    kNode = kNode->next;
  }

  Node *prev = kNode->back;
  Node *front = kNode->next;

  if (prev == NULL or front == NULL)
  {
    return NULL;
  }

  else if (prev == NULL)
  {
    DeleteHeadofDLL(head);
  }

  else if (front == NULL)
  {
    DeleteTailofDLL(head);
  }

  prev->next = front;
  front->back = prev;
  kNode->next = nullptr;
  kNode->back = nullptr;

  delete kNode;
  return head;
}

int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2DLL(arr); // Convert the array to a linked list
  head = DeleteKthNode(head,2);
  print(head);

  return 0;
}
