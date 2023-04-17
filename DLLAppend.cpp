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
    void push(int data, node **head);
    void print(node **head);
};

void node::push(int data, node **head)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        node *temphead = new node();
        temphead = *head;
        while (temphead->next != NULL)
        {
            temphead = temphead->next;
        }
        temphead->next = temp;
    }
}

void node ::print(node **head)
{
    node *temphead = new node();
    temphead = *head;
    cout << "List of Elements: " << endl;
    while (temphead != NULL)
    {
        cout << temphead->data;
        cout << " ";
        temphead = temphead->next;
    };
};

int main()
{
    node *A = new node();
    node *head = new node();
    head = NULL;
    A->push(20, &head);
    A->push(30, &head);
    A->push(40, &head);
    A->print(&head);
};