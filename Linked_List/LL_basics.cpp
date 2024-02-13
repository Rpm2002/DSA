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
  Node(int data1)  // constructor 
  {
    data = data1;
    next = nullptr;
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4};
  Node *y = new Node(arr[0]); // It creates a new Node object y using the constructor that takes a single integer parameter. 

  cout<<y->data;  

  return 0;
}