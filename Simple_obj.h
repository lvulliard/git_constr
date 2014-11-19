#ifndef SIM_INCLUDED
#define SIM_INCLUDED
#include <cstdio>

class Simple_obj
{
public:
	Simple_obj();
	Simple_obj(int val, const int* vals);
	/*~simple_obj();*/

///////////////////////////////////
//       Methods declarations    //
///////////////////////////////////

	//GETTERS

	//Return the cardinal of our set
	int get_nb() const;

	//Return the n-th value of our set
	//n belongs to [0;nb_vals-1]
	int get_val(int n) const;

	//Return the whole table
	const int* get_vals() const;

private:

///////////////////////////////////
//     Attributes declarations   //
///////////////////////////////////

	int nb_vals;
	const int* vals;

};


#endif