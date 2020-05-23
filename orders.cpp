#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  int rettur[n];
  int s[30000];
  for(int i=0; i<30000; i++) s[i]=0;
  for(int i=0; i<n; i++){
    cin>>rettur[i];
    s[rettur[i]]=1;
  }
  int m;
  cin>>m;
  int summa[m];
  string ut[30000];
  for(int i=0; i<m; i++){
    cin>>summa[i];
  }
  for(int i=0; i<300; i++){
    for(int j=i+1; j<300-i; j++){
      if(s[i]!=0 && s[j]!=0) {
        s[i+j]+=1;
        ut[i+j]+=to_string(i+1)+" ";
      }
    }
  }
  for(int i=0; i<m; i++){
    if(s[summa[i]]>1){
      cout<<"Ambiguous\n";
    }
    else if(s[summa[i]]==1){
      cout<<ut[i]<<"\n";
    }
    else{
      cout<<"Impossible\n";
    }
  }
}
