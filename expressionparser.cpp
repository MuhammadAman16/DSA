using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

int IsOperator(char x)
{
    if (x == '^')
    {
        return 3;
    }
    if (x == '*')
    {
        return 2;
    }
    if (x == '/')
    {
        return 2;
    }
    if (x == '+')
    {
        return 1;
    }
    if (x == '-')
    {
        return 1;
    }
    if (x == '(')
    {
        return 4;
    }
    if (x == ')')
    {
        return 4;
    };
    return 0;
};
class node
{
public:
    char value;
    node *leftnode, *rightnode;
};
node *root = NULL;
node *stack[7];
int top = -1;

void tree()
{
    char expression[7] = {'A', 'B', '+', 'C', 'D', '-', '*'};

    for (int i = 0; i < sizeof(expression); i++)
    {
        node *temp = new node();
        temp->value = expression[i];
        temp->leftnode = NULL;
        temp->rightnode = NULL;
        if (IsOperator(expression[i]) == 0)
        {
            top++;
            stack[top] = temp;
        }
        else // operator
        {
            temp->rightnode = stack[top];
            top--;
            temp->leftnode = stack[top];
            stack[top] = temp;
        }
    }
    root = stack[top];
};
void Inorder(node *rootnode)
{
    if (rootnode->leftnode != NULL)
    {
        cout << "(";
        Inorder(rootnode->leftnode);
    }
    cout << rootnode->value << " ";
    if (rootnode->rightnode != NULL)
    {
        Inorder(rootnode->rightnode);
        cout << ")";
    }
};
void Preorder(node *rootnode)
{
    cout << rootnode->value;
    cout << " ";
    if (rootnode->leftnode != NULL)
    {
        Preorder(rootnode->leftnode);
    }
    if (rootnode->rightnode != NULL)
    {
        Preorder(rootnode->rightnode);
    }
};
void Postorder(node *rootnode)
{
    if (rootnode->leftnode != NULL)
    {
        Postorder(rootnode->leftnode);
    }
    if (rootnode->rightnode != NULL)
    {
        Postorder(rootnode->rightnode);
    }
    cout << rootnode->value;
    cout << " ";
};
int main()
{
    tree();
    Inorder(root);
    cout << endl;
    Preorder(root);
    cout << endl;
    Postorder(root);
}
