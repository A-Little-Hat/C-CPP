//stack operations using array :
/*---------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;
#define MAX 10
 
template <class T>
class stack {
public:
    T item;
    int top; 
    T arr[MAX];
    stack() 
    {
        // for (int i = 0; i < MAX; i++) {
        //     arr[i] = NULL;
        // }
        top = -1;
    }
    void push(T a) 
    {
        top++; 
        if (top < MAX) {
            arr[top] = a; 
        }
        else 
        {
            cout<<"STACK IS FULL";
            top--;
        }
    }
    void pop() 
    {
        if (top == -1) {
            cout<<"STACK IS EMPTY\n";
            // return NULL;
        }
        else {
            // T data = arr[top];
            cout << "Item popped from Stack is:" << arr[top] << endl;
            // arr[top] = NULL; 
            top--; 
            // return data;
        }
    }
    void display()
    {
    	for(int i=0;i<=top;i++){
    		cout<<arr[i]<<"\t";
		}
	}
};
int main()
{
    stack<int> a; 
    int opt = 1;
    while (opt != 4) {
        cout << "\n MAX STACK CAPACITY=" << ((MAX - a.top) - 1) << "\n\n\n\n";
        cout << "1) Push Item\n";
        cout << "2) Pop Item\n";
        cout << "3) Display\n";
		cout << "4) Exit\n\n";
        cout << "Option?";
        cin >> opt;
        switch (opt) {
        case 1:
            cout << "Which Number should be pushed?";
            cin >> a.item;
            a.push(a.item);
            break;
        case 2:
            a.pop();
            break;
        case 3:
			a.display();
			break;    
        }
    }
}