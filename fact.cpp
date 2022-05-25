#include <iostream>
using namespace std;
int main(){
    int n;
    long long int fact = 1;
    cout << "enter n" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++){
        fact = fact*i;
    }
    cout << " factorial of  " << n << "is " << fact;

return 0;    
}