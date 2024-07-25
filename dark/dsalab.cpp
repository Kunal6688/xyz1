#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void search_Insert(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->data == key)
    {
        int value;
        cout << "Location found" << endl
             << "Enter the new element to be inserted: ";
        cin >> value;
        node *new_node = new node(value);
        new_node->data = value;
        new_node->next = temp->next;
        temp->next = new_node;
    }
    else
    {
        cout << "Location not Found!!!!!!" << endl;
    }
}
int main()
{
    cout<<"Name : Kunal Jangid"<<endl<<endl;
    int a, ele;
    node *head = NULL;
    insert(head, 21);
    insert(head, 37);
    insert(head, 42);
    insert(head, 69);
    insert(head, 23);
    insert(head, 88);
    cout << endl
         << "You have following the Linked List:" << endl;
    display(head);
    do
    {
        cout << "1. For search and Insert after the element" << endl
             << "2. For Display" << endl
             << "3. For EXIT." << endl;
        cout << "Enter your choice: ";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter a element to be searched: ";
            cin >> ele;
            search_Insert(head, ele);
            break;
        case 2:
            display(head);
            break;
        case 3:
            break;
        default:
            cout << "Invalid Choice!";
        }
    } while (a != 3);
    return 0;
}