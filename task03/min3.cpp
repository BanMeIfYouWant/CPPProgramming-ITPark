int min2(int num_a, int num_b);

int min3(int num_a, int num_b, int num_c) {
	int res = min2(num_a, num_b);
	return (res < num_c) ? res : num_c;
}
