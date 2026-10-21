#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES


int zad1();
int zad2();
int zad3();
int main(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    zad1();
    zad2();
    zad3();
    return 0;
}

int zad1()
{
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    int remainder = year % 4;
    if ((remainder == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Год %d високосный\n", year);
    }
    else
    {
        printf("Год %d не високосный\n", year);
    }
    return 0;
}

int zad2()
{
    double x, F;
    printf("Введите x: ");
    scanf("%lf", &x);
    F = (x <= 7) ? (-3 * x + 9) : (1.0 / (x - 7));
    printf("F(x) = %.2f\n", F);
    return 0;
}

int zad3()
{
    double X;
    printf("Введите число X (X >= 0): ");
    scanf("%lf", &X);

    if (X < 0)
    {
        printf("Число должно быть неотрицательным.\n");
        return 0;
    }

    double kv = X * X;
    double kor = sqrt(X);
    double a = kv, b = kor, c = X;
    double z;

    if (a < b)
    {
        z = a;
        a = b;
        b = z;
    }

    if (b < c)
    {
        z = b;
        b = c;
        c = z;
    }

    if (a < b)
    {
        z = a;
        a = b;
        b = z;
    }

    printf("В порядке убывания: %.2f, %.2f, %.2f\n", a, b, c);

    return 0;

}