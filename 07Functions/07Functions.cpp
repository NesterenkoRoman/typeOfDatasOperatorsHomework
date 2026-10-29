#include <iostream>+
using namespace std;


// Написати функцію, що виводить на екран прямокутник з висотою N і шириною K.
//void Rectangular(int width, int height, char symbol)
//{
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            cout << symbol << " ";
//        }
//        cout << endl;
//    }
//}

// Написати функцію, яка обчислює факторіал переданого їй числа. 5!= 1 * 2 * 3 * 4 * 5
//int Factorial(int num)
//{
//    int factorial = 1;
//    for (int i = 1; i <= num; i++) {
//        factorial *= i;
//    }
//    return factorial;
//}

// Написати функцію, яка перевіряє, чи є передане їй число простим.Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.
//int prime(int num, int count)
//{
//    for (int i = 1; i <= num + 1; i++) {
//        if (num % i == 0)
//            count++;
//    }
//    return (count > 2) ? false : true;
//}

// Написати функцію, що визначає мінімум і максимум (значення й номер) елементів переданого їй масиву.
//void ArrayMinMax(int array[], const int size)
//{
//    srand(time(0));
//    for (int i = 0; i < size; i++) {
//        array[i] = rand() % 40 - 20;
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    int max = array[0];
//    int min = array[0];
//    for (int i = 0; i < size; i++) {
//        if (array[i] > max)
//            max = array[i];
//    }
//    for (int i = 0; i < size; i++) {
//        if (array[i] < min)
//            min = array[i];
//    }
//    cout << "Maximum: " << max << endl;
//    cout << "Minimum: " << min << endl;
//}

// Написати функцію, яка повертає куб числа
//int cube(int num)
//{
//    return pow(num, 3);
//}

// Написати функцію, яка повертає істину, якщо передане значення додатне, та брехню, якщо від’ємне.
//int analyze(int num)
//{
//    return (num > 0) ? true : false;
//}

// Написати функцію, яка приймає дві дати (тобто функція приймає шість параметрів) та обчислює різницю в днях між цими датами.Для виконання цього завдання необхідно також написати функцію, яка визна - чає, чи є рік високосним.
//int leapYear(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 and year % 100 != 0))
//        return 1;
//    else 
//        return 0;
//}
//
//int daysInMonth(int month)
//{
//    int days = 0;
//    int daysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    for (int i = 0; i < month - 1; i++) {
//        days += daysInMonth[i];
//    }
//    return days;
//}
//
//int analyzeDates(int day, int month, int year)
//{
//    int days = daysInMonth(month) + day;
//    for (int i = 0; i < year;i++)
//        days += 365 + leapYear(i);
//    if (leapYear(year) and month > 2)
//        days++;
//    return days;
//}
//
//void difference(int fday, int fmonth, int fyear, int sday, int smonth, int syear)
//{
//    int fDays = analyzeDates(fday, fmonth, fyear);
//    int sDays = analyzeDates(sday, smonth, syear);
//    if (fDays > sDays)
//        cout << "The difference between those dates are: " << fDays - sDays << " days." << endl;
//    else if (fDays < sDays)
//        cout << "The difference between those dates are: " << sDays - fDays << " days." << endl;
//    else
//        cout << "Enter different datas!" << endl;
//}

// Написати функцію, що визначає середнє арифметичне елементів переданого їй масиву.
//void ariphmetic()
//{
//    int suma = 0;
//    const int size = 6;
//    int array[size]{};
//    for (int i = 0; i < size; i++) {
//        cout << "Enter your number: "; cin >> array[i];
//        suma += array[i];
//    }
//    int ariphmetic;
//    ariphmetic = suma / size;
//    cout << "An ariphmetic your numbers is: " << ariphmetic << endl;
//}

// Написати функцію, що визначає кількість додатних, від'ємних і нульових елементів переданого їй масиву.
//void count(int array[], const int size)
//{
//    int negative = 0;
//    int positive = 0;
//    int zeroes = 0;
//    for (int i = 0; i < size; i++) {
//        cout << "Enter your number: "; cin >> array[i];
//        if (array[i] > 0)
//            positive++;
//        else if (array[i] < 0)
//            negative++;
//        else
//            zeroes++;
//    }
//    cout << "In your list of numbers: " << negative << " negative, " << positive << " positive and " << zeroes << " zeroes." << endl;
//}




int main()
{

    // Написати функцію, що виводить на екран прямокутник з висотою N і шириною K.
    //int width, height;
    //char symbol;
    //cout << "Enter a width of a rectangular: "; cin >> width;
    //cout << "Enter a height of a rectangular: "; cin >> height;
    //cout << "Enter a symbol that rectangular will be draw with: "; cin >> symbol;
    //cout << endl;
    //Rectangular(width, height, symbol);


    // Написати функцію, яка обчислює факторіал переданого їй числа. 5!= 1 * 2 * 3 * 4 * 5
    //int num;
    //cout << "Enter a number: "; cin >> num;
    //cout << "A factorial of number " << num << " is " << Factorial(num) << endl;

    // Написати функцію, яка перевіряє, чи є передане їй число простим.Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.
    //int num;
    //cout << "Enter your number: "; cin >> num;
    //int count = 0;
    //if (prime(num, count))
    //    cout << "Prime" << endl;
    //else
    //    cout << "Composite" << endl;

    // Написати функцію, що визначає мінімум і максимум (значення й номер) елементів переданого їй масиву.
    //const int size = 10;
    //int array[size]{};
    //ArrayMinMax(array, size);

    // Написати функцію, яка повертає куб числа
    //int num;
    //cout << "Enter your number: "; cin >> num;
    //cout << "Cube of number " << num << " is " << cube(num) << endl;

    // Написати функцію, яка повертає істину, якщо передане значення додатне, та брехню, якщо від’ємне.
    //int num;
    //cout << "Enter your number: "; cin >> num;
    //if (analyze(num) == true)
    //    cout << "Your number is positive." << endl;
    //else
    //    cout << "Your number is negative." << endl;

    // Написати функцію, яка приймає дві дати (тобто функція приймає шість параметрів) та обчислює різницю в днях між цими датами.Для виконання цього завдання необхідно також написати функцію, яка визначає, чи є рік високосним.
    //int fday, fmonth, fyear, sday, smonth, syear;
    //cout << "Enter a day of first date: "; cin >> fday;
    //cout << "Enter a month of first date: "; cin >> fmonth;
    //cout << "Enter a year of first date: "; cin >> fyear;
    //cout << endl;
    //cout << "Enter a day of second date: "; cin >> sday;
    //cout << "Enter a month of second date: "; cin >> smonth;
    //cout << "Enter a year of second date: "; cin >> syear;
    //cout << endl;
    //difference(fday, fmonth, fyear, sday, smonth, syear);

    // Написати функцію, що визначає середнє арифметичне елементів переданого їй масиву.
    //ariphmetic();

    // Написати функцію, що визначає кількість додатних, від'ємних і нульових елементів переданого їй масиву.
    //const int size = 6;
    //int array[size]{};
    //count(array, size);
        

    return 0;



}