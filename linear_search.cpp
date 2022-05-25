#include <iostream>
using namespace std;
int main(){
    int A[10],n=10,i,key;
    cout << "enter n"<<endl;
    cin >> n;
    
    for(i = 0; i<n;i++){
        cin >> A[i];
    }
    cout << "enter key " << endl;
    cin >> key;
    for(i=0;i<n;i++){
        if(key == A[i]){
        cout << "key found at " << i;
        return 0;
        }               
    }
    cout << "key not found";
    return 0;
}