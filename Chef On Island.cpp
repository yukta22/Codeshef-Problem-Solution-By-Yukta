	int t;
	cin>>t;
	while(t--){

		int x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;

		double mini = INT_MAX;

		double a1 = x / xr;
		double a2 = y/yr;

		mini = min(a1,a2);

		if(mini >= d){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
