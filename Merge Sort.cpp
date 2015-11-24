#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of Merge Sort
void merge(int *a, int l, int md, int r) {
	if (md == r)
		return;
	int n = md - l;
	int m = r - md;
	int aa[n], bb[m];

	for (int i = 0; i < n; ++i)
		aa[i] = a[l + i];

	for (int i = 0; i < m; ++i)
		bb[i] = a[md + i];

	int i = 0, j = 0;
	while (l < r) {
		if (i == n) {
			a[l] = bb[j];
			++j;
		} else if (j == m) {
			a[l] = aa[i];
			++i;
		}

		else if (bb[j] < aa[i]) {
			a[l] = bb[j];
			++j;
		} else {
			a[l] = aa[i];
			++i;
		}
		++l;
	}

}
void merge_sort(int *a, int l, int r) {

	if (l + 1 < r) {

		int md = (l + r) / 2;
		merge_sort(a, l, md);
		merge_sort(a, md, r);

		merge(a, l, md, r);
	}
}
int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int arr[N] { 5, 0, 8, 1, 6 };

	merge_sort(arr, 0, N);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	return 0;

}
