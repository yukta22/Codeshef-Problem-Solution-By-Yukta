#include <iostream>
using namespace std;
#define lli     long long int

int gcd(lli a, lli b){
    
    if(b == 0){
        return a;
    }
    gcd(b,a%b);
}   


int main() {
	
	int t;
	cin>>t;
	while(t--){
	lli n , m ;
   cin >> n >> m;

   lli gcd1 = gcd(n,m);

   lli lch1 = n*m/gcd1;

   cout << gcd1 << " " <<lch1 << "\n";
	}
	return 0;
}
