#include<iostream>
#include<math.h>
using namespace std;

class solution{
	public:
		double termOfGP(int a, int b, int c){
			double r = (double)b/a;
			
			return a*pow(r,c-1);
		}
		
};

int main(){
	int a1,a2,n;
	cin>>a1>>a2>>n;
	
	solution nth;
	cout<<nth.termOfGP(a1,a2,n)<<endl;
	
	return 0;	
}
