#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  int i=0;
  getline(cin,s);
  while(i<s.length()){
    if(s.substr(i,8).compare("flatbaka") == 0){
    cout<<"petsa";
  i+=8;}
    else if(s.substr(i,4).compare("bauk") == 0){
    cout<<"dos";
  i+=4;}
  else{
    if(s[i] == 'k') cout << 'g';
    else if(s[i] == 'y') cout << 'u';
    else cout<< s[i];
    i++;
  }




  }
  cout<<endl;
}
