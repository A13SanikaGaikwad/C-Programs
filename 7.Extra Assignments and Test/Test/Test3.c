/* A Farmer has a field which is half in Circle Share and rest reactangle.He needs to do fencing for entire field using barbed
wire 5 times.Circular Section has radius 20m and reactangle length is 50m and breadth is 40m.if cost of barbed wire is 35Rs/m 
then calculate the total cost of fencing the field.*/


void main()
{
	int r=20,l=50,b=40;
	float pr,pc,halfcircle,rest,field,barbedwire;
	
    pr=l+b+l+b;
	printf("\n Perimeter of Reactangle is: %f",pr);
	pc=2*3.14*r;
	printf("\n Perimeter of Circle is: %f",pc);
	
	halfcircle=(pc/2);
	rest=pr-b;
	
	field=halfcircle+rest;
    printf("\n Farmer Field is: %f",field);
	
	barbedwire=5*35*field;
	printf("\n Total cost of fencing the field: %f",barbedwire);
}
