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
	fp=fopen("struct.txt","r");
  int i=0;
  while(i<10)
  {
  	fread(&s,sizeof(s),1,fp);
  	cout<<s.name;
	cout<<s.roll;
	cout<<s.cls;
	cout<<s.year;
	cout<<s.total;
	i++;
  }
  fclose(fp);
  return 0;
}
