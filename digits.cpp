#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  long count;
  int a;
  while(s.compare("END")!=0){
    count=1;
    a=s.length();
    if(a<2 && stoi(s)==1){
      cout<<1<<"\n";
    }
    else{
      while(a!=1){
        count++;
        a=floor(log10(a))+1;
      }
      cout<<count+1<<"\n";
    }
    cin>>s;
  }
}
