#include <cstdio>
#include "Simple_obj.h"

int main(int argc, char** argv)
{
	printf("Hello	\n");
	Simple_obj obj1;
	Simple_obj obj3 = Simple_obj();
	printf("nbvals:\nobj1:%d\nobj3:%d\n",obj1.get_nb(),obj3.get_nb());
	Simple_obj* objDyn = new Simple_obj;
	printf("objDyn:%d\n",(*objDyn).get_nb());
}