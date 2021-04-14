    void helper(int *arr, int q, int p)
{
    for (int i = q; i <= p; i++)
    {
        arr[i] = 1;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        int M, x, y;
        cin >> M >> x >> y;

        int a[M];

        for (int i = 0 ; i < M ; i++) {
            cin >> a[i];
        }

        int arr[101] ;
        arr[0] = 1;
            for (int i = 1; i <= 100; i++)
        {
            arr[i] = 0;
        }
        int n = x * y;
        int p, q;
        for (int i = 0; i < M; i++)
        {
            p = a[i] + n;
            q = a[i] - n;
            if (q < 1) {
                q = 1;
            }
            if (p > 100) {
                p = 100;
            }
            helper(arr, q, p);
        }
        int count = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
