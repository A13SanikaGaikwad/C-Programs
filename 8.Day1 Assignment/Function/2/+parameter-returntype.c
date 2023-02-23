//Finding area and Perimeter of reactangle or circle-Without parameter without returntype

 void reactangle_area(float,float);
 void reactangle_perimeter(float,float);
 void circle_area(float);
 void circle_perimeter(float);
 
void main()
{
	    float length,width,radius;
	    printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	printf("\n");
	    reactangle_area(length,width);
	    reactangle_perimeter(length,width);
    	circle_area(radius);
    	circle_perimeter(radius);
}
void reactangle_area(float length,float width)
{
	    float area;
	    area = length*width;
	    printf("area of reactangle is %f\n",area);
}
void reactangle_perimeter(float length,float width)
{
	    float perimeter;
	    perimeter = 2*(length+width);
	    printf("Perimeter of reactangle is %f\n",perimeter);
}
void circle_area(float radius)
{
    	float area;
    	area= 3.14*radius*radius;
    	printf("area of circle is %f\n",area);
}
void circle_perimeter(float radius)
{
    	float perimeter;
    	perimeter= 2*3.14*radius;
    	printf("Peimeter of the circle is %f\n",perimeter);
}

