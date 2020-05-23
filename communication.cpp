#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int dul;
  string dulmal="";
  string utkoma="";
  int veldi;
  int len=0;
  int fjoldi1=0;
  int summa=0;
  for(int i=0; i<n; i++){
    cin>>dul;
    veldi=floor(log2(dul));
    while(dul>0){
      if(dul>=pow(2,veldi)){
        dulmal+="1";
        dul-=pow(2,veldi);
        veldi--;
      }
      else{
        dulmal+="0";
        veldi--;
      }
      len++;
    }
    while(veldi+1>0){
      dulmal+="0";
      len++;
      veldi--;
    }
    cout<<dulmal<<"\n";
    for(int j=0; j<len; j++){
      if(dulmal[j]=='1' && fjoldi1%2==0){
        utkoma+="0";
        fjoldi1++;
      }
      else if(dulmal[j]=='1' && fjoldi1%2==1){
        utkoma+="1";
        fjoldi1++;
      }
      else if(dulmal[j]=='0' && fjoldi1%2==0){
        utkoma+="0";
      }
      else if(dulmal[j]=='0' && fjoldi1%2==1){
        utkoma+="1";
      }
    }
    cout<<utkoma<<"\n";
    for(int j=0; j<len; j++){
      if(utkoma[j]=='1') summa+=pow(2,len-j-1);
    }
    cout<<summa<<" ";
    summa=0;
    len=0;
    fjoldi1=0;
    dulmal="";
    utkoma="";
  }
  cout<<"\n";
}
