#include<iostream>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){

      int n;
      cin>>n;
      int a[n],sum = 0;
      for(int i=0;i<n;i++){
          cin>>a[i];
          sum += a[i];
      }
      
      int min = a[0];
   for (int i = 1; i < n; ++i)
		{
			if (min>a[i])
			{
				min=a[i];
			}
		}
   cout<<sum-(min*n)<<endl;

}
return 0;
}
