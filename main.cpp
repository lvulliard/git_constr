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

	int* tab = new int [2];
	tab[0] = 1;
	tab[1] = 2;
	Simple_obj obj2 = (Simple_obj(2, tab));
	printf("obj2:%d %d %d\n",obj2.get_nb(),obj2.get_val(0),obj2.get_val(1));

	obj1 = obj2;
	printf("obj1:%d %d %d\n",obj1.get_nb(),obj1.get_val(0),obj1.get_val(1));

	objDyn = &obj2;
	printf("objDyn:%d\n",(*objDyn).get_nb());

	Simple_obj obj = *(new Simple_obj());
}