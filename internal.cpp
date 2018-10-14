#include<iostream>
using namespace std;
class details
{
  public:
    string name,rno;
    int cp[3],mat[3],evs[3],ms[3],eng[3],ec[3];
		int at1,ass1,at2,ass2,at3,ass3,at4,ass4,at5,ass5,at6,ass6;
    void getdetails()
    {
      cout<<"NAME:\t";
      cin>>name;
      cout<<"\nROLLNO:\t";
      cin>>rno;
      cout<<"\nENTER INTERNAL MARKS\n";
      cout<<"INTERNALS\t C++ \t MAT \t ENG \t EC \t MS \t EVS \n";
      cout<<"    Ist  \t";
      cin>>cp[0];cin>>mat[0];cin>>eng[0];cin>>ec[0];cin>>ms[0];cin>>evs[0];
      cout<<" \n   IInd \t";
      cin>>cp[1];cin>>mat[1];cin>>eng[1];cin>>ec[1];cin>>ms[1];cin>>evs[1];
      cout<<" \n   IIIrd \t";
      cin>>cp[2];cin>>mat[2];cin>>eng[2];cin>>ec[2];cin>>ms[2];cin>>evs[2];
    	cout<<"\nattendance :";
			cin>>at1;cin>>at2;cin>>at3;cin>>at4;cin>>at5;cin>>at6;
			cout<<"\nassignment:";
			cin>>ass1;cin>>ass2;cin>>ass3;cin>>ass4;cin>>ass5;cin>>ass6;
		}
    /*void atdass()
    {
      cout<<"\nATTENDENCE MARKS FOR CP:\t";cin>>at1;
      cout<<"\nASSIGNMENT MARKS FOR CP:\t";cin>>ass1;
			cout<<"\nATTENDENCE MARKS FOR MAT:\t";cin>>at2;
      cout<<"\nASSIGNMENT MARKS FOR MAT:\t";cin>>ass2;
			cout<<"\nATTENDENCE MARKS FOR ENG:\t";cin>>at3;
      cout<<"\nASSIGNMENT MARKS FOR ENG:\t";cin>>ass3;
			cout<<"\nATTENDENCE MARKS FOR EC:\t";cin>>at4;
      cout<<"\nASSIGNMENT MARKS FOR EC:\t";cin>>ass4;
			cout<<"\nATTENDENCE MARKS FOR MS:\t";cin>>at5;
      cout<<"\nASSIGNMENT MARKS FOR MS:\t";cin>>ass5;
			cout<<"\nATTENDENCE MARKS FOR EVS:\t";cin>>at6;
      cout<<"\nASSIGNMENT MARKS FOR EVS:\t";cin>>ass6;
    }*/
};
class calculate:public details
{
  public:
    int tcp,tmat,teng,tec,tms,tevs;
    float cp1,mat1,eng1,ec1,ms1,evs1;
    void total()
    { 
			tcp=0;tmat=0;teng=0;tec=0;tms=0;tevs=0;
      for(int i=0;i<3;i++)
      {
        tcp=tcp+cp[i];
        tmat=tmat+mat[i];
        teng=teng+eng[i];
        tec=tec+ec[i];
        tms=tms+ms[i];
        tevs=tevs+evs[i];
      }
    }
    void total1()
    {
      tcp=tcp/3;
      tmat=tmat/3;
      teng=teng/3;
      tec=tec/3;
      tms=tms/3;
      tevs=tevs/3;
    }
    void calc()
    {
      cp1=(tcp*0.75)+at1+ass1;
      mat1=(tmat*0.75)+at2+ass2;
      eng1=(teng*0.75)+at3+ass3;
      ec1=(tec*0.75)+at4+ass4;
      ms1=(tms*0.75)+at5+ass5;
      evs1=(tevs*0.75)+at6+ass6;
    }
    void disp()
    { 
			cout<<"NAME\t:"<<name;
      cout<<"\tROLLNO\t"<<rno;
      cout<<"\nC++\t"<<cp1<<endl;
      cout<<"MAT\t"<<mat1<<endl;
      cout<<"ENG\t"<<eng1<<endl;
      cout<<"EC \t"<<ec1<<endl;
      cout<<"MS \t"<<ms1<<endl;
      cout<<"EVS\t"<<evs1<<endl;
    }
};
main()
{ int n;
  cout<<"enter how many students\n";
  cin>>n;
  for(int i=0;i<n;i++)
  {
  calculate c;
  c.getdetails();
 // c.atdass();
  c.total();
  c.total1();
  c.calc();
  c.disp();
  }
}

