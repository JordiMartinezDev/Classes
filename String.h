#include <stdio.h>
#include <stdlib.h>


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
		string(const char*)
		{


		}

		string(const string&)
		{


		}











};
