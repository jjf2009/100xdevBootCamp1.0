#include <bits/stdc++.h>
using namespace std;

void printprime(int n ){
              int count=2;
    while(n>0){

        for(int i=2;i<count;i++){
            if(count%i==0){
                break;
            }
        }
        cout<<count;
        count++;
        n--;
    }
}


int main(){
    int n ;
    cin>>n;
    printprime(n);
}