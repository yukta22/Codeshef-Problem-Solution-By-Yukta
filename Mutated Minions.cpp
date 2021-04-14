	int t;
	cin >> t;
	while (t--) {

		ll n,k;
		cin>>n>>k;

		int a[n];
		int count= 0 ;

		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		}

		for(int i = 0 ; i < n ; i++){
			int ans = a[i]+k;

			if(ans%7 == 0){
				count++;
			}

		}

		cout<<count<<endl;
	}
