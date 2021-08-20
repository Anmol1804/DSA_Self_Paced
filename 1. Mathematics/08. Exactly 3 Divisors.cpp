#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

// sieve of eratosthenes logic - checking prime no's as they will only have
long threeDivisors(long long n){
    
	vector<bool> is_prime(sqrt(n)+1, true);
	long c=0;
	for(int i=2; i*i<=n; i++){
		if(is_prime[i]){
			c++;
			for(int j=i*i; j<=n; j=j+i){
				is_prime[j] = false;
			}
		}
	}
	return c;
}

int main(){
	int num;
	cin>>num;
	cout<<threeDivisors(num)<<endl;
}
