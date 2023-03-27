#include<bits/stdc++.h>
using namespace std;
void pattern_5(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row+1;col++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern_5(n);
    return 0;
}