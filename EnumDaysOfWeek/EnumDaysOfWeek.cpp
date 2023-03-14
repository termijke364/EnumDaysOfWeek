#include <iostream>
using namespace std;

enum DaysOfWeek{Monday =1, Tuesday, Wednsday, Thursday, Friday, Saturday, Sunday};

int ChooseDay(int choose)
{
	
	switch (choose)
	{
	case Monday:
		cout << "Понедельний/Monday" << endl;
		break;
	case Tuesday:
		cout << "Вторник/Tuesday" << endl;
		break;
	case Wednsday:
		cout << "Среда/Wednsday" << endl;
		break;
	case Thursday:
		cout << "Четверг/Thursday" << endl;
		break;
	case Friday:
		cout << "Пятница/Friday" << endl;
		break;
	case Saturday:
		cout << "Суббота/Saturday" << endl;
		break;
	case Sunday:
		cout << "Воскресенье/Sunday" << endl;
		break;
	default:
		break;
	}
	return choose;
}

int GetValue()
{
	int value;
	cin >> value;
	return value;
}


int main()
{
	setlocale(0, "");


	cout << "Введите интересующий день недели от 1 до 7: " << endl;
	int choose = GetValue();


	ChooseDay(choose);

	return 0;
}
