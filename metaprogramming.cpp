#include<iostream>
#include<string>
#include<sstream>
int main(){
  std::string s="k";
  std::string fyrst;
  std::string breyta[10000];
  int n[10000];
  int count=0;
  std::string k;
  std::string m;
  std::string l;
  getline(std::cin,s);
  while(!s.empty()){
    std::stringstream ss(s);
    ss>>fyrst;
    int a=-1,b=-1;
    if(fyrst.compare("define")==0){
      ss>>n[count];
      ss>>breyta[count];
      count++;
    }
    else if(fyrst.compare("eval")==0){
      ss>>k;
      for(int i=0; i<count; i++){
        if(k.compare(breyta[i])==0){
          a=n[i];
        }
      }
      ss>>l;
      ss>>m;
      for(int i=0; i<count; i++){
        if(m.compare(breyta[i])==0){
          b=n[i];
        }
      }
      if(b==-1 || a==-1){
        std::cout<<"undefined\n";
      }
      else if(l.compare("<")==0){
        if(a<b) std::cout<<"true\n";
        else std::cout<<"false\n";
      }
      else if(l.compare("=")==0) {
        if(a==b) std::cout<<"true\n";
        else std::cout<<"false\n";
      }
      else if(l.compare(">")==0) {
        if(a>b) std::cout<<"true\n";
        else std::cout<<"false\n";
      }
    }
    getline(std::cin,s);
  }
}
