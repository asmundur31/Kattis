#include<iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for(int i=n; i>=1; i--) {
    if(i==1) {
      cout << i << " bottle of " << s << " on the wall, " << i << " bottle of " << s << "." << endl;
      cout << "Take it down, pass it around, no more bottles of " << s << "." << endl;
    } else if(i==2) {
      cout << i << " bottles of " << s << " on the wall, " << i << " bottles of " << s << "." << endl;
      cout << "Take one down, pass it around, 1 bottle of " << s << " on the wall." << endl;
    } else {
      cout << i << " bottles of " << s << " on the wall, " << i << " bottles of " << s << "." << endl;
      cout << "Take one down, pass it around, " << i-1 << " bottles of "<< s << " on the wall." << endl;
    }
    cout << endl;
  }
}