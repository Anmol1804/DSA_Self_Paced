#include<iostream>
#include<math.h>
using namespace std;

// digits in a no. is log10(num) + 1;
class solution{
	public:
		int digInFact(long long n){
			float ans = 0;
			
			// log10(0) is not defined
			if(n==0){
				return 1;
			}
			else{
				for(long long i=1; i<=n; i++){
					ans = ans + log10(i);
				}
				
				return floor(ans)+1;
			}
		}
		
};

int main(){
	long long num;
	cin>>num;
	
	solution ans;
	cout<<ans.digInFact(num);
	
	return 0;	
}
