
#include <iostream>

using namespace std;

int main()

{ 
    setlocale (LC_ALL, "Russian");

    /*
    Заданы три сопротивлении R1, R2, R3. 
	Вычислить значение сопротивления R0 по формуле:
	1/R0 = 1/R1+1/R2+1/R3.
Контрольный пример: R1=2, R2=4, R3=8, R0=1.142857.
    */
    
    float R1, R2,R3,R0, a ;
	
    cout << " Введите значение R1 " << endl;
	
    cin >> R1;
	
    cout << " Введите значение R2 " << endl;
	
    cin >> R2;
	
    cout << " Введите значение R3 " << endl;
	
    cin >> R3;
	
    a =  1/R1+1/R2+1/R3;
    
    R0 = 1/a;
	
    cout << "Значение R0:" << R0 << endl;
    

    return 0;
}
