#include <iostream>
using namespace std;

int main()
{
    // Вивести на екран цілі числа від 14 до 123. - while
    //int i = 14;
    //while (i < 124) {
    //    cout << i << endl;
    //    i++;
    //}

    // Вивести на екран додатні непарні числа, які не перевищують 100. - while
    //int i = 0;
    //while (i < 101) {
    //    if (i % 2 != 0) {
    //        cout << i << endl;

    //    }
    //    i++;

    //}

    // Дано N (N>0). Вводяться N чисел. Знайти кількість від’ємних серед них. - while
    //int i = 0;
    //int count = 0;
    //int repeat;
    //cout << "Enter a count of numbers you want to enter: "; cin >> repeat;
    //while (i < repeat) {
    //    int num;
    //    cout << "Enter your number: "; cin >> num;
    //    if (num < 0) {
    //        count++;
    //    }
    //    i++;
    //}
    //cout << "A count of negative numbers in your list is: " << count << endl;

    // Вводяться 8 чисел. Знайти добуток та середнє арифметичне цих чисел. - while
    // int dobutok = 1;
    // int suma = 0;
    // int i = 0;
    // int ariphmetic;
    // while (i < 8){
    //     int num;
    //     cout << "Enter your number: "; cin >> num;
    //     dobutok *= num;
    //     suma += num;
    //     i ++;
    // }
    // ariphmetic = suma / 8;
    // cout << "The ariphmetic of all numbers is: " << ariphmetic << endl;
    // cout << "The dobutok of all numbers is: " << dobutok << endl;

    // Вивести на екран цілі непарні  числа : 100 98 96 94...4  2 1. - do..while
    //int i = 100;
    //do
    //{
    //    if (i % 2 != 0) {
    //        cout << i << endl;
    //    }
    //    i--;
    //} while (i > 0);

    // Напишіть програму знаходження суми чисел менше 50 і кратних 4, використовуючи всі два типи циклів.

    // while

    // int i = 0;
    // int suma = 0;
    // while (i < 50) {
    //     if (i % 4 == 0) {
    //         suma += i;

    //     }
    //     i++;
    // }
    // cout << "Suma of all numbers that are multiple by 4 is: " << suma << endl;

    // do while

    // int i = 0;
    // int suma = 0;
    // do
    // {
    //     if (i % 4 == 0) {
    //         suma += i;
    //     }
    //     i++;
    // } while (i < 50);
    // cout << "Suma of all numbers that are multiple by 4 is: " << suma << endl;

    // Вивести на екран усі числа від нуля до введеного користувачем числа.
    //int i = 0;
    //int num;
    //cout << "Enter your number: "; cin >> num;
    //while (i < num) {
    //    cout << i << endl;
    //    i++;
    //}

    // Користувач вводить дві межі діапазону, вивести на екран усі числа з цього діапазону.Передбачити, щоб користувач міг вводити межі діапазону в довільному порядку, вивести всі парні числа з діапазону, вивести всі непарні числа з діапазону, вивести всі числа, кратні семи.
    //int num1, num2;
    //cout << "Enter your first number: "; cin >> num1;
    //cout << "Enter your second number: "; cin >> num2;
    //int start;
    //if (num1 > num2) {
    //    start = num2;
    //}
    //else if (num1 < num2) {
    //    start = num1;
    //}
    //if (num1 > num2) {
    //    int num2 = start;
    //    cout << "All numbers:" << endl;
    //    while (num1 >= num2) {
    //        cout << num2 << endl;
    //        num2++;
    //    }
    //    cout << endl;
    //    num2 = start;
    //    cout << "Even numbers:" << endl;
    //    while (num1 >= num2) {
    //        if (num2 % 2 == 0) {
    //            cout << num2 << endl;
    //        }
    //        num2++;
    //    }
    //    cout << endl;
    //    num2 = start;
    //    cout << "Odd numbers:" << endl;
    //    while (num1 >= num2) {
    //        if (num2 % 2 != 0) {
    //            cout << num2 << endl;
    //        }
    //        num2++;
    //    }
    //    cout << endl;
    //    num2 = start;
    //    cout << "Multiple by 7:" << endl;
    //    while (num1 >= num2) {
    //        if (num2 % 7 == 0) {
    //            cout << num2 << endl;
    //        }
    //        num2++;
    //    }
    //}
    //else if (num1 < num2) {
    //    int num1 = start;
    //    cout << "All numbers:" << endl;
    //    while (num1 < num2) {
    //        cout << num1 << endl;
    //        num1++;
    //    }
    //    cout << endl;
    //    num1 = start;
    //    cout << "Even numbers:" << endl;
    //    while (num1 <= num2) {
    //        if (num1 % 2 == 0) {
    //            cout << num1 << endl;
    //        }
    //        num1++;
    //    }
    //    cout << endl;
    //    num1 = start;
    //    cout << "Odd numbers:" << endl;
    //    while (num1 <= num2) {
    //        if (num1 % 2 != 0) {
    //            cout << num1 << endl;
    //        }
    //        num1++;
    //    }
    //    cout << endl;
    //    num1 = start;
    //    cout << "Multiple by 7:" << endl;
    //    while (num1 <= num2) {
    //        if (num1 % 7 == 0) {
    //            cout << num1 << endl;
    //        }
    //        num1++;
    //    }
    //}
    //else {
    //    cout << "Error! Enter different numbers!" << endl;
    //}

    // Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону.
    //int num1, num2, suma = 0;
    //cout << "Enter your number: "; cin >> num1;
    //cout << "Enter your number: "; cin >> num2;
    //if (num1 > num2) {
    //    while (num1 >= num2) {
    //       suma += num2;
    //       num2++;
    //   }
    //}
    //else if (num1 < num2) {
    //    while (num1 <= num2) {
    //        suma += num1;
    //        num1++;
    //    }
    //}
    //else {
    //   cout << "Error! Enter different numbers!" << endl;
    //}
    //cout << "A suma of all numbers is: " << suma << endl;
    
    // Користувач з клавіатури вводить числа. Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.
    // int num, suma = 0;
    // do
    // {
    //     cout << "Enter your number: "; cin >> num;
    //     suma += num;
    // } while (num!=0);
    // cout << "Suma of all numbers: " << suma << endl;




    return 0;
}
