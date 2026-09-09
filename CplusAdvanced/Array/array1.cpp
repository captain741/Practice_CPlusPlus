#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	int sum = 0;
	cout << "Nhap cac phan tu trong mang: ";
	for(int i = 0; i< n; i++){
		cin >> a[i];
		cout << a[i] << " ";
		sum += a[i];
	}
	cout << sum;
	delete []a;
	return 0; 
}
