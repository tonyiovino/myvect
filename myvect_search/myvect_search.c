int myvect_linear_search(const int v[], const int size, const int key){

	int i;

	for (i = 0; i < size; i++) {
		if (v[i] == key) {
			return i;
		}
	}

	return -1;
}