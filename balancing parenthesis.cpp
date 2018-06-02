#include<bits/stdc++.h>
using namespace std;
bool pairr(char ope, char clos)
{
	if(ope=='{' && clos=='}' )return true;
   else if(ope=='(' && clos==')' )return true;
   else if(ope=='[' && clos==']' )return true;
   return false;
}

bool balance(string str)
{
	stack<char>s; int i;
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='{'|| str[i]=='('|| str[i]=='[')
		s.push(str[i]);
		else if(str[i]=='}'|| str[i]==')'|| str[i]==']')
		{
			if(s.empty()||!pairr(s.top(),str[i]))
			return false;
			else
			s.pop();
		}
	}
	return s.empty()?true:false;
}

int main()
{
   string s;
   cin>>s;
   if(balance(s))
   cout<<"true";
   else
   cout<<"false";
}


