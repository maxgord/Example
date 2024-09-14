#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

struct User {//создаем структуру с именем User
    string log;
    string Name;// создаем пустую переменную типа string
    int age;// создаем пустую переменную типа int
    string pas;
    void WhoI() {//создаем функцию с именем WhoI
        cout << "Добро пожаловать " << Name << endl;// выводим Информацию в конце endl равняется enter
    }
};