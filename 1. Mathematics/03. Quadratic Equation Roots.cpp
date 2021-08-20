#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class solution{
	public:
		void quadraticroots(int a, int b, int c){
			
			if((b*b - 4*a*c) >= 0){
				cout<< (-b + sqrt(b*b - 4*a*c))/(2*a) <<" "<< (-b - sqrt(b*b - 4*a*c))/(2*a)<<endl;
			}
			else{
				cout<<"Imaginary roots"<<endl;
			}
		}
};

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		solution ans;
		
		ans.quadraticroots(a,b,c);
	}
	return 0;	
}
