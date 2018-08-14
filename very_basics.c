/* How to define a new data structure */

#include <stdio.h>

/* How to define a new data structure:

struct [structure tag] {
    member definition;
    member definition;
    ...
    member definition;
} [one or more structure variables];   */

// Data structure with a tag, but without defining any new variable yet
struct point1 {
	float x, y;
};

// Data structure with a tag, defining a new variable called p2
struct point2 {
	float x, y;
} p2, p3;


void foo(void);
void bar(void);

int main(void)
{
	printf("\nFoo function:\n");
	printf("(Data structure with a tag, but without defining any new variable yet)\n");
	foo();
	printf("\nBar function:\n");
	printf("(Data structure with a tag, defining a new variable called p2)\n");
	bar();
}

void foo(void)
{
	struct point1 p1;
	p1.x = 11;
	p1.y = 22;

	printf("x1 = %f\t", p1.x);
	printf("y1 = %f\n", p1.y);
}

void bar(void)
{
	// p2 and p3 are already declared (global variables)
	p2.x = 33;
	p2.y = -44;

	printf("x2 = %f\t", p2.x);
	printf("y2 = %f\n", p2.y);

	p3.x = -33;
	p3.y = 44;

	printf("x3 = %f\t", p3.x);
	printf("y3 = %f\n", p3.y);
}
