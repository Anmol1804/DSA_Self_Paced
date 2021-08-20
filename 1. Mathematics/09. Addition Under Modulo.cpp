#include<iostream>
using namespace std;

/*
	( a + b) % c = ( ( a % c ) + ( b % c ) ) % c
	( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
	( a – b) % c = ( ( a % c ) – ( b % c ) ) % c
*/

int main(){
	long long n1,n2;
	cin>>n1>>n2;
	
	cout<<((n1%1000000007) + (n2%1000000007))%1000000007<<endl;
}
