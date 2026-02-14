#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num,count=0;
      int y;
      cin>>num;
      while(count!=2){
           y =num%10;
           count++;
           num=num/10;
         }
      cout<<y;
}