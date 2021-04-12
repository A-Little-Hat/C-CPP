#include"iostream"
#include"string"
using namespace std;

static int i=0;

using namespace std;

class emp
{
	public: int age,exp,id;
			string name,des;
			emp()
			{
				age = exp = id = 0;
				name = des = "";
			}
			void input()		 
			{
				cout<<"enter the name";
				cin>>name;
				cout<<"enter age";
				cin>>age;
				cout<<"enter employee id";
				cin>>id;
				cout<<"enter employee designation";
				cin>>des;
				cout<<"enter year of exprience";
				cin>>exp;
			}
			void display()
			{
				cout<<"\n name is "<<(name);
				cout<<"\n age "<<age;
				cout<<"\n employee id"<<id;
				cout<<"\n employee designation "<<(des);
				cout<<"year of exprience "<<exp;
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
		e[j].input();
}
void printTable(emp obj[])
{
	int j;
	for (j = 0; j < i; j++)
		obj[j].display();
}
int searchTable(emp e[])
{
	int Eid, j, f=1;
	cout << "Enter the employee's id: ";
	cin >> Eid;
	for (j = 0; j < i; j++)
	if (e[j].gid()==Eid)
	{
		f = 1;
		break;
	}
	if (f==1)
		return j;
	else
		cout << "Invalid code!";
}
void edit(emp e[], int e_id)
{
	e[e_id].input();
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
	emp obj[50];
	int c,id;
	char ch;
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
	        	table(obj);
	    	    break;
		    }	
		    case 2:
    		{
				printTable(obj);
				break;
		    } 
	        case 3:
    		{
                obj[i];
                i++;
                break;		
	    	}
    		case 4:
	    	{
                cout<<"enter the id of the employee to delete the record";
                cin>> id;
                for(int j=0;j<i;j++)
                {
                	if(obj[j].gid()==id)
                	{
                		for(;j<i;j++)
                		obj[j]=obj[j+1];
                		break;
					}
				}
				i--;
                break;		
		    }
	    	case 5:
		    {
				int emp_id = searchTable(obj);
				edit(obj, emp_id);
				break;
            }
    		case 6:
	    	{
                int emp_id = searchTable(obj);
				obj[emp_id].display();
				break;	
	    	}
		    case 7:
		    {
		        sort(obj);
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
        cin >> ch;
        if(ch=='Y')
            system("CLS");
        else
            break;
    } while (true);
    return 0;

}
