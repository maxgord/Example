
#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class calc {// создаем класс calc
    int a, b, c, z;// создаем пустые переменные типа int
    float sa;// создаем пустую переменную типа float
    //т.к мы не сделали переменные публичными то изменять их вне класса не возможно

public:
    //с помошью public: делаем функцию публичной, то есть доступной из любого места в коде
    void Summ() {
        printf("Введите через пробел 2 слогаемых\n");
        cin >> a >> b;//Забираем и вводим в переменные числф написаные в консоль через пробел
        cout << a << "+" << b << "=" << a + b << endl; //выводим с подсчетом
    }

    void delsost() {
        printf("Введите 2-ух значное число\n");
        cin >> a;
        //с помошью % вы оставляете только остаток от деления!!
        cout << a % 10 << a / 10 << endl;

    }

    void mass() {
        int max{};     // максимальная длина строки - не больше 6 символов
        cin >> max;
        std::vector<int> numbers;       // массив для ввода строки

        int i{};        // счетчик введенных символов
        std::cout << "Enter numbers" << std::endl;
        while (i < max)
        {
            int a;
            std::cin >> a;
            numbers.push_back(a);    // вводим число
            i++;
        }
        // выводим массив в обратном порядке
        for (i = 1; i <= max; ++i)
        {
            std::cout << numbers[max - i] << "\t";
        }
        std::cout << std::endl;

        
    }

    void dnd() {
        int day, month, year; // день, месяц, год
        int c, y; // столетие и год в столетии
        int m; // месяц по древнеримскому календарю
        int d; // день недели puts("ХпОпределение дня недели по дате");
        puts("Введите дату: день месяц год.");
        puts("Например, 5 12 2001");
        printf("->");
        cin >> day>> month >> year;
        m = month;
        if (month == 1 || month == 12) // январь и февраль относятся //к предыдущему году
        m = month - 2; // год начинается с марта 
        if (m <= 0) m += 12; //II для января и февраля
        // здесь m - номер месяца по римскому календарю 
        
        c = year / 100;
        y = year - c*100;
        d = (day + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c + 777) % 7;
        //(d + (	1/5	(13 m - 1) ) +Y + (	Y/4	+	c/ 4	- 2 c	+ 777 )	mod	7
        switch (d) {
        case 6: puts("Понедельник"); break;
        case 7: puts("Вторник"); break;
        case 1: puts("Среда"); break;
        case 2: puts("Четверг"); break;
        case 3: puts("Пятница"); break;
        case 4: puts("Суббота"); break;
        case 5: puts("Воскресенье");
        }
    }

    void Zavtra(){
        int day, month, year, last, r;

        printf("Введите в одной строке (цифрами");
        printf("сегодняшнюю дату");
        printf("(число месяц год) -> ");
        cin >> day >> month >> year;
        last = 0;
        if (month == 2) {
            if ((year % 4) != 0 && day == 28) last = 1;
            if ((year % 4) == 0 && day == 29) last = 1;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day == 31)) last = 1;
        else if (day == 31) last = 1;
        if (last == 1)
        {
            printf("Последний день месяца!\n"); day = 1;
            if (month == 12)
            {
                month = 1; year++;
                printf("С наступающим Новым годом!\n");
            }
            else month++;

        }
        else day++;

        cout << day << "." << month << "." << year << endl;
    }
};