#include<stdio.h>
int binarySearch(int arr[100],int l,int r,int x)
{
	if(r>=1)
	{
	
		 int  mid = l + (r-l)/2;
	if(arr[mid] == x)
	   return mid;
	if(arr[mid] > x)
	     return binarySearch(arr, l , mid-1 , x);	
	     return binarySearch(arr, mid+1 ,r, x);
	     return -1;
	 }
}
 int main(void)
 {
 	int arr[] = {2,3,4,10,40,56};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	int x = 10;
 	int result = binarySearch(arr ,0,n-1,x);
 	(result== -1)? printf("element is not present in array") :  printf("element is present at index %d",result);
	 return 0; 
 }
