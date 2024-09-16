#include <Windows.h>
#include <string>
#include <math.h>
#include <iostream>
#include "User.cpp"
#include "MathUse.cpp"


using namespace std;




int main()// Example.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
{
    SetConsoleOutputCP(1251);//2 Строчки для нормального русского ввода вывода в консоль на win
    SetConsoleCP(1251);

    User ZERO;//Задаем экземпляра для структуры User
    calc first;//Задаем экземпляра для класса calc
    User Adm;//Задаем экземпляра для структуры User

    int usch;//Создаем пустую переменную 
    string log, pas;

    Adm.Name = "Гордов Максим";//Задем внутри переменной структуры переменную Name
    Adm.log = "Gor";
    Adm.pas = "1Gq1";


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

    cout << day <<"." << month << "." << year<<endl;

    printf("Выбирете 1 действие \n 1:Войти \n 2:Регестрация \n 3:Сложение \n 4:Переворот 2-ух значного числа\n");

    cin >> usch;

    switch (usch)//опретор switch 
    {
    case 1://Контейнер который запускает код только после проверки switch (a) ==  1
        printf("Введите логин и пароль админа\t ");

        
        cin >> log >> pas;

        if (log == Adm.log && pas==Adm.pas) //оператор if проверяет на да нет. если да то запускает код в{}. Если нет и если нет else if(условие), то идет к else 
        {
            printf("Вы вошли как админ\n");
            Adm.WhoI();
        }
        else //Если не подходит не 1 из if, else if то запускается else 
            printf("1 ошибка и ты ошибся");
        
        break;//Заканчивает исплняемый код в case

    case 2://Контейнер который запускает код только после проверки switch (a) ==  2

        printf("Введите свое ФИО\n");//выводим текст
        getline(cin, ZERO.Name);//С помошью getline забираем все строчки с пробелами то нажатия enter
        printf("Введите свой возраст\n");
        cin >> ZERO.age;//Забираем и вводим в переменную число написаное в консоль до пробела
        ZERO.WhoI();


        break;

    case 3:
        first.Summ();
        break;
    case 4:
        first.delsost();
        break;
    default:
        printf("Программы выключается");
        return 0;
        break;
    }
    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

