/*
E
DE
CDE
BCDE
ABCDE
*/
#include <iostream>
using namespace std ;
int main () {
    int n ; 
    cout << "Enter a number : " << endl ;
    cin >> n ;
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<=i; j++ ) {
            cout << char(65+j-i+n-1) << " " ;
        }
        cout << endl ;
    }
}