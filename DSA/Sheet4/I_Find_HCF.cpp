#include <bits/stdc++.h>
using namespace std;
void hcf(int n1, int n2)
{
    int min = (n1<n2) ? n1 : n2;
    int hcf=1;
    for(int i=1; i<=min; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    cout<< hcf;
}



int main() {
    int n1,n2;
    cin >> n1;
    cin>>n2;
    hcf(n1,n2);
}