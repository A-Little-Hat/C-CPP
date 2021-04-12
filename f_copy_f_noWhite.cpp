#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
 ofstream out;
 ifstream in;
 char fname1[10],fname2[10];
 char ch;
 cout<<"enter the file name to be copied.?"<<endl;
 cin>>fname1;
 if(in.fail()){
     cerr<<"no such a file exists"<<endl;
     exit(1);
 }
 else{
     cout<<"file opened successfully"<<endl;
 }
 cout<<"enter the new file name..."<<endl;
 cin>>fname2;
 in.open(fname1);
 out.open(fname2);
 if(out.fail()){
     cerr << "unable to create a new file"<<endl;
     exit(1);
 }
 else{
     cout<<"new file opened successfully"<<endl;
 }
 while(in.get(ch)){
     if(!(ch==' '||ch=='\t'||ch=='\n'))
		out.put(ch);
     }
     cout<<"file copied without white spaces successfully...Thank You";
     in.close();
     out.close();
 return (0);
}
