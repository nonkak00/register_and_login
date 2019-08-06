#include <iostream>
#include <string>
using namespace std;
 int main()
{

	string menu ;
	string regis1 ;
	int regis2 ;
	string user ;
	int pass ;
	do
	{
		cout << "<<MENU>>" << endl;
		cout << "1.register" << endl;
		cout << "2.login" << endl;
		cout << "3.exit" << endl;
		cout << "______________" << endl ;

		cout << "Enter Menu : ";
		cin >> menu;
		if (menu == "1")
		{
			cout << "<<<<<<<|Register|>>>>>>>>" << endl;
			cout << "Input Username : " ;
			cin >> regis1 ;
			cout << "Input Password : " ;
			cin >> regis2 ;
			cout << "<<<<<<|Successfully|>>>>>>" <<endl;
		}
		else if (menu == "2")
		{
			
			cout << "<<<<<<<<<|login|>>>>>>>>>" << endl;
			cout << "Input Username :";
			cin >> user;
			cout << "Input Password : ";
			cin >> pass;
			if (regis1 == user && regis2 == pass )
			{
				cout << "Username or Password correct"<<endl;
			}
			else if (regis1 != user && regis2 != pass)
			{
				cout << "!!Username or Password incorrect, Please try agian!!"<<endl;
			}
		}

	} while (menu != "3");


return(0);

}