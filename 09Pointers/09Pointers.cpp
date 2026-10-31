#include <iostream>
using namespace std;


// Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох 
//заданих чисел, середє арифметичне, найменше з них, користуючись
//непрямим доступом до чисел(через вказівники).
//int dobutok(int* a, int* b, int* c)
//{
//    return ((*a) * (*b) * (*c));
//}
//
//int ariphmetic(int* a, int* b, int* c)
//{
//    return (((*a) + (*b) + (*c)) / 3);
//}
//
//int min(int* a, int* b, int* c)
//{
//    if (*a < *b && *a < *c)
//        return *a;
//    else if (*b < *a && *b < *c)
//        return *b;
//    else if (*c < *a && *c < *b)
//        return *c;
//}

// Дано цілочисельний одновимірний масив. Заповнити його, 
//вивести на екран у прямому та зворотньому порядку та порахувати
//суму елементів з використанням вказівників.
//void initArray(int *array, int size)
//{
//    srand(time(0));
//    for (int i = 0; i < size; i++)
//        *(array + i) = rand() % 20;
//}
//
//void showArray(int* array, int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << *(array + i) << " ";
//}
//
//void reverseArray(int* array, int size)
//{
//    int* lastptr = &array[size - 1];
//    for (int i = 0; i < size; i++)
//        cout << *(lastptr - i) << " ";
//}
//
//void suma(int* array, int size)
//{
//    int suma = 0;
//    for (int i = 0; i < size; i++)
//        suma += *(array + i);
//    cout << "Suma of all numbers: " << suma;
//}

int main()
{
    // Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох 
    //заданих чисел, середє арифметичне, найменше з них, користуючись
    //непрямим доступом до чисел(через вказівники).
    //int a = 5, b = 7, c = 2;
    //int* pa = &a, * pb = &b, * pc = &c;
    //cout << "a = " << a << endl;
    //cout << "address a = " << pa << endl;
    //cout << endl;
    //cout << "b = " << b << endl;
    //cout << "address b = " << pb << endl;
    //cout << endl;
    //cout << "c = " << c << endl;
    //cout << "address c = " << pc << endl;
    //cout << endl;
    //cout << "Dobutok: " << dobutok(pa, pb, pc) << endl;
    //cout << "Ariphmetic: " << ariphmetic(pa, pb, pc) << endl;
    //cout << "Min: " << min(pa, pb, pc) << endl;

    // Дано цілочисельний одновимірний масив. Заповнити його, 
    //вивести на екран у прямому та зворотньому порядку та порахувати
    //суму елементів з використанням вказівників.
    //const int size = 10;
    //int array[size];
    //initArray(array, size);
    //showArray(array, size);
    //cout << endl;
    //reverseArray(array, size);
    //cout << endl;
    //suma(array, size);


    return 0;
}