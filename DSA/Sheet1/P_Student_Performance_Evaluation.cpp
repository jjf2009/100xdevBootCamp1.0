#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    if(marks>90) cout<<"Excellent";
    if(marks<=90&&marks>80) cout<<"Good";
    if(marks<=80&&marks>70) cout<<"Fair";
    if(marks<=70&&marks>60) cout<<"Meets Expectations";
    if(marks<=60) cout<<"Below Par";

    return 0;


}