#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num,sum=0;
    cin>>num;
      while(num>0){
          int y = num%10;
          sum=sum+y;
          num=num/10;
      }
      cout<<sum;
}