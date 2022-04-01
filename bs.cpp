#include <iostream>
using namespace std;
int main(){
    int n=10,l=0,h=9,key,mid;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "enter key" <<endl;
    cin >> key;
    while (l<=h)
    {
        /* code */
        mid = (l+h)/2;
        if(key == A[mid]){
            cout << "key found at " << mid;
            return 0;
        }
        else if(key < A[mid])
            h = mid-1;
        else 
            l = mid+1;
    }

    cout << "NOT FOUND";

    return 0;
    
    
}