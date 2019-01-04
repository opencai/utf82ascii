#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
using namespace std;

#include "utf82ascii.h"

int main(int argc, char* argv[])
{
	string text = u8"©Ẹa12";

	text = u8"Žluťoučký kůň";
	text = u8"naïve!!!##$";
	text = u8"tréma";
	text = u8"ʿABBĀSĀBĀD|哈哈ok123";
	text = u8"Höhle";
	text = u8"tréma";
	text = utf82ascii(text.c_str());

	return 0;
}

