#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of Quick Sort using the last element as Pivot
int parition(int *a, int l, int r) {
	int x = a[r];
	int i = l - 1;

	for (int j = l; j <= r - 1; ++j)
		if (a[j] <= x)
			swap(a[++i], a[j]);

	swap(a[i + 1], a[r]);
	return i + 1;
}

void quick_sort(int *a, int l, int r) {
	if (l < r) {
		int q = parition(a, l, r);
		quick_sort(a, l, q - 1);
		quick_sort(a, q + 1, r);
	}
}
int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int arr[N] { 5, 1, 8, 2, 3 };

	quick_sort(arr, 0, N - 1);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	return 0;

}
