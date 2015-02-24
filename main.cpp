#include <stdio.h>
#include <stdlib.h>

#include <string.h>

class string

{

private:

	char* string;
	int lenght;

public:

	string()
	{
		lenght = 1;
		string = new char[lenght];
		string[0] = '\0';


	}
	string(const char* c)
	{
		lenght = strlen(c) + 1;
		string = new char[lenght];
		strcpy_s(string, lenght, c);

	}

	string(const string&)
	{


	}



	~string()
	{
		delete[] string;


	}







};

main(int argc, const char** argv){



}