#include<iostream>
#include<string>
#include<set>
using namespace std;

struct cmp {
  bool operator()(int a, int b) const {
    return a >= b;
  }
};


multiset<int> hi;
multiset<int,cmp> lo;

int pop(){
  multiset<int>::iterator ith = hi.begin();
  int h = *ith;
  multiset<int>::iterator itl = lo.begin();
  int l = *itl;
  if(hi.size()>=lo.size()) {
    int gildi = *ith;
    hi.erase(ith);
    return gildi;
  } else {
    int gildi = *itl;
    lo.erase(itl);
    return gildi;
  }
}

void push(int x){
  if(hi.size()==0) {
    hi.insert(x);
    return;
  } 
  multiset<int>::iterator ith = hi.begin();
  int h = *ith;
  multiset<int>::iterator itl = lo.begin();
  int l = *itl;
  if(x>=h) {
    if(hi.size()<lo.size()) hi.insert(x);
    else {
      int gildi = *ith;
      lo.insert(gildi);
      hi.erase(ith);
      hi.insert(x);
    }
  } else if(x<=l) {
    if(lo.size()<hi.size()) lo.insert(x);
    else {
      int gildi = *itl;
      hi.insert(gildi);
      lo.erase(itl);
      lo.insert(x);
    }
  } else {
    if(hi.size()<lo.size()) {
      hi.insert(x);
    } else {
      lo.insert(x);
    }
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  int x;
  while(cin>>s){
    if(s[0]=='#'){
      cout<<pop()<<"\n";
    }
    else{
      x=stoi(s);
      push(x);
    }
    /*multiset<int>::iterator ith = hi.begin();
    int h = *ith;
    multiset<int>::iterator itl = lo.begin();
    int l = *itl;
    cout << "lo: ";
    for(itl = lo.begin(); itl!=lo.end(); ++itl)
      cout << *itl << " ";
    cout << endl;
    cout << "hi: ";
    for(ith = hi.begin(); ith!=hi.end(); ++ith)
      cout << *ith << " ";
    cout << endl;*/
  }
}
