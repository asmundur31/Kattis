#include<iostream>
#include<string>
using namespace std;

int main() {
  string lina;
  string p = "problem";
  while(getline(cin,lina)) {
    for(int i=0; i<lina.length(); i++) {
      lina[i] = tolower(lina[i]);
    }
    if(lina.find(p) != string::npos) cout << "yes\n";
    else cout << "no\n";
  }
}