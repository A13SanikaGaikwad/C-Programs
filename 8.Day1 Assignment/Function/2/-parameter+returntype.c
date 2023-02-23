//Finding area and Perimeter of reactangle or circle-Without parameter without returntype

float reactangle_area();
float reactangle_perimeter();
float circle_area();
float circle_perimeter();
 
void main()
{
	    float area,perimeter,radius;
	    area=reactangle_area();
	    printf("area of reactangle is %f\n",area);
	    perimeter=reactangle_perimeter();
	    printf("Perimeter of reactangle is %f\n",perimeter);
    	area=circle_area();
    	printf("area of circle is %f\n",area);
    	perimeter=circle_perimeter();
    	printf("Perimeter of the circle is %f\n",perimeter);
}
float reactangle_area()
{
	    float area,length,width;
	    printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    area=length*width;
	    return area;
}
float reactangle_perimeter()
{  
        float perimeter,length,width;
        printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    perimeter=2*(length+width);
	    return perimeter;
}
float circle_area()
{
	    float area,radius;
	    printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	area=3.14*radius*radius;
    	return area;
}
float circle_perimeter()
{ 
        float perimeter,radius;
        printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	perimeter=2*3.14*radius;
        return perimeter;
}

