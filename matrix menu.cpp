#include"iostream"
using namespace std;
template <class T>
class matrix{
	private: T r,c,mat[10][10];
	public: matrix();
			matrix(matrix r,matrix c);
			display();
			trans();
			friend void diff(matrix &m1,matrix &m2,matrix &r);
			friend void add(matrix &m1,matrix &m2,matrix &r);
			friend void prod(matrix &m1,matrix &m2,matrix &result);
			
};
template <class T>
matrix<T>::matrix()
{
	
}
template <class T>
matrix<T>::matrix(T r,T c)
{
	for(T i=0;i<r;i++)
	{
		for(T j=0;j<c;j++)
		{
			cout<<"enter value for the position: "<<i+1<<" "<<j+1<<" : ";
			cin>>this->mat[i][j];
		}
	}
	cout<<"value entered successfully...";
}
template <class T>
matrix<T>::display()
{
	for(T i=0;i<r;i++)
	{
		for(T j=0;j<c;j++)
		{
			cout<<this->mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
template <class T>
friend matrix<T>::sum(matrix m1,matrix m2,matrix result)
{
		for(T i=0;i<m1.r;i++)
	{
		for(T j=0;j<m1.c;j++)
		{
			result.mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
		}
	}
	cout<<"successfully done...";
}
template <class T>
friend matrix<T>::diff(matrix m1,matrix m2,matrix result)
{
		for(T i=0;i<m1.r;i++)
	{
		for(T j=0;j<m1.c;j++)
		{
			result.mat[i][j]=m1.mat[i][j]-m2.mat[i][j];
		}
	}

} 
template <class T>
friend matrix<T>::prod(matrix m1,matrix m2,matrix result)
{
	for(T i=0;i<r1;i++)
		{
		for(T j=0;j<c2;j++)
			{
			result.mat[i][j]=0;
			for(T k=0;k<r2;k++)
				{
					result.mat[i][j]+=m1.mat[i][k]*m2.mat[k][j];
				}
			
			}
		
		}
	cout<<"successfully done...";		
}
template <class T>
matrix<T>::trans()
{
	
	for(int i=0;i<m1.r;i++) {
    for(int j=0;j<m1.c;j++) {
      result.mat[j][i] = m1.mat[i][j];
    }
  }
  cout<<"successfully done...";
	for(T i=0;i<m1.c;i++)
	{
		for(T j=0;j<m1.r;j++)
		{
			cout<<this->result[i][j]<<" ";
		}
		cout<<endl;
	}
}

int menu()
{
	system("cls");
	cout<<"menu"<<endl<<"1.sum"<<endl<<"2.defference"<<endl<<"3.product"<<endl<<"4.transpose"<<endl<<5."exit"<<endl<<"choose your option to continue";
	cin>>int c;
	return c;
}

int main()
{
	do{
		int c=menu();
		switch(c){
			case 1:{
					cout<<"enter the value of row and colomn 1<value<10 : ";
					cin>>int r>>int c;
					matrix<int,int>m1(r,c);
					matrix<int,int>m2(r,c);
					matrix<int>result();
					sum(m1,m2,result);
					result.display();		
				break;
			}
			case 2:{
					cout<<"enter the value of row and colomn 1<value<10 : ";
					cin>>int r>>int c;
					matrix<int,int>m1(r,c);
					matrix<int,int>m2(r,c);
					matrix<int>result();
					diff(m1,m2,result);
					result.display();
				break;
			}
			case 3:{
				cout<<"enter the value of row and colomn 1<value<10 : ";
					cin>>int r>>int c;
					matrix<int,int>m1(r,c);
					matrix<int,int>m2(r,c);
					matrix<int>result();
					prod(m1,m2,result);
					result.display();
				break;
			}
			case 4:{
					cout<<"enter the value of row and colomn 1<value<10 : ";
					cin>>int r>>int c;
					matrix<int,int>m1(r,c);
					m1.trans();
				break;
			}
			case 5:{
				exit 0;
			}
		}
	cout<<"press any key to continue... press 0 to exit..."	;
	cin>>y;
	}while(y!=0)
	return 0;
}
