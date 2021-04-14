#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
           int x,y,k,n;
   cin>>x>>y>>k>>n;
   int p[n],c[n];
   
   for(int i=0;i<n;i++){
    cin>>p[i]>>c[i];
   }
   int flag = 0;
   int rem = x-y;
   for(int i=0;i<n;i++){
    if(p[i] >= rem && c[i] <= k){
      flag = 1;
    }
   }
   
   if(flag == 0){
    cout<<"UnluckyChef"<<endl;
   }else{
    cout<<"LuckyChef"<<endl;
   }
  }
    
    
	return 0;
}
