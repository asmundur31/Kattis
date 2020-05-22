#include<iostream>
int main(){
  int e,f,c;
  std::cin>>e>>f>>c;
  int tomar=e+f;
  int fullar=0;
  int count=0;
  while(tomar>=c){
    tomar-=c;
    fullar++;
    count++;
    tomar+=fullar;
    fullar=0;
  }
  std::cout<<count<<"\n";
}
