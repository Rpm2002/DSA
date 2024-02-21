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

void DeleteNode(Node *temp)
{
  Node *prev = temp->back;
  Node *front = temp->next;

  if (front == NULL)
  {
    prev->next = nullptr;
    prev->back = nullptr;
    free(temp);

    return;
  }

  prev->next = front;
  front->back = prev;
  temp->back = temp->next = nullptr;
  free(temp);
}

int main()
{
  vector<int> arr = {45, 23, 2, 3};
  Node *head = convertArr2DLL(arr); // Convert the array to a linked list
  DeleteNode(head->next->next->next);
  print(head);

  return 0;
}
