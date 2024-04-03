#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float xa;
	int n;
	float Fx, Fy;
	float x, y;
	int m;
	float M;
	float H, V, N;
	float epsi;
	
	printf("The number of forces is: ");
	scanf("%d", &n);
	
	printf("The abscis of A is: ");
	scanf("%f", &xa);
	
	
	for(int i=0; i<n; i++){
		scanf("%f %f %f %f", &Fx, &Fy, &x, &y);
		H -= Fx;
		V = V + (x-xa) * Fy - y * Fx;
		N = N + y * Fx - x* Fy;
		epsi += Fy;
	}
	
	printf("The number of moments: ");
	scanf("%d", &m);
	
	for(int i = 0; i < m; i++) {
		scanf ("%f", &M);
		V += M;
		N -= M;
	}
	
	V = V / xa;
	N = N / xa;
	epsi = epsi + V + N;
	
	printf("%f\n", H);
	printf("%f\n", V);
	printf("%f\n", N);
	printf("%f\n", epsi);
}
