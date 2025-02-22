#include <bits/stdc++.h>

using namespace std;

string checkoddeven(int s) {
    if(s & 1) {
        return "odd";
    }else {
        return "even";
    }
}

void solve() {
    int a = 1;
    //binary representation of 3 is 011 and four is 100
    int b = 3, c = 4;

    //logical not operator
    cout << (!a) << endl;
    //when we do the and of 011 and 100 the result is gonna be 000
    cout << (b & c) << endl;
    //similarly when we do the or operation of 011 and 100 we will have 111 that is 7 in integer
    cout << (b | c) << endl;
    //bitwise complement(flips all the bits)
    cout << (~a) << endl;

    /*
        binary left shift, here what happens:
        00011 we have three
        when we do the operation we have 01100
        this is the same as multiplies 3 by 2^2
    */
    cout << (b << 2) << endl;

    /*
        binary right shift, we have something similar happening
        100 we have four when we do (4 >> 1) is the same thing as divides four by 2
    */
    cout << (c >> 1) << endl;

    //if we divide it too much we will get only 0
    cout << (c >> 3) << endl;

    cout << checkoddeven(5) << endl;

}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}