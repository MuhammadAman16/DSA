using namespace std;
#include <iostream>
#include <cmath>
#include <memory>
class stack
{
private:
    int array[5];
    int top = -1;

public:
    void push(int x);
    void pop();
};

void stack ::push(int x)
{
    if (top < 5)
    {
        array[top++] = x;
    }
    else
    {
        cout << "Stack overflow";
    }
};
void stack ::pop()
{
    if (top != -1)
    {
        cout << array[top];
        top--;
    }
    else
    {
        cout << "Stack underflow";
    }
};

int main()
{
    stack a;
    a.push(12);
    cout << " ";
    a.push(10);
    cout << endl;
}