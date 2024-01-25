#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Constructor which by assign value of data = data1 and next = next1
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Another Constructor which by default assign next = nullptr
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int getLength(Node *head)
{
    Node *iterator = head;
    int length = 0;
    while (iterator->next != nullptr)
    {
        length++;
        iterator = iterator->next;
    }
    return length;
}
Node *convertArrayToLinkedList(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *iterator = head;
    for (int i = 1; i <= arr.size(); i++)
    {
        Node *tempNode = new Node(arr[i]);
        iterator->next = tempNode;
        iterator = tempNode;
    }
    return head;
}
Node *DeleteNodeAtStart(Node *head)
{
    Node *tempPtr = head;
    head = tempPtr->next;
    tempPtr->next = nullptr;
    delete tempPtr;
    return head;
}
Node *DeleteNodeAtEnd(Node *head)
{
    Node *tempPtr = head;
    Node *lastNodeHolder = head;
    while (tempPtr->next->next != nullptr)
    {
        tempPtr = tempPtr->next;
    }
    lastNodeHolder = tempPtr->next;
    tempPtr->next = nullptr;

    delete lastNodeHolder;
    return head;
}
Node *DeleteNodeAtGivenIndex(Node *head, int k)
{
    if (k == 0)
    {
        return DeleteNodeAtStart(head);
    }

    Node *tempPtr = head;
    Node *kthNodeHolder = head;
    while (k - 2)
    {
        tempPtr = tempPtr->next;
        k--;
    }
    kthNodeHolder = tempPtr->next;
    tempPtr->next = tempPtr->next->next;
    kthNodeHolder->next = nullptr;
    delete kthNodeHolder;
    return head;
}
void printLinkedList(Node *head)
{
    Node *iterator = head;

    while (iterator->next != nullptr)
    {
        cout << iterator->data << " -> ";
        iterator = iterator->next;
    }
}
int main()
{
    vector<int> arr = {2, 3, 5, 1, 10, 12};
    Node *head = convertArrayToLinkedList(arr);
    cout << "Linked List is : ";
    printLinkedList(head);
    cout << "\nLength is : " << getLength(head) << endl;

    head = DeleteNodeAtStart(head);
    cout << "After Deleting the first Node the linked list is : ";
    printLinkedList(head);
    cout << "\nLength is : " << getLength(head) << endl;

    head = DeleteNodeAtEnd(head);
    cout << "After Deleting the Last Node the linked list is : ";
    printLinkedList(head);
    cout << "\nLength is : " << getLength(head) << endl;

    head = DeleteNodeAtGivenIndex(head, 2);
    cout << "After Deleting the kth (k = 2) Node the linked list is : ";
    printLinkedList(head);
    cout << endl;
    return 0;
}
