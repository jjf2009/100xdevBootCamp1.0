#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cin>>num1;
    for(int i =1; i<=num1;i++){
        for(int j =1 ; j <=num1;j++){
            if(i==1||i==num1||j==1||j==num1){
                cout<<"*";
           }else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
return 0;
}