#include <iostream>
using namespace std;

int main()
{
    // Дано країна.Вивести назву столиці. (5 countries) Україна - натисни 1 Польща - натисни 2 Канада - натисни 3
    //cout << "----MENU----" << endl;
    //cout << "Ukraine = 1" << endl;
    //cout << "Poland = 2" << endl;
    //cout << "Canada = 3" << endl;
    //cout << endl;
    //int menu;
    //cout << "Enter a number of a country to see their capital: "; cin >> menu;
    //if (menu == 1) {
    //    cout << "The capital of Ukraine is Kyiv." << endl;
    //}
    //else if (menu == 2) {
    //    cout << "The capital of Poland is Warszawa." << endl;
    //}
    //else if (menu == 3) {
    //    cout << "The capital of Canada is Ottawa." << endl;
    //}
    //else {
    //    cout << "Error! Wrongly entered a menu option, choose a number between 1 and 3." << endl;
    //}

    // Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.
    //int menu;
    //cout << "Enter a number of the day (1-7): "; cin >> menu;
    //if (menu > 0 and menu < 6) {
    //    cout << "Work day" << endl;
    //}
    //else if (menu >5 and menu < 8){
    //    cout << "Weekend" << endl;
    //}
    //else {
    //    cout << "Error! Wrongly entered day number!" << endl;
    //}

    // Дано курс корабля(північ, південь, захід, схід).Як зміниться курс корабля після команди «назад» ?
    //cout << "MENU" << endl;
    //cout << endl;
    //cout << "1 - East" << endl;
    //cout << "2 - West" << endl;
    //cout << "3 - South" << endl;
    //cout << "4 - North" << endl;
    //cout << endl;
    //int menu;
    //cout << "Enter a number of an option what way do you go: "; cin >> menu;
    //if (menu == 1) {
    //    cout << "If you will decide to go back you will be going west way." << endl;
    //}
    //else if (menu == 2) {
    //    cout << "If you will decide to go back you will be going east way." << endl;
    //}
    //else if (menu == 3) {
    //    cout << "If you will decide to go back you will be going north way." << endl;
    //}
    //else if (menu == 4) {
    //    cout << "If you will decide to go back you will be going south way." << endl;
    //}
    //else {
    //    cout << "Error! Wrongly entered an option." << endl;
    //}

    // Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals) Вивести клас, до якого відноситься тварина(хижак, травоїдна).
    //cout << "MENU" << endl;
    //cout << endl;
    //cout << "1 - giraffe" << endl;
    //cout << "2 - lion" << endl;
    //cout << "3 - wolf" << endl;
    //cout << "4 - elephant" << endl;
    //cout << "5 - cat" << endl;
    //cout << "6 - capibara" << endl;
    //cout << "7 - tiger" << endl;
    //cout << endl;
    //int menu;
    //cout << "Enter a menu option: "; cin >> menu;
    //if (menu == 1 or menu == 4 or menu == 6) {
    //    cout << "This animal is herbirovous." << endl;
    //}
    //else if (menu == 2 or menu == 3 or menu == 5 or menu == 7) {
    //    cout << "This animal is predatory." << endl;
    //}
    //else {
    //    cout << "Error! Wrongly entered menu option." << endl;
    //}

    // Дано два числа. Якщо вони різні, то поміняти іх місцями.
    //int num1, num2;
    //cout << "Enter first number: "; cin >> num1;
    //cout << "Enter second number: "; cin >> num2;
    //if (num1 != num2) {
    //    int copyNum1 = num1;
    //    num1 = num2;
    //    num2 = copyNum1;
    //    cout << "Number 1: " << num1 << endl;
    //    cout << "Number 2: " << num2 << endl;
    //}

    // Дано натуральне число а (а > 100 && a<999). Напишіть програму, що визначає кількість цифр в цьому числі, суму його цифр, і яка виводить на екран першу и останню цифру через два пропуски. 777 = 3 числа, сума, сума = 21
    //int num;
    //cout << "Enter a three-digit number: "; cin >> num;
    //if (num > 99 and num < 1000) {
    //    int num1, num2, num3, suma;
    //    num1 = num / 100;
    //    num2 = num / 10 % 10;
    //    num3 = num % 10;
    //    suma = num1 + num2 + num3;
    //    cout << "Your number contains three numbers, suma of all numbers: " << suma << ", first number is: " << num1 << " and the last one is: " << num3 << "." << endl;
    //}
    //else {
    //    cout << "Errors! Wrongly entered number, enter a three-digit number!" << endl;
    //}

    // Дано час(години, хвилини, секунди). Визначити чи час допустимий( наприклад, 25.61.60 – недопустимий)
    //int sec, min, hour;
    //cout << "Enter a number of hours: "; cin >> hour;
    //cout << "Enter a number of minutes: "; cin >> min;
    //cout << "Enter a number of seconds: "; cin >> sec;
    //if (hour > 0 and hour < 25 and min > -1 and min < 60 and sec > -1 and sec < 60) {
    //    cout << "Your time is: " << hour << "h " << min << "m " << sec << "s.";
    //}
    //else {
    //    cout << "Error! Wrongly entered time: hours must contain numbers from 1 to 24, minutes and seconds from 0 to 59." << endl;
    //}

    // Написати програму яка в залежності від введеної години виводить: good night, good day, good evening, good morning.
    //int num;
    //cout << "Enter a number of hours: "; cin >> num;
    //if (num > 4 and num < 13) {
    //    cout << "Good morning!" << endl;
    //}
    //else if (num > 12 and num < 16) {
    //    cout << "Good afternoon!" << endl;
    //}
    //else if (num > 15 and num < 22) {
    //    cout << "Good evening!" << endl;
    //}
    //else if (num > 21 and num < 25 or num > 0 and num < 5) {
    //    cout << "Good night!" << endl;
    //}
    //else {
    //    cout << "Error! Wrongly entered hour number, please enter the number from 0 to 24";
    //}

    // Написати програму, яка обчислює та виводить мінімум з трьох введених користувачем чисел 
    //int num1, num2, num3;
    //cout << "Enter first number: "; cin >> num1;
    //cout << "Enter second number: "; cin >> num2;
    //cout << "Enter third number: "; cin >> num3;
    //if (num1 < num2 and num1 < num3) {
    //    cout << num1 << " the smallest one." << endl;
    //}
    //else if (num2 < num1 and num2 < num3) {
    //    cout << num2 << " is the smallest one." << endl;
    //}
    //else if (num3 < num1 and num3 < num2) {
    //    cout << num3 << " is the smallest one." << endl;
    //}
    //else if (num1 == num2 and num1 < num3) {
    //    cout << num1 << " the smallest one." << endl;
    //}
    //else if (num2 == num3 and num2 < num1) {
    //    cout << num2 << " the smallest one." << endl;
    //}
    //else if (num1 == num3 and num1 < num2) {
    //    cout << num1 << " the smallest one." << endl;
    //}
    //else {
    //    cout << "All numbers are equal to each other!";
    //}
    //
    //
    //
    //
    //
    //return 0;









}