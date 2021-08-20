#include<iostream>
#include<iomanip>
using namespace std;

class solution{
	public:
		double CtoF(int C){
			
			//formula - (9/5)*C + 32;
			
			return ((double)C*9)/5 + 32;
		}
};

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int Ctemp;
		cin>>Ctemp;
		
		solution Ftemp;
		cout << fixed << setprecision(2) << Ftemp.CtoF(Ctemp)<<endl;
		
	}
	return 0;	
}
