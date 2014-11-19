#include <cstdio>
#include "Simple_obj.h"

///////////////////////////////////
//       Methods definitions     //
///////////////////////////////////
Simple_obj::Simple_obj()
{
	nb_vals = 0;
	vals = NULL;
}


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