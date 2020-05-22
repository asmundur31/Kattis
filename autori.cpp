#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  char t=' ';
  vector <char> ord;
  t=getchar();
  ord.push_back(t);
  while(t!='\n'){
    t=getchar();
    if(t=='-'){
      t=getchar();
      ord.push_back(t);
    }
  }
  for(int i=0; i<ord.size(); i++){
    cout<<ord[i];
  }
  cout<<"\n";
}
