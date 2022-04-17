#include "Date.h" 
#include <iostream>

using namespace std;

int main()
{
    Triad t1, t2;
    cout << "T1 : " << endl; cin >> t1;
    cout << "T2 : " << endl; cin >> t2;

    cout << t1 << endl << t2 << endl;

	if (t1.Le(t2))
		cout << "t1 < t2" << endl;
	else if (t1.Eq(t2))
		cout << "t1 = t2" << endl;
	else
		cout << "t1 > t2" << endl;

	Date d1, d2;

	d1.Init(t1);
	d2.Init(t2);

	d1.Display();
	d2.Display();

	if (d1.Le(d2))
		cout << "d1 < d2" << endl;
	else if (d1.Eq(d2))
		cout << "d1 = d2" << endl;
	else
		cout << "d1 > d2" << endl;
}

