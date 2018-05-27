#include<bits/stdc++.h>     /*https://www.geeksforgeeks.org/print-words-string-reverse-order/  */
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

/*void printreverse(char str[])
	{
		int n=strlen(str),i;
		
		for(i=n-1;i>=0;i--)
		{
			if(str[i]==' ')
			{
				str[i]='\0';
				printf("%s", &(str[i])+1);
			}
		}
		printf("%s", str);
	}
*/
void printreverse(string str[])
{
    int length = strlen(str);
 
    // Traverse string from end
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
 
            // putting the NULL character at the 
            // position of space characters for
            // next iteration.          
            str[i] = '\0';
 
            // Start from next charatcer     
            printf("%s ", &(str[i]) + 1);
        }
    }
 
    // printing the last word
    printf("%s", str);
}


int main()
{
int n;
cin>>n;
char ch[1000];
cin>>ch;
cout<<ch<<endl;
printreverse(ch);
}

