//NOTE: THE ALGORITHM IS HAVING THE TIME COMPLEXITY OF N^3 BEWARE WITH THE CONSTRAINTS!
#include<iostream>
#include "subarrays.h"
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]); 
	SubArrays(arr,n);
}