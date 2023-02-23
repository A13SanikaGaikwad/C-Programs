//2.Finding area and Perimeter of reactangle or circle-Pointer with function

 void reactangle_area(float*,float*);
 void reactangle_perimeter(float*,float*);
 void circle_area(float*);
 void circle_perimeter(float*);
 
void main()
{
	    float l,w,r;
	    printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&l,&w);
	    printf("Enter the radius of circle:\n");
    	scanf("%f",&r);
    	printf("\n");
	    reactangle_area(&l,&w);
	    reactangle_perimeter(&l,&w);
    	circle_area(&r);
    	circle_perimeter(&r);
}
void reactangle_area(float *length,float *width)
{
	    float area;
	    area = *length*(*width);
	    printf("area of reactangle is %f\n",area);
}
void reactangle_perimeter(float *length,float *width)
{
	    float perimeter;
	    perimeter = 2*(*length+*width);
	    printf("Perimeter of reactangle is %f\n",perimeter);
}
void circle_area(float *radius)
{
    	float area;
    	area= 3.14*(*radius)*(*radius);
    	printf("area of circle is %f\n",area);
}
void circle_perimeter(float *radius)
{
    	float perimeter;
    	perimeter= 2*3.14*(*radius);
    	printf("Peimeter of the circle is %f\n",perimeter);
}

