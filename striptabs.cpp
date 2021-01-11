#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("test.txt");
	string data;
	if (!inFile)
	{
		cout << "Error.";
	}
	while (inFile >> data)
	{
		if (data.find('\t'))
		{
			cout << " ";
		}
		cout << data;
	}
	inFile.close();
   cout << endl;
   return 0;
}