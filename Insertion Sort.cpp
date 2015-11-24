#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of Insertion Sort
void insertion_sort(int *a, int n) {

	for (int i = 1; i < n; ++i) {
		int j = i - 1;
		int key = a[i];
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
	}
}
int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int arr[N] { 5, 0, 8, 1, 6 };

	insertion_sort(arr, N);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	return 0;

}
