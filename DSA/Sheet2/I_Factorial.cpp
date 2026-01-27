#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num;
    cin>>num;
    long long fact=1;
    if(num==0){
        cout<<fact;
    }else{
    for(int i=1;i<=num;i++){
       fact*=i;
    }
    cout<<fact;
    }
}