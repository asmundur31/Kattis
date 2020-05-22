#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int p[10000];

int find(int x) {
  if (p[x] == x) {
    return x; 
  } else {
    p[x] = find(p[x]);
    return p[x];
  }
}
void join(int x, int y) {
  p[find(x)] = find(y); 
}

void printRegions(int h, int w) {
  int count = 0;
  map<int,char> charmap;
  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) {
      int parent = find(i*w+j);
      if(charmap.find(parent) == charmap.end()) {
        charmap[parent] = alphabet[count];
        count++;
      }
    }
  }
  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) {
      cout<<charmap[find(i*w+j)]<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int T;
  cin>>T;
  for(int i=1; i<=T; i++) {
    int h,w;
    cin>>h>>w;
    for(int j=0; j<h*w; j++) p[j]=j;
    vvi bord(h,vi(w));
    for(int j=0; j<h; j++) {
      for(int k=0; k<w; k++) {
        cin>>bord[j][k];
      }
    }
    for(int j=0; j<h; j++) {
      for(int k=0; k<w; k++) {
        int min = 10001;
        int index = -1;
        if(j-1>=0 && bord[j-1][k]<min) {
          min = bord[j-1][k];
          index = (j-1)*w+k;
        }
        if(k-1>=0 && bord[j][k-1]<min) {
          min = bord[j][k-1];
          index = j*w+k-1;
        }
        if(k+1<w && bord[j][k+1]<min) {
          min = bord[j][k+1];
          index = j*w+k+1;
        }
        if(j+1<h && bord[j+1][k]<min) {
          min = bord[j+1][k];
          index = (j+1)*w+k;
        }
        if(min<bord[j][k]) {
          join(index,j*w+k);
        }
      }
    }
    cout<<"Case #"<<i<<": "<<endl;
    printRegions(h,w);
  }
}