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

    return 0;
}
