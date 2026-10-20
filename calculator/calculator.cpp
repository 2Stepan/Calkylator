#include <iostream>
#include <windows.h>
#include <climits>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2, chose;

    while (true)
    {
        cout << "\nВведите первое число: ";
        if (!(cin >> num1))
        {
            cout << "Ошибка: Произошло переполнение введите другое число\n";
            break;
        }

        cout << "Введите второе число: ";
        if (!(cin >> num2))
        {
            cout << "Ошибка: Произошло переполнение введите другое число\n";
            break;
        }


        cout << "\nВыберите операцию:\n";
        cout << "1. Унарная\n";
        cout << "2. Арифметическая\n";
        cout << "0. Выход\n";
        cin >> chose;
		
        if (chose == 0)
        {
            break;
        }
        else if (chose == 1)
        {
            cout << "Выберите число:\n";
            cout << "1. Первое число\n";
            cout << "2. Второе число\n";
            cin >> chose;

            if (chose == 1)
            {
                cout << "Выберите операцию:\n";
                cout << "1. Инкремент (++)\n";
                cout << "2. Декремент (--)\n";
                cin >> chose;

                if (chose == 1)
                {
                    while (true)
                    {
                        cout << "\nВаше число до операции: " << num1;
                        num1++;
                        cout << "\nВаше число после операции: " << num1;

                        cout << "\nХотите продолжить? (1 - да, 2 - нет): ";
                        cin >> chose;

                        if (chose == 2)
                            break;
                    }
                }
                else if (chose == 2)
                {
                    while (true)
                    {
                        cout << "\nВаше число до операции: " << num1;
                        num1--;
                        cout << "\nВаше число после операции: " << num1;

                        cout << "\nХотите продолжить? (1 - да, 2 - нет): ";
                        cin >> chose;

                        if (chose == 2)
                            break;
                    }
                }
                else
                {
                    cout << "Вы выбрали неверную операцию!\n";
                }
            }
            else if (chose == 2)
            {
                cout << "Выберите операцию:\n";
                cout << "1. Инкремент (++)\n";
                cout << "2. Декремент (--)\n";
                cin >> chose;

                if (chose == 1)
                {
                    while (true)
                    {
                        cout << "\nВаше число до операции: " << num2;
                        num2++;
                        cout << "\nВаше число после операции: " << num2;

                        cout << "\nХотите продолжить? (1 - да, 2 - нет): ";
                        cin >> chose;

                        if (chose == 2)
                            break;
                    }
                }
                else if (chose == 2)
                {
                    while (true)
                    {
                        cout << "\nВаше число до операции: " << num2;
                        num2--;
                        cout << "\nВаше число после операции: " << num2;

                        cout << "\nХотите продолжить? (1 - да, 2 - нет): ";
                        cin >> chose;

                        if (chose == 2)
                            break;
                    }
                }
                else
                {
                    cout << "Вы выбрали неверную операцию!\n";
                }
            }
            else
            {
                cout << "Вы выбрали неверное число!\n";
            }
        }
        else if (chose == 2)
        {
            cout << "\nВыберите операцию:\n";
            cout << "1. Сложение (+)\n";
            cout << "2. Вычитание (-)\n";
            cout << "3. Умножение (*)\n";
            cout << "4. Деление (/)\n";
            cin >> chose;

            if (chose == 1)
            {
                cout << "Результат сложения: " << num1 + num2 << endl;
            }
            else if (chose == 2)
            {
                cout << "Результат вычитания: " << num1 - num2 << endl;
            }
            else if (chose == 3)
            {
                cout << "Результат умножения: " << num1 * num2 << endl;
            }
            else if (chose == 4)
            {
                if (num2 != 0)
                {
                    cout << "Результат деления: " << num1 / num2 << endl;
                }
                else
                {
                    cout << "Деление на ноль невозможно!\n";
                }
            }
            else
            {
                cout << "Вы выбрали неверную операцию!\n";
            }
        }
        else
        {
            cout << "Вы выбрали неверный пункт меню!\n";
        }
    }

    cout << "Программа завершена.\n";

    return 0;
}
