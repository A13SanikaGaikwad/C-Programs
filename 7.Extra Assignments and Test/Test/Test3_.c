/* A Farmer has a field which is half in Circle Share and rest reactangle.He needs to do fencing for entire field using barbed
wire 5 times.Circular Section has radius 20m and reactangle length is 50m and breadth is 40m.if cost of barbed wire is 35Rs/m 
then calculate the total cost of fencing the field.*/

float fencing(int);
void main()
{
	int r=20,l=50,b=40,f;
	float pr,pc,halfcircle,rest,b_wire;
	
    pr=l+b+l+b;
	printf("\n Perimeter of Reactangle is: %f",pr);
	pc=2*3.14*r;
	printf("\n Perimeter of Circle is: %f",pc);
	
	halfcircle=(pc/2);
	rest=pr-b;
	
	f=halfcircle+rest;
    printf("\n Farmer Field is: %f",f);
	b_wire=fencing(f);
	printf("\n Total cost of fencing the field: %f",b_wire);
}
float fencing(int field)
{
   float barbedwire;
   barbedwire=5*35*field;
   return barbedwire;	
}
