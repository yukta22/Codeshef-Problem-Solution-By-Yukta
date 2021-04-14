int t;
cin>>t;
 while(t--){

        int n,k;
        cin>>n>>k;
        string a[110];
        vector<string> v[55];

        for(int i = 0 ; i < n ; i ++){
            cin>>a[i];
        }

        int L;
        for(int i = 0 ; i < k ; i++){
            cin>>L;
            for (int j = 0; j < L; j++) {
                string s;
                cin >> s;
                v[i].push_back(s);
            }

        }

        for(int i = 0 ; i < n ; i++){
            string ans ="NO";

            for(int j = 0 ; j < k ; j++){
                for(int l = 0 ; l < v[j].size() ; l++){
                    if( v[j][l] == a[i]){
                        ans = "YES";
                    }
                }  
            }
            cout<< ans << (i==n-1 ? "\n" : " ");

        }


    }
