#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i =1; i<=num;i++){
       for(int s=1;s<i;s++){
             cout<<' ';
        }
        for(int j=1;j<=i;j++){
             cout<<'x';
        }
        cout<<endl;
    }

    return 0;
}