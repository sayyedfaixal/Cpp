#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

public:
    Node(int data1, Node *prev1, Node *next1)
    {
        data = data1;
        prev = prev1;
        next = next1;
    }
    // Constructor which by default set prev and next to nullptr
public:
    Node(int data1)
    {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};
Node *convertArrayToDoublyLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *iteratorPtr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNodePtr = new Node(arr[i]);
        newNodePtr->prev = iteratorPtr;
        iteratorPtr->next = newNodePtr;
        iteratorPtr = newNodePtr;
    }
    return head;
}
void printDll(Node *head)
{
    Node *mover = head;
    while (mover)
    {
        cout << " <-> " << mover->data;
        mover = mover->next;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = convertArrayToDoublyLL(arr);
    printDll(head);
    return 0;
}