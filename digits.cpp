#include <iostream>
using namespace std;
int main(){
    int n,r;
    cout << "enter n" << endl;
    cin >> n;
    while (n>0)
    {
        /* code */
        r = n%10;
        n = n/10;
        cout << r <<endl;
    }
return 0;    
}