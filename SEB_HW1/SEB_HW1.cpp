#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include "BasicMatrixUtils.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    bool isRunning = true;
    int matrix[ROWS][COLS];
    fillMatrix(matrix);

    while (isRunning) {
        unsigned int cmdId{};

        cout << "Матрица:\n";
        printMatrix(matrix);

        cout << "\nС помощью данной программы вы можете:\n";
        cout << "1. Найти и вывести на экран количество отрицательных элементов на главной диагонали" << endl;
        cout << "2. Заменить все положительные элементы выше побочной диагонали на 0" << endl;
        cout << "0. Выйти из программы" << endl;
        cout << "\nЧтобы продолжить, введите номер интересующей вас команды: ";
        cin >> cmdId;

        if (!cin) {
            cin.clear();
            cin.ignore(10000000, '\n');
            cmdId = 10;
        }

        switch (cmdId) 
        {
            case 1:
                negativeInMatrix(matrix);
                break;
            case 2:
                positiveInNull(matrix);
                printMatrix(matrix); 
                break;
            case 0:
                isRunning = false;
                break;
            default:
                cout << "Такой команды не существует.\n";
        }

        system("cls");
    }

    return 0;
}