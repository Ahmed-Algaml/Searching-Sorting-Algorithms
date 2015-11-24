#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of Bubble Sort
void bubble_sort(int *a, int n) {

	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < n - i - 1; ++j)
			if (a[j + 1] < a[j])
				swap(a[j], a[j + 1]);
}

int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int arr[N] { 5, 0, 8, 1, 6 };

	bubble_sort(arr, N);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	return 0;

}
