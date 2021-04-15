    int t;
    cin >> t;
    while (t--) {

        int n;
        cin>>n;
        string s;
        cin>>s;
        ll count= 0;
        for(int i = 0 ; i < n ; i++){
            count += (s[i] - '0');
        }

        ll ans = (count * (count+1))/2;
        cout<<ans<<endl;
    
    }
