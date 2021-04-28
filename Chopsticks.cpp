void solve() {
	int n,d;
	cin>>n>>d;
	int a[n];
	int count = 0;

	for(int i = 0  ; i < n ; i++){
		cin>>a[i];
	}

	sort(a,a+n);

	for(int i = 0  ; i < n ; ){
		if(a[i+1] - a[i] <= d){
			count++;
			i+=2;
		}
		else{
			i+=1;
		}
	}

	cout<<count<<endl;


}
