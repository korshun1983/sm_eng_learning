void swap_negmax_last(int size, int a[]) {
    int max_neg_idx = -1;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            if (max_neg_idx == -1 || a[i] > a[max_neg_idx]) {
                max_neg_idx = i;
            }
        }
    }
    if (max_neg_idx != -1) {
        int temp = a[max_neg_idx];
        a[max_neg_idx] = a[size - 1];
        a[size - 1] = temp;
    }
}
