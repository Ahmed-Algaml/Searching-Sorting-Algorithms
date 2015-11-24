#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of Selection Sort
void selection_sort(int *a, int n) {
	int mnidx = 0;
	for (int i = 0; i < n; ++i) {
		mnidx = i;
		for (int j = i + 1; j < n; ++j)
			if (a[j] < a[mnidx])
				mnidx = j;

		swap(a[i], a[mnidx]);
	}

}
int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int arr[N] { 5, 0, 8, 1, 6 };

	selection_sort(arr, N);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	return 0;

}
