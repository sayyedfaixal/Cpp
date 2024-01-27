#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *back;
    Node *front;

public:
    Node(int data1, Node *prev1, Node *next1)
    {
        data = data1;
        back = prev1;
        front = next1;
    }
    // Constructor which by default set back and front to nullptr
public:
    Node(int data1)
    {
        data = data1;
        back = nullptr;
        front = nullptr;
    }
};
Node *reverseLL(Node *head)
{
    Node *currentNode = head;
    Node *prevNode;
    while (currentNode)
    {
        prevNode = currentNode->back;
        currentNode->back = currentNode->front;
        currentNode->front = prevNode;
        currentNode = currentNode->back;
    }
    head = prevNode->back;
    return head;
}
Node *convertArrayToDoublyLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *iteratorPtr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNodePtr = new Node(arr[i]);
        newNodePtr->back = iteratorPtr;
        iteratorPtr->front = newNodePtr;
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
        mover = mover->front;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = convertArrayToDoublyLL(arr);
    printDll(head);
    cout << "\nAfter reversing the Doubly Linked List is :" << endl;
    head = reverseLL(head);
    printDll(head);
    return 0;
}