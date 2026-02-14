#include <bits/stdc++.h>
using namespace std;

long long fact(int num ){
    long long fact=1;
    if(num==0){
        return fact;
    }else{
    for(int i=1;i<=num;i++){
       fact*=i;
    }
    return fact;
    }
}

long long  bio(int num1,int num2){
    long long a = fact(num1); 
    long long b = fact(num2);
    long long c = fact(num1-num2);

    return (a/(c*b));
}

int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<bio(num1,num2);

    return 0 ;
}