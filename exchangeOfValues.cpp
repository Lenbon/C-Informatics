#include <iostream>
using namespace std;
/*
Задача №2949. Обмен значений
Напишите программу, которая считывает значения двух целочисленных переменных a и b, затем меняет их значения местами (то есть в переменной a должно быть записано то, что раньше хранилось в b, а в переменной b записано то, что раньше хранилось в a). Затем выведите значения переменных.

Входные данные
Вводятся целые числа a и b.

Выходные данные
Выведите ответ на задачу.

Примечание
Решением задачи не является такой код:

a = input ()
b = input ()
print (b, a)
То есть  ваша программа должна иметь примерно такой вид:
a = input ()
b = input ()
# Допишите сюда
# свой код
print (a, b) 
 
Примеры
входные данные
8
5
выходные данные
5 8

int a,b,tmp;
cin>>a>>b;
tmp=a;
a=b;
b=tmp;

cout<<a<<' '<<b;
*/
int main()
{

int a, b, temp;
cin >> a >> b;
temp = a; // sohraniaem peremennuju a w znachenii temp
a = b; // a priswaewaem znachenie b

b = temp; // b priswaem znachenie preznee a, kotoroe sohraniaetsia w temp

cout << a << ' ' << b;

return (0);
}