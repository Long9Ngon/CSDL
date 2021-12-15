#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int maxCrossingSum(int arr[], int l, int m, int h) {
	int sum = 0, leftsum = INT_MIN, rightsum = INT_MIN;  
	for (int i = m; i >= l; i--)  { 
		sum = sum + arr[i];
		if (sum > leftsum)   leftsum = sum;
	}
	sum = 0;
	for (int i = m+1; i <= h; i++){
	    sum = sum + arr[i];
		if (sum > rightsum)  rightsum = sum;
	}
	return leftsum + rightsum;
}
int maxSubArraySum(int arr[], int l, int h) { 
    if (l == h)	return arr[l];
	int m = (l + h)/2;
    return max(max(maxSubArraySum(arr, l, m), 
			maxSubArraySum(arr, m+1, h)),  
				maxCrossingSum(arr, l, m, h));
}
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 1; i<= n; i++) cin >> a[i];
		cout << maxSubArraySum(a, 1, n) << endl;

	}
	return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//int a[100];
//int main()
//{
//	int test;
//	cin >> test;
//	while(test--)
//	{
//		int n, max = a[0];
//		cin >> n;
//		for(int i = 1; i <= n; i++) cin >> a[i];
//		for(int i = 1; i < n; i++)
//		{
//			int s = 0;
//			for(int j = i; j <= n; j++)
//			{
//				s = s + a[j];
//				if(s > max) max = s;
//			}
//		}
//		cout << max << endl;
//	}
//}
