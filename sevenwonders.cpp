#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  string m;
  cin>>m;
  int t=0,c=0,g=0;
  for(int i=0; i<m.length(); i++) {
    if(m[i]=='T') t++;
    else if(m[i]=='C') c++;
    else g++;
  }
  int sum = t*t+c*c+g*g+7*min(t,min(c,g));
  cout<<sum<<endl;
}