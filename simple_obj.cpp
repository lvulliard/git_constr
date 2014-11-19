#include <cstdio>
#include "simple_obj.h"

///////////////////////////////////
//       Methods definitions     //
///////////////////////////////////

int Simple_obj::get_nb() const
{
	return nb_vals;
}

int Simple_obj::get_val(int n) const
{
	if((n>=0)&&(n<nb_vals))
		return vals[n];
	else
		return 0;
}

const int* Simple_obj::get_vals() const
{
	return vals;
}