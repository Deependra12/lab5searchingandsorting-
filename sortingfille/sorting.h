#include<iostream>

void insertsort(int data [],int n)
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
	
}
