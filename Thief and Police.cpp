	int t;
	cin >> t;
	while (t--) {
		int n , m ;
		cin >> n >> m;
		int x, y;
		cin >> x >> y;
		int a,b;
		cin >> a >> b;

		int th= (n-x) + (m-y);

        int pr= (n-a);
        int pc= (m-b);

        int mini=min(pr, pc);

        int poli= pr + pc - mini;
        
        if(poli>=th){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    

	}
