#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main(){
  string lina;
  while(getline(cin,lina)) {
    stringstream l;
    l<<lina;
    int a;
    int sum = 0;
    vector<int> x;
    while(l>>a) {
      x.push_back(a);
      sum+=a;
    }
    for(int i=0; i<x.size(); i++) {
      if(sum%2==0 && x[i]==sum/2) {
        cout << x[i] << endl;
        break;
      }
    }
  }
}
