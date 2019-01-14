#include <iostream>
using namespace std;

class Solution{
	public:
		double myPow(double x, int n){
			
			if (n == 0) return 1;
			
			else if (n < 0) return 1.0/powhelper(x, -n);
			
			return powhelper(x, n);
		}
	static double powhelper(double x, int n){
		
		if (n == 0) return 1;
		
		double res = powhelper(x, n/2);
		
		if(n % 2 == 0) return res*res;
		
		else return res*res*x;
	}
};

int main(int argc, char *argv[]) {
	return 0;
}
