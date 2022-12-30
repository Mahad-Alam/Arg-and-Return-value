#include<iostream>
using namespace std;
int a,b,c,d,e,f;
void No_arg_Return_Value()
{
cout<<"Function with no arg and the return val "<<endl;
cout<<"enter a value :";
cin>>a;
if(a%2==0)
cout<<"__The Number is 'even'__"<<endl;
else
cout<<"__The Number is 'odd'__"<<endl;
}
int Only_Return_Value()
{
cout<<"Function with no arg but return val "<<endl;
cout<<"enter a value :";
cin>>b;
if(b%2==0)
 return 1;
else
 return 2;
}
int only_argument(int c)
{
if(c%2==0)
cout<<"__The Number is 'even'__"<<endl;
else
cout<<"__The Number is 'odd'__"<<endl;
}
int Both_arg_and_return(int d)
{
if(d%2==0)
 return 1;
else
 return 2; 
}
int main()
{
/*function #1*/

                     No_arg_Return_Value();
/*function #2*/

                     e=Only_Return_Value();
                    if(e==1)
				{
                    cout<<"__The Number is 'even'__"<<endl;
                            }
                    else
				{
                    cout<<"__The Number is 'odd'__"<<endl;
                            }
/*function #3*/

                    cout<<"Function with arg but not the return Value "<<endl<<"enter a value :";
                    cin>>c;
                    only_argument(c);
/*function #4*/

                    cout<<"Function with arg and the return Value "<<endl<<"enter a value :";
                    cin>>d;
                    f=Both_arg_and_return(d);
                    if(f==1)
                    cout<<"__The Number is 'even'__"<<endl;
                    else
                    cout<<"__The Number is 'odd'__"<<endl;
                    return 0;
}