#include <stdio.h>

typedef struct {
	float x;
	float y;
}Jum;

void AddValueToJum(Jum j);

int main(void)
{
	Jum jum;
	jum.x = 5.0f;
	jum.y = 10.0f;
	//Call by value로 x,t 값이 바뀌지 않음
	AddValueToJum(&jum);
	printf("%.1f, %.1f\n", jum.x, jum.y);
	return 0;
}

void AddValueToJum(Jum* j)
{
	j->x += 10.0f;	//(*j).x +=10.0f
	j-> j += 15.0f;
}