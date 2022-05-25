#include <iostream>
using namespace std;
int main(){
    int n,count = 0;
    cout << " enter number " << endl;
    cin  >> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        cout << " PRIME " <<endl;
    }
    else cout << " NOT PRIME "<< endl;

return 0;
}