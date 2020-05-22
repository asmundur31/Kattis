#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  string s,d;
  cin>>s>>d;
  int k;
  vector<char> lausn(m);
  for(int i=0; i<m-n; i++){
    if(i<n) k=(d[m-1-i]-s[n-1-i]+26)%26;
    else k=(d[m-1-i]-lausn[m-1-i]+26)%26;
    lausn[m-n-i-1]='a'+k;
  }
  for(int i=0; i<n; i++) lausn[m-n+i]=s[i];
  for(int i=0; i<m; i++) cout<<lausn[i];
  cout<<"\n";
}
