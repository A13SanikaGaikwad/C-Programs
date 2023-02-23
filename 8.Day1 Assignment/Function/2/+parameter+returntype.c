//Finding area and Perimeter of reactangle or circle-Without parameter without returntype

float reactangle_area(float,float);
float reactangle_perimeter(float,float);
float circle_area(float);
float circle_perimeter(float);
 
void main()
{
	    float length,width,area,perimeter,radius;
    
		printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	printf("\n");
	    area=reactangle_area(length,width);
	    printf("area of reactangle is %f\n",area);
	    perimeter=reactangle_perimeter(length,width);
	    printf("Perimeter of reactangle is %f\n",perimeter);
    	area=circle_area(radius);
    	printf("area of circle is %f\n",area);
    	perimeter=circle_perimeter(radius);
    	printf("Peimeter of the circle is %f\n",perimeter);
    	
	
}
float reactangle_area(float length,float width)
{
	    return length*width;
}
float reactangle_perimeter(float length,float width)
{
	    return 2*(length+width);
}
float circle_area(float radius)
{
    	return 3.14*radius*radius;
}
float circle_perimeter(float radius)
{
    	return 2*3.14*radius;
}

