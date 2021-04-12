/*Write a C++ Program to create a structure Student containing field for Roll No., Name, Class,  Year and Total Marks.
Create 10 students and store them in a file. */
/*Retrieve the student information from file created in previous question and print it in the following format : Roll No. Name Marks.*/
#include"iostream"
using namespace std;
struct student{
	int year,total,cls,roll;
	char name[20];
};
typedef struct student S;

int main(){
	S s;
	FILE *fp;
	int n;
	cout<<"enter the number of the students...";
	cin>>n;
	fp=fopen("struct.txt","w");
	if(fp==NULL)
  	{
  	printf("\n unable to create file file");
  	exit(0);
  	}
	for(int i=0;i<n;i++){
		cout<<endl<<"enter the name : ";
	cin>>(s.name);
	cout<<endl<<"enter the year : ";
	cin>>s.year;
	cout<<endl<<"enter the class : ";
	cin>>s.cls;
	cout<<endl<<"enter the roll : ";
	cin>>s.roll;
	cout<<endl<<"enter the total : ";
	cin>>s.total;
		fwrite(&s,sizeof(s),1,fp); 
		system("cls");
	}
	fclose(fp);
	cout<<n<<" data successfully entered.thank you."<<endl<<endl;
	
	fp=fopen("struct.txt","r");
	
	cout<<"roll"<<"\t";
	cout<<"name"<<"\t";
	cout<<"total"<<"\t"<<endl;
  int i=0;
  while(i<n)
  {
  	fread(&s,sizeof(s),1,fp);
  	cout<<s.roll<<"\t";
	cout<<s.name<<"\t";
	cout<<s.total<<"\t"<<endl;
	i++;
  }
  fclose(fp);
	return 0;
}
