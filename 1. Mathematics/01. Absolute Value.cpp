#include<iostream>
using namespace std;

class solution{
	public:
		int absolute(int n){
			if(n<0){
				return (-1*n);
			}
			else{
				return n;
			}
		}
};

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int num;
		cin>>num;
		
		solution ans;	
		cout<<ans.absolute(num)<<endl;	
	}
	return 0;	
}
