//Finding area and Perimeter of reactangle or circle

void main()
{
    float length,breadth,area,perimeter,radius;
    int choice;
    printf("Enter your choice 1.Reactangle 2.Circle \n");
    scanf("%d", &choice);
 
    if(choice==1)
    {
     	printf("\n Enter the Length of Reactangle:");
	    scanf("%f",&length);
	    printf("\n Enter the Breadth of Reactangle:");
	    scanf("%f",&breadth);
	    
	    area = length*breadth;
	    printf("area of reactangle is %f\n",area);
	    
	    perimeter = 2*(length+breadth);
	    printf("Perimeter of reactangle is %f\n",perimeter);
    }
    else if(choice==2)
    {
    	printf("\n Enter the radius of circle:");
    	scanf("%f",&radius);
    	
    	area= 3.14*radius*radius;
    	printf("area of circle is %f\n",area);
    	
    	perimeter= 2*3.14*radius;
    	printf("Peimeter of the circle is %f\n",perimeter);
	}
	else
	{
		printf("Invalid Choice");
	}
}












