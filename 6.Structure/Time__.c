#include<stdio.h>
struct time
{
	int hour,minute,second;
};
struct time myfun(struct time);
void main()
{
	struct time T;
	T=myfun(T);
	printf("\nTime: hour is %d ,minute is %d, second is %d",T.hour,T.minute,T.second);
}
struct time myfun(struct time T)
{
	T.hour=6;
	T.minute=0;
	T.second=0;
	return T;
}
