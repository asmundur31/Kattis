#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
    return b==0 ? a: gcd(b, a%b);
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int max,k;
  while(cin>>n){
    vector<int> a(n);
    vector<int> b(n,1);
    max=1;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=n-1; i>-1; i--){
      if(b[i]==0) continue;
      for(int j=n-1; j>-1; j--){
        if(j==i) continue;
        k=gcd(a[i],a[j]);
        if(k>1){
          b[i]=0;
          b[j]=0;
        }
      }
      if(b[i]){
        max=a[i];
        break;
      }
    }
    cout<<max<<"\n";
  }
}
