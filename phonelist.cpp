#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  int n;
  bool ja;
  for(int i=0; i<T; i++){
    cin>>n;
    ja=true;
    vector<string> s(n);
    for(int j=0; j<n; j++){
      cin>>s[j];
    }
    sort(s.begin(), s.end());
    for(int j=0; j<n-1; j++){
      if(s[j]==s[j+1].substr(0,s[j].length())){
        ja=false;
        cout<<"NO\n";
        break;
      }
    }
    if(ja) cout<<"YES\n";
  }
}
