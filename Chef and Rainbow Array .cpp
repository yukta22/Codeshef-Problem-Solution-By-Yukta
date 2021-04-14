	int t;
	cin >> t;
	while (t--) {

		int n;
		cin>>n;
        int a[n],i,prev=1;
        for(i=0;i<n;i++)
        	cin>>a[i];
        
        if(a[0]!=1)
        cout<<"no\n";
        else
        {
            for(i=0;i<=n/2;i++)
            {
                if(a[i]!=prev)
                prev++;
                if(a[i]!=a[n-i-1] || a[i]!=prev)
                break;
            }
        
        if(i==(n/2)+1 && prev==7)
        cout<<"yes\n";
        else
        cout<<"no\n";
        }
	}
