#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum=0;
  string s;
  for(int i=0; i<n; i++){
    cin>>s;
    sum+=pow(stoi(s.substr(0,s.length()-1)),stoi(s.substr(s.length()-1,s.length()-1)));
  }
  cout<<sum<<"\n";
}
