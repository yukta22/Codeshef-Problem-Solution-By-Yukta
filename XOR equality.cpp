void solve() {
	lli n;
	cin>>n;

	lli x = 2;
	lli y = n-1;

	lli temp = 1;

	while(y>0){
		if(y % 2 == 1){
			temp = x * temp % MOD;
		}

		x = x*x % MOD;
		y=y/2;

	}
	cout<<temp<<endl;
}
    
