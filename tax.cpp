#include<iostream>
using namespace std;
class employee
{
	string name,dept;
	int eno;
	public:
		void getdata()
		{
			cout<<"\nEMPLOYEE NAME: ";
			cin>>name;
			cout<<"\nEMPLOYEE NUMBER: ";
			cin>>eno;
			
		}
		void putdata()
		{
			cout<<"\nDEPARTMENT:\t";
			cin>>dept;
		}
};
class PAY
{	
	protected:
	float basicpay,HRA,DA,grosspay;
	public:
		//float grosspay;
		void getpay()
		{
			cout<<"\nBASICPAY:";
			cin>>basicpay;
		}
		void grosssalary()
		{
			DA=0.40*basicpay;
			HRA=0.20*basicpay;
			grosspay=HRA+DA+basicpay;
		}
		void display()
		{	
			cout<<"\nDA: "<<DA;
			cout<<"\nHRA: "<<HRA;
			cout<<"\nGROSSPAY: "<<grosspay;
		}
};
class TAX:public employee,public PAY
{
	double PANno,taxamount;
	public:
		void calc_tax()
		{ 	
			cout<<"\nPAN NO:\t";
			cin>>PANno;
			taxamount=(grosspay*5)/100;
		}
		void disp_tax()
		{
			cout<<"\nTAX AMOUNT:"<<taxamount;
		}
};
main()
{
	TAX t;
	t.getdata();
	t.putdata();
	t.getpay();
	t.grosssalary();
	t.display();
	t.calc_tax();
	t.disp_tax();
}
