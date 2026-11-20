#include <iostream>
#include <cmath>

using namespace std;

// оголошення функцій

// Завдання Proc8
void AddRightDigit(int D, int &K);
void task_Proc8();

// Завдання Proc45
double LinePointDistance(double x, double y,
                         double A, double B, double C);
void task_Proc45();

// Завдання Integer15
bool inputNumber(int &N);
int calculateNumber(int N);
void outputResult(int result);
void task_Integer15();

int main()
{
    int choice;

    cout << "Лабораторна робота №4" << endl;
    cout << "1 - Proc8" << endl;
    cout << "2 - Proc45" << endl;
    cout << "3 - Integer15" << endl;

    cout << "Оберіть завдання: ";
    cin >> choice;

    if (cin.fail())
    {
        cout << "Помилка введення!" << endl;
        return 0;
    }

    switch (choice)
    {
        case 1:
            task_Proc8();
            break;

        case 2:
            task_Proc45();
            break;

        case 3:
            task_Integer15();
            break;

        default:
            cout << "Неправильний номер завдання!" << endl;
    }

    return 0;
}

// визначення функцій

// Процедура додавання цифри справа
void AddRightDigit(int D, int &K)
{
    K = K * 10 + D;
}

// Процедура виконання Proc8
void task_Proc8()
{
    int K, D1, D2;

    cout << "\nЗавдання Proc8" << endl;
    cout << "Введіть додатне число K (1-100): ";
    cin >> K;

    if (cin.fail() || K < 1 || K > 100)
    {
        cout << "Некоректне число K!" << endl;
        return;
    }

    cout << "Введіть першу цифру D1 (0-9): ";
    cin >> D1;

    if (cin.fail() || D1 < 0 || D1 > 9)
    {
        cout << "Некоректна цифра D1!" << endl;
        return;
    }

    cout << "Введіть другу цифру D2 (0-9): ";
    cin >> D2;

    if (cin.fail() || D2 < 0 || D2 > 9)
    {
        cout << "Некоректна цифра D2!" << endl;
        return;
    }

    AddRightDigit(D1, K);
    cout << "Після першого додавання: " << K << endl;

    AddRightDigit(D2, K);
    cout << "Після другого додавання: " << K << endl;
}

// Функція обчислення відстані від точки до прямої
double LinePointDistance(double x, double y,
                         double A, double B, double C)
{
    return abs(A * x + B * y + C) /
           sqrt(A * A + B * B);
}

// Процедура виконання Proc45
void task_Proc45()
{
    double x, y, A, B, C;

    cout << "\nЗавдання Proc45" << endl;

    cout << "Введіть координати точки x, y: ";
    cin >> x >> y;

    cout << "Введіть коефіцієнти прямої A, B, C: ";
    cin >> A >> B >> C;

    if (cin.fail())
    {
        cout << "Помилка введення!" << endl;
        return;
    }

    if (x < -100 || x > 100 ||
        y < -100 || y > 100 ||
        A < -100 || A > 100 ||
        B < -100 || B > 100 ||
        C < -100 || C > 100 ||
        (A == 0 && B == 0))
    {
        cout << "Некоректні вхідні дані!" << endl;
        return;
    }

    cout << "Відстань: "
         << LinePointDistance(x, y, A, B, C)
         << endl;

    cout << "\nВведіть другу точку та пряму:" << endl;
    cin >> x >> y >> A >> B >> C;

    if (cin.fail() ||
        x < -100 || x > 100 ||
        y < -100 || y > 100 ||
        A < -100 || A > 100 ||
        B < -100 || B > 100 ||
        C < -100 || C > 100 ||
        (A == 0 && B == 0))
    {
        cout << "Некоректні вхідні дані!" << endl;
        return;
    }

    cout << "Відстань: "
         << LinePointDistance(x, y, A, B, C)
         << endl;

    cout << "\nВведіть третю точку та пряму:" << endl;
    cin >> x >> y >> A >> B >> C;

    if (cin.fail() ||
        x < -100 || x > 100 ||
        y < -100 || y > 100 ||
        A < -100 || A > 100 ||
        B < -100 || B > 100 ||
        C < -100 || C > 100 ||
        (A == 0 && B == 0))
    {
        cout << "Некоректні вхідні дані!" << endl;
        return;
    }

    cout << "Відстань: "
         << LinePointDistance(x, y, A, B, C)
         << endl;
}

// Функція введення та перевірки числа
bool inputNumber(int &N)
{
    cout << "\nВведіть трицифрове число: ";
    cin >> N;

    if (cin.fail() || N < 100 || N > 999)
    {
        return false;
    }

    return true;
}

// Функція перестановки цифр сотень і десятків
int calculateNumber(int N)
{
    int a = N / 100;
    int b = (N / 10) % 10;
    int c = N % 10;

    return b * 100 + a * 10 + c;
}

// Функція виведення результату
void outputResult(int result)
{
    cout << "Результат: " << result << endl;
}

// Процедура виконання Integer15
void task_Integer15()
{
    int N;

    cout << "\nЗавдання Integer15" << endl;

    if (!inputNumber(N))
    {
        cout << "Некоректне введення! "
             << "Потрібно ввести число від 100 до 999."
             << endl;
        return;
    }

    int result = calculateNumber(N);

    outputResult(result);
}

