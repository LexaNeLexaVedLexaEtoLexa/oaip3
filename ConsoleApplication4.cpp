// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int** massive = new int *[4];
	massive[0] = new int[1];
	massive[1] = new int[1];
	massive[2] = new int[4];
	massive[3] = new int[1];
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = 1 + rand() % 10;
            cout << arr[i][j];
            cout << " ";
        }
    }

    cout << endl;

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = 1 + rand() % 10;
            cout << arr[i][j];
            cout << " ";
        }
    }
    cout << endl;

    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = 1 + rand() % 10;
            cout << arr[i][j];
            cout << " ";
        }
    }
    cout << endl;

    for (int i = 3; i < 4; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            arr[i][j] = 1 + rand() % 10;
            cout << arr[i][j];
            cout << " ";
        }
    }
    cout << endl;

    cin >> a;

    return 0;
}

