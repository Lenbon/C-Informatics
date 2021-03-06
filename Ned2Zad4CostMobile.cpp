
#include <iostream>
#include <tgmath.h>


using namespace std;

/*
Задание 4. Пользователь указывает цену одой минуты
исходящего звонка с одного мобильного оператора другому, а также продолжительность разговора в минутах
и секундах. Необходимо вычислить денежную сумму на
которую был произведен звонок.

*/

int main(){

	double price, time, cost, costSec;
	
	int min, sec, time2,time1,  rub, kop;
	
	cout << "  Введите цену одой минуты исходящего звонка " << endl;
	
	cin >> price;
	
	rub = int(price); //rubi
    
	kop = (price - rub)*100; //kopejki
	
	cout << "  Введите продолжительность разговора в минутах и секундах (min.sec) " << endl;
	
	cin >> time;
	
		min = int(time) * 60; // minuty

        sec = (time - int(time))*100; // sekundy
	
    	time2 = min + sec;  // wremia minuty + sekundy
	
//	cout << time2 << endl;
	
	costSec = price/60; // cena za minutu
	
//	cout << costSec;
	
	cost = costSec * time2; // cena za minutu * na wremia w sekundah
	
	cout << " Время разговора: " << min / 60 << " мин " << sec << " сек " << " Стоимость " << int(cost)  << " руб " << kop << " коп " << endl;  // do skolki znakow okrugliaet?

	cin.get();
	

	 return 0;

}
