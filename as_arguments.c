/* Data structures as arguments in functions */

#include <stdio.h>
#include <math.h>

struct point {
	double x, y;
};

double distance(struct point p1, struct point p2);
double distance_p(struct point *p1, struct point *p2);

int main(void)
{
	double d;
	struct point p1, p2;

	p1.x = 0;
	p1.y = 2;

	p2.x = 3;
	p2.y = 6;

	printf("\nDistance using variables as arguments to a function:\n");
	d = distance(p1, p2);
	printf("distance = %f\n", d);

	printf("\nDistance using pointers as arguments to a function:\n");
	d = distance_p(&p1, &p2);
	printf("distance = %f\n", d);
}

double distance(struct point p1, struct point p2)
{
	double dx = p2.x - p1.x;
	double dy = p2.y - p1.y;

	return sqrt(dx*dx + dy*dy);
}

double distance_p(struct point *p1, struct point *p2)
{
	double dx = p2->x - p1->x;
	double dy = p2->y - p1->y;

	return sqrt(dx*dx + dy*dy);
}
