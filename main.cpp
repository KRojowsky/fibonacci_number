#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	long double T[n+1];
	
	T[0] = 1;
	T[1] = 1;
	
	for(int i=2; i<n+1; i++)
	{
		T[i] = T[i-1] + T[i-2];
	}
	
	for(int i=0; i<=n; i++)
	{
		cout<<setprecision(1000);
		cout<<"-> "<<i<<"  "<<T[i]<<endl<<endl;
	}
}
