//stack operations using linked list :
/*---------------------------------------------------------------------------------------------------------------------*/
#include "iostream"
#include "stdlib.h"
using namespace std;   
void push();  
void pop();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;    
int main ()  
{  
    int choice=0;     
    cout<<"\n*********Stack operations using linked list*********\n";  
    cout<<"\n----------------------------------------------\n";  
    while(choice != 4)  
    {  
        cout<<"\n\nChose one from the below options...\n";  
        cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";  
        cout<<"\n Enter your choice \n";        
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                cout<<"Exiting.... ";  
                break;   
            }  
            default:  
            {  
                cout<<"Please Enter valid choice ";  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        cout<<"not able to push the element";   
    }  
    else   
    {  
        cout<<"Enter the value ";  
        cin>>val;  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
        }  
        cout<<"Item pushed ";  
    }  
}  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        cout<<"Underflow ";  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        cout<<"Item popped ";  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        cout<<"Stack is empty\n";  
    }  
    else  
    {  
        cout<<"Printing Stack elements \n";  
        while(ptr!=NULL)  
        {  
            cout<<ptr->val<<" ";  
            ptr = ptr->next;  
        }  
    }  
} 
