#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n;
	cout<<"adad ra vared konid:";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
	    arr[i] = (rand()%100)+1;
	    for(int j=0;j<i;j++)
		{
	    	if(arr[j]==arr[i])
	    	{
	    		i--;
	    		break;
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
