#include<iostream>
using namespace std;
void quicksort(int a[], int l, int r) {
	int p = a[(l + r) / 2];
	int i = l;
	int j = r;
	while (i < j) {
		while (a[i] > p) {
			i++;
		}
		while (a[j] < p) {
			j--;
		}
		if (i <= j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r) {
		quicksort(a, i, r);
	}
	if (l < j) {
		quicksort(a, l, j);
	}
}
void out(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}
int main() {
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	quicksort(a, 0, n - 1);
	out(a, n);
	return 0;
}