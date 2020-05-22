#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
  string m;
  cin>>m;
  vector<int> a(10);
  for(int i=0; i<m.length(); i++) {
    a[m[i]-'0']++;
  }
  int min=1001;
  int index=1;
  for(int i=1; i<10; i++) {
    if(a[i]<min) {
      min = a[i];
      index=i;
    }
  }
  string lausn = to_string(index);
  a[index]--;
  min=1001;
  int index2=0;
  for(int i=0; i<=index; i++) {
    if(a[i]<min) {
      min = a[i];
      index2=i;
    }
  }
  for(int i=0; i<=min; i++) {
    lausn = lausn + to_string(index2);
  }
  cout<<lausn<<endl;
}