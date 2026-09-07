int count_bigger_abs(int n, int a[]) {
    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int abs_val = a[i] < 0 ? -a[i] : a[i];
        if (abs_val > max_val) {
            count++;
        }
    }
    return count;
}
