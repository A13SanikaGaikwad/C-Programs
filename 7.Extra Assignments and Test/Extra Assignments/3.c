/*3
  create a structure time with data members as hr,min,sec.accept the values of all these members from user and display them.
  also perform addition of two time variables and display the result.if sec goes beyond 60,carrry it to min etc.add a method 
  to convert the given time into sec.
*/

#include<stdio.h>
struct time
{
	int hr;
	int min;
	int sec;	
};
void accept();
struct time addition_t1_t2();
void convert(struct time);
void main()
{
	struct time t;
	accept();
	t=addition_t1_t2();
	convert(t);
}
void accept()
{
	struct time t1,t2;
	printf("Enter Hour for time1: ");
	scanf("%d",&t1.hr);
	printf("Enter Minute for time1: ");
	scanf("%d",&t1.min);
	printf("Enter Second for time1: ");
	scanf("%d",&t1.sec);
	printf("Enter Hour for time2: ");
	scanf("%d",&t2.hr);
	printf("Enter Minute for time2: ");
	scanf("%d",&t2.min);
	printf("Enter Second for time2: ");
	scanf("%d",&t2.sec);
}
struct time addition_t1_t2()
{
	struct time t1,t2,t3;
	t3.hr=t1.hr+t2.hr+(t1.min+t2.min+(t1.sec+t2.sec)/60)/60;
	t3.min=(t1.min+t2.min+(t1.sec+t2.sec)/60)%60;
	t3.sec=(t1.sec+t2.sec)%60;
	printf("\nAddition Of Two times: %dhour : %dmin : %dsec",t3.hr,t3.min,t3.sec);
	return t3;
}
void convert(struct time t3)
{
	int tt;
	tt=t3.hr*3600+t3.min*60+t3.sec;
	printf("\nTotal time in sec: %d",tt);
}
