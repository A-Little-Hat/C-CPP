//Linked list with functions for insert search deletion concatenation reverse
/*---------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
template <class t>
class node
{
public:
     t data;
     node<t> *next;
};
template <class t1>
class list
{

     int n;
     node<int> *first;

public:
     list()
     {
          first = NULL;
     }

     void create()
     {
          char ch;
          node<int> *current, *temp;
          cout << "Enter data:\n";
          first = new node<int>;
          cin >> first->data;
          first->next = NULL;
          current = first;
          do
          {
               cout << "Want to enter more data:\n";
               cin >> ch;
               if (ch == 'y')
               {
                    n = count();
                    this->insert(n + 1);
               }
          } while (ch == 'y');
     }

     void create_beg()
     {
          cout << "Enter how many nodes u want to enter in linked list:\n";
          cin >> n;
          node<int> *temp;
          first = new node<int>;
          cout << "Enter first node data:\n";
          cin >> first->data;
          first->next = NULL;
          for (int i = 1; i < n; i++)
          {
               temp = new node<int>;
               cout << "Enter node data:\n";
               cin >> temp->data;
               temp->next = first;
               first = temp;
          }
     }

     void insert(t1 n)
     {
          int b = count();
          if (n <= b + 1)
          {
               node<int> *current, *temp;
               current = first;
               temp = new node<int>;
               cout << "Enter data:\n";
               cin >> temp->data;
               temp->next = NULL;
               if (n == 1)
               {
                    temp->next = first;
                    first = temp;
               }
               else
               {
                    for (int i = 1; i < n - 1; i++)
                         current = current->next;

                    temp->next = current->next;
                    current->next = temp;
               }
          }
          else
               cout << "Can't be inserted\n";
     }

     //search function
     void search()
     {
          int flag = 0;
          cout << "Enter data to be searched:\n";
          cin >> n;
          node<int> *current, *prev, *temp;
          int b = count();
          current = first;
          for (int i = 1; i <= b; i++)
          {
               if (current->data == n)
               {
                    flag = 1;
                    break;
               }
               prev = current;
               current = current->next;
          }
          if (flag == 1)
          {
               int c;
               cout << "Data found:\nEnter what you wannna do:\n 1.delete data\n 2.replace it\n 3.do nothing\n";
               cin >> c;
               switch (c)
               {
               case 1:
                    temp = current;
                    prev->next = current->next;
                    delete (temp);
                    cout << "Data deleted:\n";
                    break;
               case 2:
                    cout << "Enter new data:\n";
                    cin >> current->data;
                    cout << "data replaced:\n";
                    break;
               case 3:
                    break;
               default:
                    cout << "wrong choice:\n";
               }
          }
          else
               cout << "Data not found:\n";
     }

     //overloading + operator
     list *operator+(list l1)
     {
          list l2;
          l2.first = first;
          node<int> *current;
          current = l2.first;
          while (current->next != NULL)
               current = current->next;
          current->next = l1.first;
          return this;
     }

     //reverse function
     void reverse()
     {
          //fflush(stdin);
          node<int> *a, *b, *temp;
          a = first;
          b = a->next;
          temp = b->next;
          a->next = NULL;
          while (temp != NULL)
          {
               //fflush(stdin);
               b->next = a;
               a = b;
               b = temp;
               temp = temp->next;
               //this->display();
          }
          b->next = a;
          first = b;
     }

     //counting nodes in a linked list
     int count()
     {
          node<int> *current;
          int c = 0;
          current = first;
          while (current != NULL)
          {
               c++;
               current = current->next;
          }
          return c;
     }

     //function to display linked list
     void display()
     {
          //getchar();
          //fflush(stdin);
          node<int> *current;
          current = first;
          cout << "The data in linked list:\n";
          while (current != NULL)
          {
               cout << current->data << " -> ";
               current = current->next;
          }
          cout << endl;
     }
};
int main()
{
     //initial declarations
     int cho, n, s;
     char ch;
     list<int> l1, l2, *l3;

     //creating linked list and working on them
     cout << "Want to create linked list:\n1.Simple\n2.from beginning:\n";
     cin >> cho;
     switch (cho)
     {
     case 1:
          l1.create();
          break;
     case 2:
          l1.create_beg();
          break;
     default:
          cout << "Wrong choice:\n";
     }

     if ((cho == 1) || (cho == 2))
     {
          l1.display();

          //doing insertion
          do
          {
               cout << "Want to insert a node:\n";
               cin >> ch;
               if (ch == 'y')
               {
                    cout << "Enter the position of insertion;\n";
                    cin >> n;
                    l1.insert(n);
               }
          } while (ch == 'y');

          cout << "The linked list after all insertions:\n";
          l1.display();

          //doing searching,deleting,replacing
          do
          {
               cout << "Want to search a data:\n";
               cin >> ch;
               if (ch == 'y')
                    l1.search();
          } while (ch == 'y');

          cout << "The linked list after searching and as so:\n";
          l1.display();

          //creating new linked list
          cout << "Want to create new linked list:\n";
          char cht;
          cin >> cht;
          if (cht == 'y')
          {
               l2.create();
               l2.display();

               //concatenating strings
               cout << "Want to concatenate two linked lists:\n";
               cin >> ch;
               if (ch == 'y')
               {
                    l3 = l1 + l2;
                    s = 1;
                    cout << "new linked list after concatenation:\n";
                    l3->display();
               }
          }

          //reversing linked lists
          cout << "Want to reverse the linked list:\n";
          cin >> ch;
          if (ch == 'y')
          {
               cout << "Which linked list\n1.";
               l1.display();
               if (cht == 'y')
               {
                    cout << "\n2.";
                    l2.display();
                    if (s == 1)
                    {
                         cout << "\n3.";
                         l3->display();
                    }
               }
          }
          cin >> cho;
          if (cho == 1)
          {
               l1.reverse();
               cout << "\nnew linked list after reversing:\n";
               l1.display();
          }
          else if (cht == 'y' && cho >= 2)
          {
               switch (cho)
               {
               case 2:
                    l2.reverse();
                    cout << "\nnew linked list after reversing:\n";
                    l2.display();
                    break;
               case 3:
                    l3->reverse();
                    cout << "\nnew linked list after reversing:\n";
                    l3->display();
                    break;
               default:
                    cout << "Wrong choice entered:\n";
               }
          }

          else
               cout << "Wrong choice entered:\n";
     }
}
