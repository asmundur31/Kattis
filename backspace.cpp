#include<iostream>
#include<stack>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  char t=' ';
  stack <char> ord;
  while(t!='\n'){
    t=getchar();
    if(t=='<')ord.pop();
    else ord.push(t);
  }
  stack <char> ut;
  while(!ord.empty()){
    t=ord.top();
    ord.pop();
    ut.push(t);
  }
  while(!ut.empty()){
    t=ut.top();
    ut.pop();
    //cout<<t;
    printf("%c",t);
  }
}
