#include <bits/stdc++.h>
using namespace std;

int main(){
    int numofelements,number,countofpostive=0,countofnegative=0,countofeven=0,countofodd=0;
    cin>>numofelements;
    for(int i =0;i<numofelements;i++){
            cin>>number;
        if(number!=0)
        number>0 ? countofpostive++ : countofnegative++;
        number%2==0 ? countofeven++ : countofodd++;
    }
    cout<<countofpostive<<endl<<countofnegative<<endl<<countofeven<<endl<<countofodd;
}