#include<iostream>
#include<string>
using namespace std;

int main() {
  string s;
  cin>>s;
  int count1=0, count2=0, count3=0;
  // 1
  int pos;
  if(s[0]=='U') pos=1;
  else pos=0;
  for(int i=1; i<s.length(); i++) {
    if(s[i]=='D' && pos==1) {
      count1+=2;
    } else if(s[i]=='D' && pos==0) {
      count1++;
    } else if(s[i]=='U' && pos==0) {
      count1++;
    }
    pos=1;
  }
  cout << count1 << endl;
  if(s[0]=='U') pos=1;
  else pos=0;
  for(int i=1; i<s.length(); i++) {
    if(s[i]=='U' && pos==1) {
      count2++;
    } else if(s[i]=='U' && pos==0) {
      count2+=2;
    } else if(s[i]=='D' && pos==1) {
      count2++;
    }
    pos=0;
  }
  cout << count2 << endl;
  if(s[0]=='U') pos=1;
  else pos=0;
  for(int i=1; i<s.length(); i++) {
    if(s[i]=='U' && pos==0) {
      count3++;
      pos=1;
    } else if(s[i]=='D' && pos==1) {
      count3++;
      pos=0;
    }
  }
  cout << count3 << endl;
}