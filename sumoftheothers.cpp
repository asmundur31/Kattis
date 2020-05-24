#include<iostream>
int main(){
  std::string summa;
  std::string tala;
  std::getline(std::cin, tala);
  summa+=tala;
  std::cout<<summa<<"\n";
}
