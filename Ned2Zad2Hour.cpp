
#include <iostream>

using namespace std;

int main()

{ 
    setlocale (LC_ALL, "Russian");
    
    /*
Домашнее задание 2
Задание 1. Пользователь вводит с клавиатуры время
в секундах. Необходимо написать программу, которая
переведет введенные пользователем секунды в часы,
минуты, секунды и выводит их на экран.


Проверочные значения:
секунд = 13510
03 часа 45 минут 10 секунд

    */
    
    int  sec, hour, min, t;
    
    // 1 chas = 3600 sekund
    // 1 minuta = 60 sekund
    // 60 minut = 3600 sekund
 
    cout << " Введите значение время в секундах - t: " << endl; 
 
    cin >> t;
    
    hour = (t / 3600) % 24;    // poluchim chasy
    //cout << t << endl;
    
    min = (t/ 60 ) % 60;      // poluchim minuty
    //cout << t << endl;
    
    sec = t % 60;            // poluchim sec
    
    cout << hour << " часа "  ;
    
    cout << min << " минут "  ;
    
    cout << sec << " секунд " ;
   
    return 0;
}
