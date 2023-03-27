
// Print the factorial of n using parametrized recursion

#include<bits/stdc++.h>
using namespace std;
void fac(int i, int pro){
    if(i<1){
        cout << pro;
        return;
    }
    fac(i-1, pro*i);
}
int main(){
    int n;
    cin >> n;
    fac(n, 1);
    return 0;
}