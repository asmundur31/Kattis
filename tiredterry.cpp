#include<iostream>
#include<string>
using namespace std;

int main() {
  int n,p,d;
  cin>>n>>p>>d;
  string s;
  cin>>s;
  string sub = s.substr(s.length()-p+1);
  s = sub+s;
  int count = 0;
  int fjoldiZ = 0;
  for(int k=0; k<p; k++) {
    if(s[k]=='Z') fjoldiZ++;
  }
  if(fjoldiZ<d) count++;
  int i=1,j=p;
  while(j<s.length()) {
    if(s[i-1]=='Z') fjoldiZ--;
    if(s[j]=='Z') fjoldiZ++;
    if(fjoldiZ<d) count++;
    i++;
    j++;
  }
  cout << count << endl;
}