#include <cstdio>
#include "simple_obj.h"

///////////////////////////////////
//       Methods definitions     //
///////////////////////////////////

int Simple_obj::get_nb()
{
	return nb_vals;
}

int Simple_obj::get_val(int n)
{
	return vals[n];
}