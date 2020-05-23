#include<iostream>
using namespace std;
int main(){
  int k;
  cin>>k;
  int afgangur = k%25;
  int munur = 25-(25-afgangur)/2;
  if(afgangur!=0 && k>25){
    cout << 'a';
    char c = 'a'+munur;
    cout << c;
  }
  else if(afgangur!=0){
    cout << 'a';
    char c = 'a'+afgangur;
    cout << c << "\n";
    return 0;
  }
  else if (k==25){
    cout << 'a';
    cout << 'z';
  }
  k-=munur;
  while(k>=50){
    cout << 'a' << 'z';
    k-=munur;
    k-=25;
    munur=25;
  }
  if(k>0){
    char c='z'-k;
    cout << c << "\n";
  }
}
