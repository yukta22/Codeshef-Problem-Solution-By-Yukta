	int t;
	cin >> t;
	while (t--) {


			int n , c;
			cin>>n>>c;
			int a[n];
			int sum = 0;

			for(int i = 0 ; i < n ; i++){
				cin>>a[i];
			}

			for(int i = 0 ; i < n ; i++){
				sum += a[i];
			}

			if(c>=sum){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}

		}
