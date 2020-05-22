#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int a[1000001];

#define LSB(i) ((i) & -(i))

void add(int i, int k){
  while(i<1000001){
    a[i]=a[i]+k;
    i=i+LSB(i);
  }
}

int sum(int i){
  int sum=0;
  while(i>0){
    sum=sum+a[i];
    i=i-LSB(i);
  }
  return sum;
}
int main(){
  int N,K;
  char t;
  int tala;
  int x,y;
  int i=0;
  scanf("%d %d",&N,&K);
  memset(a,0,N);
  while(i<K){
    scanf("%c",&t);
    if(t=='F'){
      scanf("%d",&tala);
      if(sum(tala)-sum(tala-1)==0) add(tala, 1);
      else add(tala, -1);
      i++;
    }
    else if(t=='C'){
      scanf("%d %d",&x,&y);
      printf("%d\n",sum(y)-sum(x-1));
      i++;
    }
  }
}
