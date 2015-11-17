#include <stdio.h>
#include <math.h>

double count(x, m){
	double y = sqrt(5 * pow(x, 3) - pow (x, (m-1)) + 12);
	return y;
}

int main(){
	printf ("%f\n", count(3, 4));
	printf ("Nama  : Nur Fahmi Fauziati W.\n");
	printf ("NIM   : D400150146\n");
	printf ("Kelas : E\n");
	return 0;
}
