#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  int len=s.length();
  int r,c;
  for(int i=1; i*i<=len; i++){
    if(len%i==0){
      r=i;
      c=len/i;
    }
  }
  char bord[r][c];
  for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
      bord[j][i]=s[r*i+j];
    }
  }
  string svar="";
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      svar+=bord[i][j];
    }
  }
  cout<<svar<<"\n";
}
