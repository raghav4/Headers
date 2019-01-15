#include<iostream>
#include "merge.h"
using namespace std;
int main()
{
	int arr[] = {11,2,6,32,15,1,95};
	int n = sizeof(arr)/sizeof(arr[0]); 
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}