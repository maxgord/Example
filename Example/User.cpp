#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

struct User {//������� ��������� � ������ User
    string log;
    string Name;// ������� ������ ���������� ���� string
    int age;// ������� ������ ���������� ���� int
    string pas;
    void WhoI() {//������� ������� � ������ WhoI
        cout << "����� ���������� " << Name << endl;// ������� ���������� � ����� endl ��������� enter
    }
};