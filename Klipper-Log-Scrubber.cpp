#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
using namespace std;

int main()
{
	int strlength = 0;
	ifstream myfile;
	ofstream temps;
	temps.open("C:\\yourdirectory\\temps.txt");
	myfile.open("C:\\yourdirectory\\klippy.log");
	string myline;
	if (myfile.is_open()) {
		while (myfile) {
			getline(myfile, myline);
			string temp = "";
			if (myline.length() > 200)
			{
				for (int i = myline.length() - 15; i < myline.length() - 10; i++)
				{
					temp += myline[i];
				}
				cout << temp + "\n";
				temps << temp << endl;
			}
		}
		myfile.close();
		temps.close();
	}
	else {
		cout << "Couldn't open file\n";
	}
	return 0;
}
