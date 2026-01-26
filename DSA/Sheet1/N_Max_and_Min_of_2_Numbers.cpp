#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<"Min = "<<((num2<num1) ? num2:num1)<<endl;
    cout<<"Max = "<<((num2>num1) ? num2:num1);
    return 0;
}