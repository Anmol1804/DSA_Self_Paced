#include<iostream>
using namespace std;

/*
	Mul. inverse = x;
	given no. = n
	given modulo = m
	
	(x*n)%m = 1
	
*/

int mulInv(int n, int m){
	for(int i=1;i<m;i++){
		if((n*i)%m == 1){
			return i;
		}
	}
	return -1;
}
int main(){
	long long n,m;
	cin>>n>>m;
	cout<<mulInv(n,m);
	
}
