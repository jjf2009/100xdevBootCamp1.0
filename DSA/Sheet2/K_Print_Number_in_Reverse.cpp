#include <bits/stdc++.h>
using namespace std;

int main(){
     long long  num;
    cin>>num;
    if(num==0){
        cout<<0;
    }else{
         while(num>0){
          cout<<num%10;
          num=num/10;
      }
    }

}
