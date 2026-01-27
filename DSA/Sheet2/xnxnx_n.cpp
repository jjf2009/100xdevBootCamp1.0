#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  num1,num2;
    long long product=1;
    cin>>num1;
    cin>>num2;
    for(long long  i =1;i<num2;i++){
       product*=num1;
    }
    cout<<product;
}