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

    printf("Выбирете 1 действие \n 1:Войти \n 2:Регестрация \n 3:Сложение \n 4:Переворот 2-ух значного числа\n");

    cin >> usch;

    switch (usch)//опретор switch 
    {
    case 1://Контейнер который запускает код только после проверки switch (a) ==  1
        printf("Введите логин и пароль админа\t ");

        
        cin >> log >> pas;

        if (log == Adm.log && pas==Adm.pas) //оператор if проверяет на да нет. если да то запускает код в{}. Если нет и если нет else if(условие), то идет к else 
        {
            printf("Вы типо вошли как админ\n");
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
    }
    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

