#include<iostream>
using namespace std;
int check_prime(int x);
int main()
{
	int h,p,answer=0;
	int prime[100],index=0;
	cout<<"enter no. of hours";
	cin>>h;
	cout<<"enter no. of parts";
	cin>>p;
	int counter=0;
	int x = h/p;
	for(int i=2;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter == 2)
		{
		  //cout<<i;
		  prime[index]=i;
		  index++;
	    }
	    counter = 0;
	}
	
	for(int i=0;i<index;i++)
	{
		int primes=1;
		int check = prime[i];
		int cycle = p;
		while(cycle>1)
		{
		  check = check+x;
		  int boolean = check_prime(check);
		  if(boolean==1)
		  {
		    primes++;
	      }
		    cycle--;
	    }
	    if(primes==p)
	    {
	    	answer++;
		}
	}
	
	cout<<endl;
	cout<<answer;
}

int check_prime(int x)
{
		int flag=0;
		for(int i=1;i<=x;i++)
		{
			if(x%i==0)
			{
				flag++;
			}
		}
		if(flag==2)
		return 1;
		else
		return 0;
}
