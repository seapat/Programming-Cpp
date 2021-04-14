unsigned long recursive(unsigned long n) {
	if (n < 10) {
		return n;
	}
	return n % 10 + recursive(n / 10);
}
