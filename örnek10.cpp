//R�meysa Co�kun
//Program Amac�:Girilen iki say�y� kar��la�t�r�p b�y�k olan say�y� bulan program.
#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"Please enter the first number:"<<endl;
cin>>x;
cout<<endl;
cout<<"Please enter the second number:"<<endl;
cin>>y;
cout<<endl;
if(x>y)
{
cout<<"x bigger than y"<<endl;
cout<<x;
}
else if(y>x)
{
cout<<"y is bigger than x"<<endl;
cout<<y;	
}
cout<<endl;
system("PAUSE");
return 0;
}
