#include"Book.h"
#include"Library.h"
#include<ctime>
#include<time.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	/*time_t now_time = time(0);
	struct tm tt;
	while (1)
	{
		now_time = time(0);
		localtime_s(&tt, &now_time);
		cout<<tt.tm_hour << "-" << tt.tm_min << "-" << tt.tm_sec;
		cout << "\r";
		Sleep(1000);
	}
	*/
	Library aa;
	aa.Show_allbook();
	aa.Findacurate();
	aa.Show_allbook();
	aa.Save();

	system("pause");
	return 0;
}