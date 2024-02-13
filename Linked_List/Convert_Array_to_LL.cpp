#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1) // constructor
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1) // constructor
  {
    data = data1;
    next = nullptr;
  }
};

Node *convertArr2LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]); // Create the head node
  Node *mover = head; // Initialize mover to the head node

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]); // Create a new node with data from the array
    mover->next = temp; // Link the current node to the newly created node
    mover = mover->next; // Move the mover to the newly created node
  }

  return head; // Return the head of the linked list
}


int main()
{
  vector<int> arr = {45,23,2,3};
  Node *head = convertArr2LL(arr); // Convert the array to a linked list
  cout << head->data; // Print the data of the head node

  return 0;
}
