#include<iostream>
using namespace std;
class average
{
int avg,n1;
public:
int rollno,m1,m2,m3;
string name;
friend void print(average a[]);
void get_details()
{
cout<<"enter the name and the rollno\n";
cin>>name>>rollno;
cout<<"enter the marks of three subjects\n";
cin>>m1>>m2>>m3;
}
void avg1()
{
avg=(m1+m2+m3)/3;
}
//friend void print(average a);
};
void print(average a[])
{
int i,n1;
cout<<"re-enter how many student\n";
cin>>n1;
for(i=0;i<n1;i++)
{
if(a[i].avg>50)
{
cout<<"name:"<<a[i].name<<"\n";
cout<<"rollno:"<<a[i].rollno<<"\n";
cout<<"average mark:"<<a[i].avg<<"\n";
}
}
}
main()
{
int i,n;
cout<<"enter the how many students\n";
cin>>n;
average a[n];
//n1=n;
for(i=0;i<n;i++)
{
a[i].get_details();
a[i].avg1();
}
print(a);
}

