#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int a[100000];
#define LSB(i) ((i) & -(i))
void add(int i, int k){
  while(i<100000){
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
  int N;
  scanf("%d",&N);
  int tala;
  vector< pair<int,int> > max;
  vector< pair<int,int> > min;
  for(int i=1; i<=N; i++){
    scanf("%d",&tala);
    add(i,tala);
    if(tala>N/2 && N%2==0) max.push_back(make_pair(tala,i));
    else if(tala>N/2+1 && N%2==1) max.push_back(make_pair(tala,i));
    else min.push_back(make_pair(tala,i));
  }
  sort(max.begin(),max.end());
  sort(min.begin(),min.end());
  for(int i=0;i<max.size();i++){
    printf("%d %d\n",max[i].first,max[i].second);
  }
  printf("\n");
  for(int i=0;i<min.size();i++){
    printf("%d %d\n",min[i].first,min[i].second);
  }
  int j=0,k=max.size()-1;
  int munur=0;
  for(int i=1; i<=N; i++){
    if(i%2==1){
      if(sum(min[j].first)-sum(min[j].first-1)==j){
        printf("%d\n",0);
        printf("min[j].first=%d og min[j].second=%d og sum=%d\n",min[j].first,min[j].second,sum(min[j].second)-sum(min[j].second-1));
      }
      else{
        munur=abs(min[j].first-min[j].second);
        add(min[j].second,munur);
        add(min[j].first,-munur);
        printf("%d\n",munur);
      }
      j++;
    }
    else{
      if(sum(max[k].first)-sum(max[k].first-1)==k+1){
        printf("%d\n",0);
        printf("max[k].first=%d og max[k].second=%d og sum=%d\n",max[k].first,max[k].second,sum(max[k].second)-sum(max[k].second-1));
      }
      else{
        munur=abs(max[k].first-max[k].second);
        add(max[k].second,-munur);
        add(max[k].first,munur);
        printf("%d\n",munur);
        printf("max[k].first=%d og max[k].second=%d\n",max[k].first,max[k].second);
      }
      k--;
    }
  }
}
