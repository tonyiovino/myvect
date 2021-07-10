int myvect_linear_search(const int v[], const int size, const int key){

	int i;

	for (i = 0; i < size; i++) {
		if (v[i] == key) {
			return i;
		}
	}

	return -1;
}
int myvect_binary_search(const int v[], const int size, const int key){

	int sx, dx, md;
	int i;

	for (i = 0; i < size && sx <= dx; i++) {
		sx = i;
		dx = size - 1;
		md = (sx + dx) / 2;

		if (v[md] == key) {
			return md + 1;
		}
		if (key < v[md]) {
			dx = md - 1;
		}
		else if (key > v[md]) {
			sx = md + 1;
		}
	}

	return -1;
}