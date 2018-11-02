int mySqrt(int x) {
	if(x == 0) return 0;
	int head = 1;
	int tail = x;
	int ans = 0;
	while (head <= tail) {
		int mid = head + (tail - head)/2;
		if(mid <= x/mid) {
			head = mid +1;
			ans = mid;
		}
		else {
			tail = mid -1;
		}
	}
	return ans;
}

