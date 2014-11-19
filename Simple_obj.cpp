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

Simple_obj::Simple_obj(int val, const int* vals)
{
	nb_vals = val;
	this->vals = vals;
}

/*Simple_obj::Simple_obj(const Simple_obj& old_obj)
{
	tab = new int[old_obj.nb_vals];
	memcpy(tab, old_obj.vals, old_obj_nb_vals * sizeof(*tab));

}*/

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