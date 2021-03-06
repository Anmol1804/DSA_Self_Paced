#include<iostream>
using namespace std;

class solution{
	public:
		bool prime(int n){
			
			if(n==1){
				return false;
			}
			else if(n==2 || n==3){
				return true;
			}
			else{
				for(int i=2; i*i <= n; i++){
					if(n%i == 0){
						return false;
					}
				}
				return true;
			}
		}
};

int main(){
	int n;
	cin>>n;
	
	solution ans;
	
	if(ans.prime(n)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	return 0;	
}
