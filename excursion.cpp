#include<iostream>
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::string s;
  std::cin>>s;
  long int f[s.length()];
  long int count=0;
  long int telja0=0, telja1=0, telja2=0;
  for(int i=0; i<s.length(); i++){
    f[i]=s.at(i)-'0';
    if(f[i]==0){
      count+=telja0;
    }
    else if(f[i]==1){
      count+=telja1;
      telja0++;
    }
    else if(f[i]==2){
      telja0++;
      telja1++;
    }
  }
  std::cout<<count<<"\n";
}
