#include<iostream>
using namespace std;


// que was to solve in O(n) complexity 
// 0 <= no. <= 18

class solution{
	public:
		long long factorial(int n){
			
			long long ans = 1;
			if(n==0 || n==1){
				return ans;
			}
			else{
				for(int i=2;i<=n; i++){
					ans = ans*i;
				}
				
				return ans;
			}
			
		}
		
};

int main(){
	int num;
	cin>>num;
	solution fact;
	cout<<fact.factorial(num);
	
	
	return 0;	
}
