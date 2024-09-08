#include <iostream>
using namespace std;

class LinkedList
{
public:
    struct Node
    {
        int data;
        Node *link;
    } *head;

public:
    void append(int num);
    void addAsFirst(int num);
    void addAfter(int c, int num);
    void remove(int num);
    void display();
    int count();
    ~LinkedList();
};

LinkedList::LinkedList()
{
    head = NULL;
}

void LinkedList::append(int num)
{
    Node *temp, *newNode;
    newNode = new Node;
    newNode->data = num;
    newNode->link = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newNode;
    }
}

void LinkedList::addAsFirst(int num)
{
    Node *newNode = new Node;
    newNode->data = num;
    newNode->link = head;
    head = newNode;
}

void LinkedList::addAfter(int c, int num)
{
    Node *temp = head;
    for (int i = 0; i < c && temp != NULL; i++)
        temp = temp->link;
    if (temp == NULL)
    {
        cout << "\nThere are less than " << c << " elements.";
        return;
    }
    Node *newNode = new Node;
    newNode->data = num;
    newNode->link = temp->link;
    temp->link = newNode;
}

void LinkedList::remove(int num)
{
    Node *current = head;
    Node *previous = NULL;
    while (current != NULL && current->data != num)
    {
        previous = current;
        current = current->link;
    }
    if (current == NULL)
    {
        cout << "\nElement " << num << " not found.";
        return;
    }
    if (previous == NULL)
    {
        head = current->link;
    }
    else
    {
        previous->link = current->link;
    }
    delete current;
}

void LinkedList::display()
{
    Node *temp = head;
    cout << "\nLinked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int LinkedList::count()
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

LinkedList::~LinkedList()
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->link;
        delete temp;
    }
}

int main()
{
    LinkedList list;
    cout << "No. of elements = " << list.count();

    list.append(12);
    list.append(13);
    list.append(23);
    list.append(43);
    list.append(44);
    list.append(50);
    list.addAsFirst(2);
    list.addAsFirst(1);
    list.addAfter(3, 333);
    list.addAfter(6, 666);
    list.display();

    cout << "No. of elements = " << list.count();

    list.remove(333);
    list.remove(12);
    list.remove(98);
    cout << "\nNo. of elements = " << list.count();

    return 0;
}
