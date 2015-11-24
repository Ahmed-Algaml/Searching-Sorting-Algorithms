#include<bits/stdc++.h>

using namespace std;

#define all(v) v.begin() , v.end()
using ll = long long;


// radix_sort

void count_sort(int *a, int n, int cur) {
	int output[n];
	int count[10] = { 0 };

	for (int i = 0; i < n; ++i)
		++count[a[i] / cur % 10];
	for (int i = 1; i < 10; ++i)
		count[i] += count[i - 1];

	for (int i = n - 1; i >= 0; --i)
		output[--count[a[i] / cur % 10]] = a[i];

	for (int i = 0; i < n; ++i)
		a[i] = output[i];
}

int get_max(int *a, int n) {
	int mx = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] > mx)
			mx = a[i];

	return mx;
}
void radix_sort(int *a, int n) {
	int mx_element = get_max(a, n);

	for (int cur = 1; cur <= mx_element; cur *= 10)
		count_sort(a, n, cur);
}
int main() {
//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	const int N = 5;
	int a[N] { 5, 1, 8 ,2,3};

	radix_sort(a, N);

	for (int i = 0; i < N; ++i)
		cout << a[i] << " ";
	return 0;

}
