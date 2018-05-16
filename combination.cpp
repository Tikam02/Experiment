#include<iostream>
using namespace std;

int factorial(int a)
{
	int fact=1;
	for(int i=a;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int arr[6]={1,5,1,0,6,0};
	int n=6, r=3;
	int combination=0;
	//performing nCr, need to choose 4 out of 6
	combination=factorial(n)/(factorial(n-r)*factorial(r));
	cout<<combination<<endl;
	return 0;
	
}
