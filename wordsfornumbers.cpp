#include<iostream>
#include<sstream>
#include<string>
using namespace std;
bool is_number(const std::string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
int main(){
  string s,t;
  string tala;
  while(getline(cin, s)){
    stringstream ss(s);
    while(ss>>t){
      if(is_number(t)){
        tala="";
        int a=stoi(t);
        if(a/10==2) tala+="twenty";
        else if(a/10==3) tala+="thirty";
        else if(a/10==4) tala+="forty";
        else if(a/10==5) tala+="fifty";
        else if(a/10==6) tala+="sixty";
        else if(a/10==7) tala+="seventy";
        else if(a/10==8) tala+="eighty";
        else if(a/10==9) tala+="ninety";
        if(a%10==1 && a/10>=2) tala+="-one";
        else if(a%10==2 && a/10>=2) tala+="-two";
        else if(a%10==3 && a/10>=2) tala+="-three";
        else if(a%10==4 && a/10>=2) tala+="-four";
        else if(a%10==5 && a/10>=2) tala+="-five";
        else if(a%10==6 && a/10>=2) tala+="-six";
        else if(a%10==7 && a/10>=2) tala+="-seven";
        else if(a%10==8 && a/10>=2) tala+="-eight";
        else if(a%10==9 && a/10>=2) tala+="-nine";
        if(a==0) tala="zero";
        else if(a==1) tala="one";
        else if(a==2) tala="two";
        else if(a==3) tala="three";
        else if(a==4) tala="four";
        else if(a==5) tala="five";
        else if(a==6) tala="six";
        else if(a==7) tala="seven";
        else if(a==8) tala="eight";
        else if(a==9) tala="nine";
        else if(a==10) tala="ten";
        else if(a==11) tala="eleven";
        else if(a==12) tala="twelve";
        else if(a==13) tala="thirteen";
        else if(a==14) tala="fourteen";
        else if(a==15) tala="fifteen";
        else if(a==16) tala="sixteen";
        else if(a==17) tala="seventeen";
        else if(a==18) tala="eighteen";
        else if(a==19) tala="nineteen";
        cout<<tala<<" ";
      }
      else cout<<t<<" ";
    }
    cout<<"\n";
  }
}
