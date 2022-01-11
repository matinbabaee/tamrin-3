#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string a;
	int lenword,count=0,truee=0,wrong = 0;
	char ch;
	cout<<"bazikon(1) yek nam entekhab kon:";
	cin>>a;
	system("CLS");
	lenword = a.length();
	string find[lenword+1];
	for(int i=0;i<lenword;i++)
	{
		find[i]="-";
	}
	cout<<"shamel "<<lenword<<" kalamat "<<"\n";
	for(int i=0;i<lenword;i++){
		cout<<"\nKalame ra hads bezanid : ";
		cin>>ch;
		for(int j=0;j<lenword;j++)
		{
			if(ch == a[j] && find[j] == "-")
			{
				i--;
				find[j]=ch;
				truee++;
				wrong++;
			}
			if(ch == a[j] && find[j] != "-")
			{
				wrong++;
				i--;
			}
		}
		if(wrong==0){
			count++;
		}
		wrong=0;
		for(int j=0;j<lenword;j++){
			cout<<find[j];
		}
		cout<<"\n((hads eshtebah= "<<count<<"))\n";
		if(count == lenword){
			cout<<"\n"<<" bakhtid \n javab dorost = "<<a;
			break;
		}
		if(truee == lenword){
			cout<<"\n"<<"       ((barande)) ";
			break;
		}
	}

}
