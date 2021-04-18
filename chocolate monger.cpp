	int test;
	cin >> test;
	while (test--) {
		int n,x ;
		cin >> n>>x;
		int a[n];
		unordered_map<int,int> mpp;

		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
			mpp[a[i]]++;
		}

		int s = n - x;

		int m = mpp.size();

		int ans = min(s,m);

		cout<<ans<<endl;		

	}
