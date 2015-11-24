#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;

// Implementation of an Iterative binary search

int binary_search(int arr[], int l, int r, int x) {
	while (l <= r) {
		int m = (l + r) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}
	return -1;
}

int main(void) {
	const int N = 5;
	int arr[N] = { 2, 4, 6, 8, 10 };
	int x = 4;

	int result = binary_search(arr, 0, N - 1, x);

	if (result == -1)
		puts("can't find the element");
	else
		printf("element found at index %d", result);

	return 0;
}
