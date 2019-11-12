#include <stdlib.h>
#include <getopt.h>
#include <iostream>

using namespace std;

const char *all_options = "acflhv";
const struct option long_options[] = {
	{"create", no_argument, 0, 'c'},
	{"add", no_argument, 0, 'a'},
	{"file", no_argument, 0, 'f'},
	{"list", no_argument, 0, 'l'},
	{"help", no_argument, 0, 'h'},
	{"version", no_argument, 0, 'v'},
};

int main(int argc, char *argv[])
{
	char p;
	int c = 0, a = 0, f = 0, l = 0, h = 0, v = 0;

	int option_index = 0;

	while (true)
	{
		p = getopt_long(argc, argv, all_options,
						long_options, &option_index);

		if (p == -1)
			break;

		switch (p)
		{

		case 'a':
			if (a == 0)
			{
				cout << "Option -a (add)" << endl;
				a = 1;
			}
			break;

		case 'c':
			if (c == 0)
			{
				cout << "Option -c (create)" << endl;
				c = 1;
			}
			break;

		case 'f':
			if (f == 0)
			{
				cout << "Option -f (file)" << endl;
				f = 1;
			}
			break;

		case 'l':
			if (l == 0)
			{
				cout << "Option -l (list)" << endl;
				l = 1;
			}
			break;

		case 'h':
			if (h == 0)
			{
				cout << "Option -h (help)" << endl;
				h = 1;
			}
			break;

		case 'v':
			if (v == 0)
			{
				cout << "Option -v (version)" << endl;
				v = 1;
			}
			break;

		case '?':
			cout << "Unknown parameter" << endl;
			break;

		default:
			break;
		}
	}

	return 0;
}
