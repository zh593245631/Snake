#include"snake.h"
using namespace std;

void menu()
{
	cout << "******************1. PLAY *********************" << endl;
	cout << "******************2. TOP  *********************" << endl;
	cout << "******************0. EXIT *********************" << endl;
	cout << "***********************************************" << endl;
}
void game()
{
	system("cls"); // ����
	play_game();
}

void top()
{
	cout << "top()" << endl;
}
int main()
{
	int ret = 1;

	do {
		menu();
		cin >> ret;
		switch(ret)
		{
		case 1:
			game();
			break;
		case 2:
			top();
		case 0:
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	} while (ret);
	return 0;
}