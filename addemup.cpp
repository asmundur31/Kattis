#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool snua(int t) {
  string s = to_string(t);
  for(int i=0; i<s.length(); i++) {
    if(s[i]-'0'==3 || s[i]-'0'==4 || s[i]-'0'==7) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  long t,s;
  cin>>n>>s;
  bool haegt = false;
  vector<bool> listi(200000001, 0);
  for(int i=0; i<n; i++) {
    cin>>t;
    if(listi[t]) {
      haegt = true;
    }
    if(s-t>0) {
      listi[s-t] = true;
    }
    // Athugum hvort hægt er að snúa tölu við
    if(snua(t)) {
      string st = to_string(t);
      string a = "";
      for(int j=0; j<st.length(); j++) {
        if(st[j]-'0'==6) {
          a = "9" + a;
        } else if(st[j]-'0'==9) {
          a = "6" + a;
        } else {
          a = st[j] + a;
        }    
      }
      long snuin = stol(a);
      if(snuin!=t && listi[snuin] && snuin!=s-t) {
        haegt = true;
      }
      if(s-snuin>0) {
        listi[s-snuin] = true;
      }
    }
  }
  if(haegt) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}