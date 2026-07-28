#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

/**
 * Вычисляет синус угла x (в градусах) с помощью ряда Тейлора
 * sin(x) = x - x^3/3! + x^5/5! - ... (x в радианах)
 * Точность: 0.001 (суммируем пока |член| >= 0.001)
 */
float sinus(float x) {
    // Переводим градусы в радианы
    double rad = x * PI / 180.0;
    
    double term = rad;      // первый член ряда (n=0)
    double sum = 0.0;
    int n = 1;              // счётчик для вычисления следующего члена
    
    // Суммируем члены, пока модуль текущего члена >= 0.001
    while (fabs(term) >= 0.001) {
        sum += term;
        // Вычисляем следующий член: term = -term * rad^2 / ((2n)*(2n+1))
        // где n - номер текущего члена (начиная с 1)
        term = -term * rad * rad / ((2.0 * n) * (2.0 * n + 1.0));
        n++;
    }
    
    return (float)sum;
}

int main() {
    float x;
    scanf("%f", &x);
    float result = sinus(x);
    printf("%.3f\n", result);
    return 0;
}
