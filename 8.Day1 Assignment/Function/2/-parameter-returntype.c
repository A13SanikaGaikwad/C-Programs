//Finding area and Perimeter of reactangle or circle-Without parameter without returntype

void reactangle_area();
void reactangle_perimeter();
void circle_area();
void circle_perimeter();
 
void main()
{
	    reactangle_area();
	    reactangle_perimeter();
    	circle_area();
    	circle_perimeter();
}
void reactangle_area()
{
	    float area,length,width;
	    printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    area=length*width;
	    printf("area of reactangle is %f\n",area);
}
void reactangle_perimeter()
{  
        float perimeter,length,width;
        printf("Enter the Length and width of Reactangle:\n");
	    scanf("%f %f",&length,&width);
	    perimeter=2*(length+width);
	    printf("Perimeter of reactangle is %f\n",perimeter);
}
void circle_area()
{
	    float area,radius;
	    printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	area=3.14*radius*radius;
    	printf("area of circle is %f\n",area);
}
void circle_perimeter()
{ 
        float perimeter,radius;
        printf("Enter the radius of circle:\n");
    	scanf("%f",&radius);
    	perimeter=2*3.14*radius;
    	printf("Peimeter of the circle is %f\n",perimeter);
}

