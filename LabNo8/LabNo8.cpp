// LabNo8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    char s[500];
    cin.getline(s, 500);
    //abc, abdf abdef abcde abc abdes asds asa - abc
    char word1[50];
    //abc
    cin.getline(word1, 50);
    //defk
    char word2[50];
    cin.getline(word2, 50);
    char p[500];
    strcpy(p, s);
    int np = strlen(p);
    int begword[1000];
    int begi = 0;
    int jk = 0;
    for (int i = 0; i <= np; i++) {
        if (!(isalnum(p[i]))) {
            p[i] = '\0';
            if (strcmp(&p[begi], word1) == 0) {
                begword[jk] = begi;
                jk++;
            }
            begi = i + 1;
        }
    }
    int d = strlen(word2) - strlen(word1);
    cout << endl;
    int k = 0;
    char sf[1000];
    int js = 0;
    int jp = 0;

    while (js < strlen(s)+1) {
        if (js == begword[k]) {
            for (int y = 0; y < strlen(word2); y++) {
                sf[jp + y] = word2[y];
            }
            jp = jp + strlen(word2);
            js = jp - d*(k+1);
            k++;
        }
        else {
            sf[jp] = s[js];
            js++;
            jp++;
        }
    }
    
    cout << sf << endl;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
