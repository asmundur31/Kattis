#include<iostream>
#include<string>
#include<math.h>
using namespace std;

double PI = 4*atan(1);
int main() {
  int T;
  cin>>T;
  for(int i=0; i<T; i++) {
    int n;
    cin>>n;
    string command;
    int value;
    double x=0,y=0;
    int dir = 0;
    for(int j=0; j<n; j++) {
      cin>>command>>value;
      if(command.compare("fd")==0) {
        x+=value*cos(dir*PI/180);
        y+=value*sin(dir*PI/180);
      } else if(command.compare("bk")==0) {
        x-=value*cos(dir*PI/180);
        y-=value*sin(dir*PI/180);
      } else if(command.compare("lt")==0) {
        dir+=value;
        dir=dir%360;
      } else if(command.compare("rt")==0) {
        dir-=value;
        dir=dir%360;
      }
    }
    double length = sqrt(x*x+y*y);
    printf("%.0f\n",length);
  }
}