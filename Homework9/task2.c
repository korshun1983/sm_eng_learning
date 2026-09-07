void sort_even_odd(int n, int a[]) {
    int *temp = (int*)malloc(n * sizeof(int));
    if (temp == NULL) return;
    int idx = 0;
    // сначала чётные в исходном порядке
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) temp[idx++] = a[i];
    }
    // затем нечётные в исходном порядке
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) temp[idx++] = a[i];
    }
    // копируем обратно в исходный массив
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    free(temp);
}
