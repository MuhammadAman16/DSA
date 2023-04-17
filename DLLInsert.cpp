using namespace std;
#include <iostream>
#include <memory>
#include <cmath>

class node
{
private:
    int data;
    node *next;

public:
    void insert(int data, node **head);
    void print(node **head);
};
void node ::insert(int data, node **head)
{
    node *temp = new node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
};
void node::print(node **head)
{
    node *temp = new node();
    temp = *head;
    while (temp != NULL)
    {
        cout << temp->data;
        cout << " ";
        temp = temp->next;
    }
};
int main()
{
    node *head = new node();
    head = NULL;
    node *list = new node();
    list->insert(10, &head);
    list->insert(20, &head);
    list->insert(30, &head);
    list->print(&head);
}