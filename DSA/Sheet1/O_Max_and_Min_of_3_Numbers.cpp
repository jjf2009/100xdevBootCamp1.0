#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"Min = "<<((num2<num1) ? ((num2>num3) ? num3:num2):((num1>num3) ? num3:num1))<<endl;
    cout<<"Max = "<<((num2>num1) ? ((num2<num3) ? num3:num2):((num1<num3) ? num3:num1));
    return 0;
}