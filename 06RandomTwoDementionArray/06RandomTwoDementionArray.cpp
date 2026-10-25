#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    srand(time(0));


    // Дано масив розміром 4×3 з елементами цілого типу. Визначити кількість елементів відмінних від нуля.
    // const int rows = 3;
    // const int cols = 4;
    // int array[rows][cols]{};
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         array[i][j] = rand() % 40 - 20;
    //         cout << setw(5) << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int negative = 0;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         if (array[i][j] < 0)
    //             negative++;
    //     }
    // }
    // cout << endl;
    // cout << "Count of negative numbers: " << negative << endl;

    // Дано масив розміром 3×3 з елементами цілого типу. Визначити кількість елементів які б дорівнювали нулю.
    //const int rows = 3;
    //const int cols = 3;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int zero = 0;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] == 0)
    //            zero++;
    //    }
    //}
    //cout << endl;
    //cout << "Count of zero number: " << zero << endl;

    // Дано масив розміром 7×3 з елементами цілого типу. Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)
    //const int rows = 3;
    //const int cols = 7;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] < 0){
    //            array[i][j] = array[i][j] * -1;
    //            if (array[i][j] < 12 and array[i][j] > 0)
    //                count++;
    //        }
    //        else {
    //            if (array[i][j] < 12 and array[i][j] > 0)
    //                count++;
    //        }
    //    }
    //}
    //cout << endl;
    //cout << "Count of numbers that are smaller than 12: " << count << endl;

    // Дано масив розміром 4×5 з елементами цілого типу (позитивні та від’ємні). Визначити кількість позитивних елементів.
    //const int rows = 4;
    //const int cols = 5;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int positive = 0;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] > 0)
    //            positive++;
    //    }
    //}
    //cout << endl;
    //cout << "Count of positive numbers: " << positive << endl;

    // Дано масив розміром 5×4 з елементами дійсного типу (додатні та від’ємні). Визначити добуток всіх додатніх елементів.
    //const int rows = 5;
    //const int cols = 4;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 20 - 10;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int dobutok = 1;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] > 0)
    //            dobutok *= array[i][j];
    //    }
    //}
    //cout << endl;
    //cout << "Dobutok of all positive numbers: " << dobutok << endl;

    // Дано масив розміром 5×4 з елементами дійсного типу (позитивні та від’ємні). Визначити добуток всіх від’ємних елементів.
    //const int rows = 5;
    //const int cols = 4;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 20 - 10;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int dobutok = 1;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] < 0)
    //            dobutok *= array[i][j];
    //    }
    //}
    //cout << endl;
    //cout << "Dobutok of all negative numbers: " << dobutok << endl;

    // Дано масив розміром 4×4 з елементами цілого типу. Визначити кількість елементів, які б при діленні на 6 давали залишок 1. 13 % 6 = 1
    //const int rows = 4;
    //const int cols = 4;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //int count = 0;
    //cout << "Numbers that by multiplying by 6 gives you a 1: ";
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] % 6 == 1) {
    //            cout << array[i][j] << " ";
    //            count++;
    //        }
    //    }
    //}
    //cout << endl;
    //cout << "Count: " << count << endl;

    // Дано масив розміром 5хб цілого типу. Знайти мінімальний елемент.
    //const int rows = 5;
    //const int cols = 6;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int min = array[0][0];
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] < min)
    //            min = array[i][j];
    //    }
    //}
    //cout << endl;
    //cout << "The smallest number: " << min << endl;

    // Дано масив розміром 5×6 цілого типу. Знайти максимальний елемент.
    //const int rows = 5;
    //const int cols = 6;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 40 - 20;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int max = array[0][0];
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] > max)
    //            max = array[i][j];
    //    }
    //}
    //cout << endl;
    //cout << "The biggest number: " << max << endl;

    // Дано масив розміром 5×4 з елементами дійсного типу (позитивні та від’ємні). Визначити суму всіх від’ємних елементів.
    //const int rows = 5;
    //const int cols = 4;
    //int array[rows][cols]{};
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        array[i][j] = rand() % 20 - 10;
    //        cout << setw(5) << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int suma = 0;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        if (array[i][j] < 0)
    //            suma += array[i][j];
    //    }
    //}
    //cout << endl;
    //cout << "Suma of all negative numbers: " << suma << endl;



    return 0;
    
}
