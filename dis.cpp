#include <iostream>
using namespace std;
int main(){
	int amount,discount,final;
	cout << "enter amount: " << endl;
	cin >> amount;
	if (amount < 100)
	{
		cout << "no discount \n"; 
		cout << "final amount " << amount << endl;
	}
	else if (amount >=100 && amount < 500)
	{
		discount = 10*amount/100;
		cout << "discout is " << discount <<endl;
		cout << "final amount " << final << endl;
	}
	else {
		discount = 20*amount/100;
		cout << "discout is " << discount <<endl;
		final = amount - discount;
		cout << "final amount " << final << endl;

	}
	
	return 0;
	 
}