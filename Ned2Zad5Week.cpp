
#include <iostream>
#include <tgmath.h>


using namespace std;

/*
Задание 5. Написать программу, которая преобразует
введенное пользователем количество дней в количество
полных недель и оставшихся дней. Например, пользователь ввел 17 дней, программа должна вывести на экран
2 недели и 3 дня.

*/

int main(){
	
	int a, day, week, accountDay;
	
	cout << "  Введите количество дней " << endl;
	
	cin >> a;
	
	week = int(a/7); //nedela
	
   //	cout << week;
    
	day = a - (week*7); //day

	cout  << week << " недели " << day  << " дня " <<  endl;  

	cin.get();
	
	 return 0;
}
