#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct compare {
  bool operator()(const string& first, const string& second) {
    return first.substr(0,2) < second.substr(0,2);
  }
};
int main(){
  int n=1;
  string s;
  compare c;
  while(n!=0){
    cin>>n;
    vector< string > st;
    for(int i=0; i<n; i++){
      cin>>s;
      st.push_back(s);
    }
    stable_sort(st.begin(),st.end(),c);
    for(int i=0; i<n; i++) cout<<st[i]<<"\n";
    cout<<"\n";
  }
}
