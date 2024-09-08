#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *insertAtBeginning(Node *head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}

Node *insertAtEnd(Node *head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

Node *deleteNode(Node *head, int key)
{
    Node *temp = head;
    Node *prev = nullptr;
    // If the node to be deleted is the head
    if (temp != nullptr && temp->data == key)
    {
        head = temp->next; // Change head
        delete temp;       // Free memory
        return head;
    }
    // Search for the node to be deleted
    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // If the node with the given key is not present
    if (temp == nullptr)
    {
        return head;
    }
    // Unlink the node from linked list
    prev->next = temp->next;
    delete temp; // Free memory
    return head;
}

void printList(Node *head)
{ // Function to print the linked list
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    Node *head = nullptr;
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 15);

    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 15);

    head = deleteNode(head, 10);

    cout << "Linked List: ";
    printList(head);
    return 0;
}
