#include"iostream"
#include"string"
#include"stdlib.h"

static int i=0;

using namespace std;

class emp
{
	
			 
	public: char name[50],des[50];
			int age,exp,id;
			emp()		 
			{
				cout<<"enter the name";
				gets(name);
				cout<<"enter age";
				cin>>age;
				cout<<"enter employee id";
				cin>>id;
				cout<<"enter employee designation";
				gets(des);
				cout<<"enter year of exprience";
				cin>>exp;
			}
			void display()
			{
				cout<<"\n name is "<<puts(name);
				cout<<"\n age "<<age;
				cout<<"\n employee id"<<id;
				cout<<"\n employee designation "<<puts(des);
				cout<<"enter year of exprience "<<exp;
			}
			int gid()
			{
				return id;
			}
};
void table(emp e[])
{
	int t=i,j,x;
	cout<<"Enter the length of the table"<<endl;
	cin>>x;
	for (j=0;j<x;j++,i++)
	{
		e[t+j];
	}
}
void edit(emp e[])
{
	int id,x,j,c;
	 cout<<"enter the id of the employee to edit the record";
                cin>>id;
                for( j=0;j<i;j++)
                {
                	if(( x=(e[j].gid()))== id)
                	{
                		system("cls");
                		cout<<"\n\tEdit --\n\t\t1.Name\n\t\t2.Designation\n\t\t3.Age\n\t\t4.year of experience\n\t\t5.Exit page\n";
                		cin>>c;
                		switch(c)
                		{
                			case 1:
                				{
                					cout<<"enter the name of the employee";
                					gets(e[j].name);
                					break;
								}
							case 2:
								{
									cout<<"enter the designation";
									gets(e[j].des);
									break;
								}
							case 3:
								{
									cout<<"enter the age";
									cin>>e[j].age;
									break;
								}
							case 4:
								{
									cout<<"enter the year of exprience";
									cin>>e[j].exp;
								}		
							case 5:
								{
									exit (0);
								}	
							default:
								{
									cout<<"wrong choich...try again";
									system("cls");
									exit(0);
								}	
						}
					}
					
					cout<<"id not found";
				}
}
void sort(emp e[])
{
	int k,j;
	if(i==0)
	cout<<"TABLE EMPTY"<<endl;
	else
	{
	for(j=0;j<i;j++)
	{
		for(k=0;j<i-1-j;k++)
		{
			if(e[k].gid()>e[k+1].gid())
			{
				emp t;
				t=e[k];
				e[k]=e[k+1];
				e[k+1]=t;
			}
		}
	}
	cout<<"The Sorted Table"<<endl;
	for(j=0;j<i;j++)
	{
		e[j].display();
		cout<<endl;
	}
}
}

int main()
{
	
	emp e[100];
	
	int c;
	char cs;
	 do
    {
        cout << "Enter any option...\n";
        cout << "1: Build a table\n";
        cout << "2: List a table\n";
        cout << "3: Insert new entry\n";
        cout << "4: Delete old entry\n";
        cout << "5: Edit an entry\n";
        cout << "6: Search for the record to be printed\n";
        cout << "7: Sort entries\n";
        cout << "8: Exit\n";
        cout << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
	        case 1: 
	        {
	        	table(e);
	    	    break;
		    }	
		    case 2:
    		{
	    		for(int j=0;j<i;j++)
	    		{
	    		cout<<(j+1)<<"\n";
				e[j].display();
			}
			    break;
		    } 
	        case 3:
    		{
                e[i];
                i++;
                break;		
	    	}
    		case 4:
	    	{
	    		int id;
                cout<<"enter the id of the employee to delete the record";
                cin>>id;
                for(int j=0;j<i;j++)
                {
                	if(e[j].gid()==id)
                	{
                		for(;j<i;j++)
                		e[j]=e[j+1];
                		break;
					}
				}
				i--;
                break;		
		    }
	    	case 5:
		    {
                edit(e);
                break;
            }
    		case 6:
	    	{
	    		int id;
                cout<<"enter the id of the employee to display the record";
                cin>>id;
                for(int j=0;j<i;j++)
                {
                	if(e[j].gid()==id)
                	e[j].display();
                break;		
	    	}
	    }
		    case 7:
		    {
		        sort(e);
		        break;		
		    }
            case 8:
            {
                exit(0);
            }
		    default: 
                cout << "Invalid input\n";
	    }
        cout << "\nDo you wish to continue? \nEnter Y for Yes / N for No\n";
        cin >> cs;
        if(c=='Y')
            system("CLS");
        else
            break;
    } while (true);
    return 0;

}
