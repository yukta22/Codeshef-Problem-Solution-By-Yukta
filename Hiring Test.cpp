	int t;
	cin >> t;
	while (t--) {
		int n , m ;
		cin >> n >> m;
		int x, y;
		cin >> x >> y;

		string s;
		int f=0, p=0, u=0;

		for (int i = 0 ; i < n ; i++) {
			f=0, p=0, u=0;
			cin>>s;
			for (int j = 0 ; j  < m ; j++) {
				if (s[j] == 'F') {
					f++;
				}
				if (s[j] == 'U') {
					u++;
				}
				if (s[j] == 'P') {
					p++;
				}
			}
			if (f >= x || (p >= y && f >= (x-1))) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		cout<<endl;
	}
