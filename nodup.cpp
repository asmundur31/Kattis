#include<iostream>
int main(){
  std::string s="k";
  std::string ord[80];
  int ja=1;
  int count=0;
  getline(std::cin,s);
  while(true){
    ord[count]=s.substr(0,s.find(" "));
    count++;
    if(s.find(" ")==-1){
      ord[count]=s;
      break;
    }
    else s.erase(0,s.find(" ")+1);
  }
  for(int i=0; i<count; i++){
    for (int j=i+1; j<count; j++) {
      if(ord[i].compare(ord[j])==0)
        ja=0;
    }
  }
  if(ja==1) std::cout<<"yes\n";
  else std::cout<<"no\n";
}
