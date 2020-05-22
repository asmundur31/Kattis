#include<iostream>
#include<string>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  long long sum;
  int n;
  long long a;
  for(int i=0; i<T; i++){
    sum=0;
    cin>>n;
    for(int j=0; j<n;j++){
      cin>>a;
      sum+=a%n;
    }
    if(sum%n==0) cout<<"YES\n";
    else cout<<"NO\n";
  }
}
