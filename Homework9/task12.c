void change_max_min(int size, int a[]) {
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] < a[min_idx]) {
            min_idx = i;
        }
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
    }
    if (min_idx != max_idx) {
        int temp = a[min_idx];
        a[min_idx] = a[max_idx];
        a[max_idx] = temp;
    }
}
