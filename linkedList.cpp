#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

//Adds a new node to the end of list
void insertEnd (Node** head, int value)
{
    Node* newNode = new Node ();
    newNode ->data = value;
    newNode -> next = nullptr;
    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }
    //starting at first of the list
    Node* temp = *head;
    while (temp ->next != nullptr)
    {
        temp = temp ->next;
    }
    //Connect last node to the new
    temp ->next = newNode;
}
//Function used to delete first node that matches value
void deleteNode (Node** head, int value)
{
    if (*head ==nullptr)
        return;

    Node* temp= *head;
    Node* previous = nullptr;
    //So if first node contains the value, should remove it
    if (temp->data == value)
    {
        *head = temp-> next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp ->data != value)
    {
        previous =temp;
        temp = temp ->next;
    }
    //If the value is not found
    if (temp == nullptr)
        return;
    previous->next = temp ->next;
    delete temp;
}
//Now displays the list
void displayList(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data<< "->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

//Finally frees all memory used by list
void freeList(Node* head)
{
Node* temp;
while (head!= nullptr)
{
    temp = head;
    head= head ->next;
    delete temp;
}
    }
int main ()
{
    Node* head = nullptr;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head,30);

    cout << "Original List: ";
    displayList (head);

    deleteNode(&head, 20);
    displayList(head);
    freeList (head);

    return 0;
}



// Created by jerry on 2/19/2026.
//