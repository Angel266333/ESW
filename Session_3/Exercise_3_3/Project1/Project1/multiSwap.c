int sumUpToPower(int base, int exp) {
	int result = 1;
	if (exp == 0) {
		return 1;
	} while (exp > 0) {
		result *= base;
		exp--;
	}
	return result;
}

void multiSwap(int* x, int* y, int* z) {
	// The C Programming language / Exercise 2-5 / any (51, 52)
	int tempX;
	tempX = *x;

	int tempY;
	tempY = *y;

	int tempZ;
	tempZ = *z;


	*x = tempY;
	*y = tempZ;
	*z = tempX;

}