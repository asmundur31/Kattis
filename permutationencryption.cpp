#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=0){
    vector<int> rod(n);
    for(int i=0; i<n; i++) cin>>rod[i];
    string s;
    getline(cin,s);
    getline(cin,s);
    int vantar = n-s.length()%n;
    if(vantar==n) vantar=0;
    for(int i=0; i<vantar; i++) s+=" ";
    string svar="";
    int count=0;
    for(int i=0; i<s.length(); i++){
      svar+=s[count+rod[i%n]-1];
      if(i%n==n-1) count+=n;
    }
    cout<<"'"<<svar<<"'\n";
    cin>>n;
  }
}
