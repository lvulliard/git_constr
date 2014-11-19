#ifndef SIM_INCLUDED
#define SIM_INCLUDED
#include <cstdio>

class Simple_obj
{
public:
	/*simple_obj(arguments);
	~simple_obj();*/

///////////////////////////////////
//       Methods declarations    //
///////////////////////////////////

	//Return the cardinal of our set
	int get_nb();

	//Return the n-th value of our set
	//n belongs to [0;nb_vals-1]
	int get_val(int n);

private:

///////////////////////////////////
//     Attributes declarations   //
///////////////////////////////////

	int nb_vals;
	int* vals;

};


#endif