#include <iostream>
using namespace std;
int main()
{
	int a[1000][1000];
	int m,n;
	cin >> m >> n;
	int row,col;
	for(row =0;row <= m-1;row++)
	{
		for(col = 0;col <= n-1; col++){
			cin >> a[row][col];
		}
	}

	for(row =0;row <= m-1;row++)
	{
		for(col = 0;col <= n-1; col++){
			cout << "\t" << a[row][col];
		}
		cout << endl;
	}		
	return 0;
}

