#include <iostream>
using namespace std;
int main()
{
	int arr[10],sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"enter the marks of the quiz:";
		cin>>arr[i];
		sum=sum+arr[i];
		
	}
	for(int i=0;i<10;i++)
{
	
	cout<<arr[i]<<",";
	cout<<sum/10<<endl; 
}
return 0;
}
