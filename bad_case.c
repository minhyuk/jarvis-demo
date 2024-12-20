#include "bad_case.h"

int test1603(int x)
{
	switch(x)
	{
	case 1:
	case 2:
		x++;
		break;
	case 3:	
		x--;
        break; /* Corrected: Unconditional break statement added */
	default:
        break; /* Corrected: Unconditional break statement added */
	}

	return x;
}

short test0902(int x, int y, short e){
   short buf[ 3 ][ 2 ] = { { 1, 2 }, { 0, 0 }, { 5, 6 } }; // Compliant with MISRA_C_2012_09_02
   buf[x][y] = e;
   return buf[x][y];
}
