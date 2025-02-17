//Find the fibonacci series till the given number


#include<iostream>
using namespace std;

int main() {

    int n; //= 10;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a <<" " <<b<<" ";
    for(int i = 3; i<=n; i++ ) {
        
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return 0;
}
