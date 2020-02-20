#include<iostream>
#include "sorting.h"
using namespace std;
/*void insertsort(int data [],int n)
{
	for(int j=1;j<=n-1;j++)
	{
		int key=data[j];
		int	i=j-1;
		while(i>=0 && data[i]> key)
		{
			data[i+1]=data[i];
			i=i-1;
		}
		data[i+1]=key;
	}
	for(int k=0;k<=n-1;k++)
	{
		cout<<data[k]<<endl;
	}
}*/
int main()
{
	int data[]={13,16,9,56,34};
	int n=sizeof(data)/sizeof(int);
	cout<<n;
	cout<<"after sorting :";
	 insertsort(data,n);
	 for(int k=0;k<=n-1;k++)
	{
		cout<<data[k]<<endl;
	}
}
