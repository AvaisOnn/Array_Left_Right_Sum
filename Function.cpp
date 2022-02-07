#include<iostream>

using namespace std;

void showArr(int[], int);
int sumTotal(int[], int);
int sumLeft(int[], int, int);

int main(){
	int size=7;
	int arr[size]={3,2,5,1,2,7,1}; //Replace the Size with 11, if you are going to run it on Replit.com, it will work fine then. Thank you!
	int arrTotal=0;
	int position;
	showArr(arr, size);
	arrTotal=sumTotal(arr,size);	
	position=sumLeft(arr,size,arrTotal);
	
	cout<<endl;
	
	if(position==0)
	{
		cout<<"There's no such Index available in this array, where sum of Left and Right elements are equal."<<endl;
	}
	else
	{
		cout<<"The Index where sum of Left and Right elements are equal is on "<<position<<" Position."<<endl;
	}
	return 0;
}

void showArr(int arr[], int size)
{
	cout<<"Your Defined Array is: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int sumTotal(int arr[], int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
	
int sumLeft(int arr[], int size, int sum)
{
	int leftSum=0;
	int index=0;
	
	for(int i=0;i<size;i++)
	{
		leftSum=leftSum+arr[i];
		if((leftSum-arr[i])==(sum-leftSum))
		{
			index=i+1;
		}
	}
	return index;
}
