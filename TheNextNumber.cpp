
#include "iostream"
using namespace std;
/*
������ �2937. ��������� � ����������
�������� ���������, ������� ��������� ����� ����� � ������� �����, ����������� ������������ � �������. �������, ����� ����������, ��������� � �������� ����� �����!

<����������. �� 01 ����� 2019 �. ������ ������ ����� �� ����� �������.>
������� ������
�������� ����� �����, �� ������ �� ������������� 10000.

�������� ������
�������� ������� ����� "The next number for the number ", ����� ��������� �����, ����� ����� " is ", ���������� ���������, ����� ������� ��� ���������� �� ��������� �����, �������, ���� ����� ��� �������. ���������� � ��������� ������ ��� ����������� �����. ��� ������������� ����������� �������� ������ sep � ����� Python.

�������
������� ������
179
�������� ������
The next number for the number 179 is 180.
The previous number for the number 179 is 178.
*/

 
int main(){
     int a;
     cin >>a;
 
 cout<<"The next number for the number " << a << " is " <<  a + 1 << "." << endl;
 cout<<"The previous number for the number " << a << " is " <<  a - 1 << "." << endl;

    return(0);
}
