#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin>>num;

        if (num%2==1) {
            cout<<num<<" ";
        } 
    }

    return 0;
}