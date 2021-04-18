void solve(){
    
    int amin , bmin , cmin , t , A ,B , C;

    cin >> amin >> bmin >> cmin >> t >> A >> B >> C;

    if(amin > A || bmin > B || cmin > C || t > (A+B+C)){
        cout << "NO" <<"\n";
    }
    else{
        cout << "YES" <<"\n";
    }
}
