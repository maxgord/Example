
#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

class calc {// создаем класс calc
    int a, b, c, z;// создаем пустые переменные типа int
    float sa;// создаем пустую переменную типа float
    //т.к мы не сделали переменные публичными то измен€ть их вне класса не возможно

public:
    //с помошью public: делаем функцию публичной, то есть доступной из любого места в коде
    void Summ() {
        printf("¬ведите через пробел 2 слогаемых\n");
        cin >> a >> b;//«абираем и вводим в переменные числф написаные в консоль через пробел
        cout << a << "+" << b << "=" << a + b << endl; //выводим с подсчетом
    }
    void delsost() {
        printf("¬ведите 2-ух значное число\n");
        cin >> a;
        //с помошью % вы оставл€ете только остаток от делени€!!
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
        int day, month, year; // день, мес€ц, год
        int c, y; // столетие и год в столетии
        int m; // мес€ц по древнеримскому календарю
        int d; // день недели puts("’пќпределение дн€ недели по дате");
        puts("¬ведите дату: день мес€ц год.");
        puts("Ќапример, 5 12 2001");
        printf("->");
        cin >> day>> month >> year;
        m = month;
        if (month == 1 || month == 12) // €нварь и февраль относ€тс€ //к предыдущему году
        m = month - 2; // год начинаетс€ с марта 
        if (m <= 0) m += 12; //II дл€ €нвар€ и феврал€
        // здесь m - номер мес€ца по римскому календарю 
        
        c = year / 100;
        y = year - c*100;
        d = (day + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c + 777) % 7;
        //(d + (	1/5	(13 m - 1) ) +Y + (	Y/4	+	c/ 4	- 2 c	+ 777 )	mod	7
        switch (d) {
        case 6: puts("ѕонедельник"); break;
        case 7: puts("¬торник"); break;
        case 1: puts("—реда"); break;
        case 2: puts("„етверг"); break;
        case 3: puts("ѕ€тница"); break;
        case 4: puts("—уббота"); break;
        case 5: puts("¬оскресенье");
        }
    }
};