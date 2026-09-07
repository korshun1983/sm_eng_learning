#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    int x;
    while (scanf("%d", &x) == 1 && x != 0) {
        arr[n++] = x;
    }

    if (n == 0) {
        // нет данных — не должно быть по условию
        return 0;
    }

    int min = arr[0], max = arr[0];
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    // Перебираем три возможных диапазона [M, N]
    // 1) M = min, N = max (пропуск внутри)
    // 2) M = min - 1, N = max (пропуск в начале)
    // 3) M = min, N = max + 1 (пропуск в конце)

    int candidates_M[3], candidates_N[3];
    candidates_M[0] = min;    candidates_N[0] = max;
    candidates_M[1] = min - 1; candidates_N[1] = max;
    candidates_M[2] = min;    candidates_N[2] = max + 1;

    for (int k = 0; k < 3; k++) {
        int M = candidates_M[k];
        int N = candidates_N[k];
        if (M < 1 || N > 1000 || M >= N) continue;

        long long expected_sum = (long long)(M + N) * (N - M + 1) / 2;
        long long missing = expected_sum - sum;

        if (missing < M || missing > N) continue;

        // Проверяем, что missing действительно отсутствует во вводе
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == missing) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%lld\n", missing);
            return 0;
        }
    }

    // Если не нашли (по условию не должно случиться)
    return 0;
}
