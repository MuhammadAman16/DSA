using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

// LEC 2: PROGRAM TO SWAP VALUES
// void swap(int &a, int &b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }
// int main()
// {
//     int x = 10;
//     int y = 20;
//     swap(x, y);
//     cout << "a:" << x << " b:" << y;
//     return 0;
// }

// LEC 3: CREATE AN ARRAY and formula to find address of any element
//  FIGURED OUT THE BASE ADDRESS BUT COULDN'T GET THE ADD IT PROPERLY
// int main()
// {
//     e &p1 adderss of 1 elemnent is";
//     cout << p1;int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *p = &list[0];
//     int *p1 = &list[1];
//     cout << "address of the 1st element is :" << p + (1 * 4);
//     cout << endl;
//     cout << "the &p0 adderss of 0 elemnent is";
//     cout << p;
//     cout << endl;
//     cout << "th
// }

// LEC:3 DYNAIMC ARRAYS
// int main()
// {
//     int *array = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         array[i] = i + 1;
//         cout << array[i] << endl;
//     }
// }

// LEC:3 2D DYNAMIC ARRAYS
// int main()
// {
//     int row = 2;
//     int col = 2;
//     int **TDA;
//     // MAKE AN ARRAY OF POINTERS IN HEAP OF SIZE ROW
//     TDA = new int *[row];
//     for (int i = 0; i < row; i++)
//     {
//         TDA[i] = new int[col];
//         for (int j = 0; j < col; j++)
//         {
//             cout << "Input Value for Array Index: ";
//             cout << i;
//             cout << j;
//             cout << " ";
//             cin >> TDA[i][j];
//             cout << endl;
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//
//             cout << TDA[i][j];
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

//  LEC 5: 2D DYNAMIC JAGGED ARRAY WITH DYNAMIC ROWS
// int main()
// {
//     int row;
//     int col;
//     cout << "Enter the Number of Rows";
//     cin >> row;
//     int *colArray = new int[row];
//     int **TDArray = new int *[row];
//     for (int l = 0; l < row; l++)
//     {
//         cout << "Enter the number of columns for ";
//         cout << l + 1;
//         cout << " row: ";
//         cin >> col;
//         colArray[l] = col;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         TDArray[i] = new int[colArray[i]];
//         for (int j = 0; j < colArray[i]; j++)
//         {
//             cout << "Enter the value for index";
//             cout << i;
//             cout << " x ";
//             cout << j;
//             cout << " :";
//             cin >> TDArray[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colArray[i]; j++)
//         {
//             cout << TDArray[i][j];
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         delete[] TDArray[i];
//     }
//     delete[] TDArray;
// }

//  LEC 5: 2D DYNAMIC JAGGED ARRAY
//  int main()
//  {
//      int row = 3;
//      int column[6] = {};
//      int col;
//      int **TDA = new int *[row];
//      for (int l = 0; l < 3; l++)
//      {
//          cout << "Enter Number of columns for ";
//          cout << l + 1;
//          cout << " row :";
//          cin >> col;
//          column[l] = col;
//          TDA[l] = new int[column[l]];
//      }
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < column[i]; j++)
//          {
//              cout << "Enter Value for index";
//              cout << i;
//              cout << j;
//              cout << " ";
//              cin >> TDA[i][j];
//          }
//      }
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < column[i]; j++)
//          {
//              cout << TDA[i][j];
//              cout << " ";
//          }
//          cout << endl;
//      }
//  }

// LEC 6: DYNAMIC LINKED LIST APPENDING
// class Node
// {
// private:
//     int data;
//     Node *next;
// public:
//     void Append(int val);
//     void print();
// };
// struct Node *head;
// void Node::Append(int val)
// {
//     Node *temp = new Node;
//     temp->data = val;
//     temp->next = nullptr;
//     if (head == nullptr)
//     {
//         head = temp;
//     }
//     else
//     {
//         struct Node *Th = new Node;
//         Th = head;
//         while (Th->next != nullptr)
//         {
//             Th = Th->next;
//         };
//         Th->next = temp;
//     }
// };
// void Node ::print()
// {
//     struct Node *Th = new Node;
//     Th = head;
//     cout << "List of Elements: ";
//     cout << endl;
//     while (Th != nullptr)
//     {
//         cout << Th->data;
//         cout << " ";
//         Th = Th->next;
//     };
// };
// int main()
// {
//     Node linkedList;
//     int size, input;
//     head = nullptr;
//     cout << "Enter The Size of Array: ";
//     cout << endl;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter Data in ";
//         cout << i;
//         cout << " Element: ";
//         cin >> input;
//         linkedList.Append(input);
//         linkedList.print();
//         cout << endl;
//     }
// }

// LEC 6: DYNAMIC LINKED LIST USING INSERTION
// class Node
// {
// private:
//     int data;
//     Node *next;
// public:
//     void insert(int x);
//     void print();
// };
// Node *head;
// void Node::insert(int x)
// {
//     Node *temp = new Node();
//     temp->data = x;
//     temp->next = head;
//     head = temp;
// };
// void Node::print()
// {
//     Node *th = new Node();
//     th = head;
//     cout << "List of Elements: ";
//     while (th != nullptr)
//     {
//         int x = th->data;
//         cout << " ";
//         cout << x;
//         th = th->next;
//     }
// }
// int main()
// {
//     Node *LinkedList;
//     head = nullptr;
//     int size;
//     cout << "Enter the Size of Array: ";
//     cin >> size;
//     int inputData;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Insert the value for :";
//         cout << i;
//         cout << " node: ";
//         cin >> inputData;
//         LinkedList->insert(inputData);
//         LinkedList->print();
//         cout << endl;
//     };
// }

// LEC 8 STACK / QUEUE // STACK USING ARRAY
// class stack
// {
// private:
//     int top = -1;
//     int array[6];
// public:
//     void push(int number);
//     void pop();
// };
// void stack ::push(int number)
// {
//     if (top < 5)
//     {
//         top++;
//         array[top] = number;
//         cout << array[top];
//     }
//     else
//     {
//         cout << " Stack overflow ";
//     };
// };
// void stack ::pop()
// {
//     if (top != -1)
//     {
//         cout << "Following Number has been removed from the stack ";
//         cout << array[top];
//         top--;
//     }
//     else
//     {
//         cout << "Stack Underflow";
//     }
// }
// int main()
// {
//     stack a;
//     a.push(12);
//     cout << " ";
//     a.push(10);
//     cout << endl;
//     a.pop();
//     cout << endl;
//     a.push(11);
//     int i;
// };

// LEC 8 STACK USING LINKED LIST // POP FUNCTION REMAING
// class node
// {
// private:
//     int data;
//     node *next;
// public:
//     int push(int num, node **stacktop);
//     void print(node **stacktop);
// };
// // node** stacktop kou use isliyai kar rhai hai kyun k hum hamai head kou change karwa na hai, or usko swap waali logic sai change kara rhai hai.
// int node::push(int num, node **stacktop)
// {
//     node *temp = new node();
//     if (temp)
//     {
//         temp->data = num;
//         temp->next = *stacktop;
//         *stacktop = temp;
//         return 0;
//     }
//     else
//     {
//         return -1;
//     }
// }
// void node::print(node **stacktop)
// {
//     node *th = new node();
//     th = *stacktop;
//     cout << "Stack items:";
//     while (th != NULL)
//     {
//         cout << th->data;
//         th = th->next;
//         cout << " ";
//     }
// };
// int main()
// {
//     int size, number;
//     node *a = new node();
//     node *head = new node();
//     head = NULL;
//     cout << "Enter size of Stack";
//     cin >> size;
//     cout << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter Number for ";
//         cout << i;
//         cout << " stack elemnt ";
//         cin >> number;
//         a->push(number, &head);
//     }
//     a->print(&head);
//     // a->pop(&head);
// }

// LEC 8 STACK/QUEUE EXPRESSION PARESER // INFIX TO POST FIX
// int IsOperator(char x)
// {
//     if (x == '^')
//     {
//         return 3;
//     }
//     if (x == '*')
//     {
//         return 2;
//     }
//     if (x == '/')
//     {
//         return 2;
//     }
//     if (x == '+')
//     {
//         return 1;
//     }
//     if (x == '-')
//     {
//         return 1;
//     }
//     if (x == '(')
//     {
//         return 4;
//     }
//     if (x == ')')
//     {
//         return 4;
//     };
//     return 0;
// };
// void InfixToPostfix()
// {
//     char infix[12] = {'(', 'a', '+', 'b', ')', '*', '(', 'c', '-', 'd', ')'};
//     char postfix[12] = {};
//     int j = 0;
//     int top = -1;
//     char stack[8] = {};
//     for (int i = 0; i < sizeof(infix); i++)
//     {
//         if (IsOperator(infix[i]) == 0)
//         {
//             postfix[j] = infix[i];
//             j++;
//         }
//         else
//         {
//             if (infix[i] == '(')
//             {
//                 top++;
//                 stack[top] = infix[i];
//                 continue;
//             }
//             if (infix[i] == ')')
//             {
//                 while (stack[top] != '(')
//                 {
//                     // J++ MEANS APPENDING WE COULD USE BOTH SYTAX;
//                     postfix[j++] = stack[top];
//                     top--;
//                 }
//                 top--;
//                 continue;
//             }
//             if (stack[top] == '(' || top == -1)
//             {
//                 top++;
//                 stack[top] = infix[i];
//                 continue;
//             }
//             while (top != -1 && IsOperator(infix[i]) <= IsOperator(stack[top]))
//             {
//                 postfix[j] = stack[top];
//                 j++;
//                 top--;
//             }
//         }
//     }
//     while (top >= 0)
//     {
//         postfix[j] = stack[top];
//         j++;
//         top--;
//     }
//     for (int i = 0; i < sizeof(postfix); i++)
//     {
//         cout << postfix[i];
//         cout << " ";
//     }
// }
// int main()
// {
//     InfixToPostfix();
// }
