#include<bits/stdc++.h>
using namespace std;
void pattern_2(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern_2(n);
    return 0;
}