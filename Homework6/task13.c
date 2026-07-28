#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

/**
 * Вычисляет косинус угла x (в градусах) с помощью ряда Тейлора
 * cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ... (x в радианах)
 * Точность: 0.001 (суммируем пока |член| >= 0.001)
 */
float cosinus(float x) {
    // Переводим градусы в радианы
    double rad = x * PI / 180.0;
    
    double term = 1.0;      // первый член ряда (n=0)
    double sum = 0.0;
    int k = 0;              // индекс текущего члена (0, 1, 2, ...)
    
    // Суммируем члены, пока модуль текущего члена >= 0.001
    while (fabs(term) >= 0.001) {
        sum += term;
        // Вычисляем следующий член: term = -term * rad^2 / ((2k+1)*(2k+2))
        term = -term * rad * rad / ((2.0 * k + 1.0) * (2.0 * k + 2.0));
        k++;
    }
    
    return (float)sum;
}

int main() {
    float x;
    scanf("%f", &x);
    float result = cosinus(x);
    printf("%.3f\n", result);
    return 0;
}
