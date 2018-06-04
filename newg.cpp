#include <iostream>
using namespace std;

double sum=0;
double series(int,int);
bool prime(int);
int main() {
	int x,k,c=0;
	bool add=true;
	cout << "Enter 'X' and 'K':";
	cin >>x>>k;
	for(int i=1;;i++)
	{
		if(prime(i))
		{
			c=c+1;
			if(add)
			{
				sum=sum+series(x,i);
				add=false;
			}
			else{
				sum=sum-series(x,i);
				add=true;
				}
		}
		if(c==k){break;}
	}
	cout<<"Output:"<<sum;
	return 0;
}
double series(int x,int k)
{
	double p=1;
	for(int i=1;i<=x;i++)
	{
		p*=x;
	}
	return (p/k);
}
bool prime(int i)
{
	for(int x=2;x<i/2;x++)
	{
		if(i%x==0)
		{
			return false;
		}
	}
	return true;
}
