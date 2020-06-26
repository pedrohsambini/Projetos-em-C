#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	double dt, t, x, tf;
	
	dt= 1.0e-3; 
	 t= 0.0;
	 x= 1.0;
	tf= 2.0;
	
	while(t < tf){
		x+= dt*x;
		t+= dt;
		printf("%e #e\n", t, x);
	
	}
	return 0;
}
