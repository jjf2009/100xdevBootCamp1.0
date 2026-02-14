#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
   
    cout << ">";
    for (int i = 1; i <=n; i++) {
        for (int j =1; j <=i; j++) {
            if(j==1||j==i){
              cout << ">";
            }else{
                for(int s=0;s<=j;s++)
                   cout<<"  ";
            }
   
        }
        cout << endl;
    }

    // Lower half
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int j = 1; j <= i*2; j++) {
    //     if(j==2*i||j==i){
    //          cout << "> ";
    //         }else{
    //       cout<<"  ";
    //         }
   
    //     }
    //     cout << endl;
    // }
    return 0;
}
