
#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

class calc {// ������� ����� calc
    int a, b, c, z;// ������� ������ ���������� ���� int
    float sa;// ������� ������ ���������� ���� float
    //�.� �� �� ������� ���������� ���������� �� �������� �� ��� ������ �� ��������

public:
    //� ������� public: ������ ������� ���������, �� ���� ��������� �� ������ ����� � ����
    void Summ() {
        printf("������� ����� ������ 2 ���������\n");
        cin >> a >> b;//�������� � ������ � ���������� ����� ��������� � ������� ����� ������
        cout << a << "+" << b << "=" << a + b << endl; //������� � ���������
    }
    void delsost() {
        printf("������� 2-�� ������� �����\n");
        cin >> a;
        //� ������� % �� ���������� ������ ������� �� �������!!
        cout << a % 10 << a / 10 << endl;

       // char a;
       // cin >> a;
       //
       //
       // switch (a)
       // {
       // case '0':
       //     printf("AAAAAAAA");
       //     break;
       //
       //
       // default:
       //     break;
       // }

    }
    void dnd() {
        int day, month, year; // ����, �����, ���
        int c, y; // �������� � ��� � ��������
        int m; // ����� �� �������������� ���������
        int d; // ���� ������ puts("������������� ��� ������ �� ����");
        puts("������� ����: ���� ����� ���.");
        puts("��������, 5 12 2001");
        printf("->");
        cin >> day>> month >> year;
        m = month;
        if (month == 1 || month == 12) // ������ � ������� ��������� //� ����������� ����
        m = month - 2; // ��� ���������� � ����� 
        if (m <= 0) m += 12; //II ��� ������ � �������
        // ����� m - ����� ������ �� �������� ��������� 
        
        c = year / 100;
        y = year - c*100;
        d = (day + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c + 777) % 7;
        //(d + (	1/5	(13 m - 1) ) +Y + (	Y/4	+	c/ 4	- 2 c	+ 777 )	mod	7
        switch (d) {
        case 6: puts("�����������"); break;
        case 7: puts("�������"); break;
        case 1: puts("�����"); break;
        case 2: puts("�������"); break;
        case 3: puts("�������"); break;
        case 4: puts("�������"); break;
        case 5: puts("�����������");
        }
    }
};