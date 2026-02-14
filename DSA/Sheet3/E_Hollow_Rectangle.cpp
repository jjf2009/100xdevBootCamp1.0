#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    for(int i =1; i<=num1;i++){
        for(int j =1 ; j <=num2;j++){
            if(i==1||i==num1||j==1||j==num2){
                cout<<"*";
           }else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
return 0;
}