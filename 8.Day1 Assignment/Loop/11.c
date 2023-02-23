//Accept a number with 1 or 2 digit from user and display it in words.

void main()
{
	int num,q,r;
	printf("Enter two digit Number ");
	scanf("%d",&num);
	
	q = num / 10;
	r = num % 10;
	
	//special case for numbers between 11 to 19
    if(num > 10 && num < 20)
	{
		if(r == 1)
	   {
	 	 printf("Eleven");
	   }
	   else
	   {
	        if(r == 2)
	        {
		     printf("Twelve");
	        }
	        else 
	        {
	            if(r == 3)
	            {
		            printf("Thirteen");
	            }
	            else 
	            {
	   	            if(r == 4)
	               {
		               printf("Fourteen");
	               }
	               else 
	               {
	                    if(r == 5)
	                    {  
		                   printf("Fifteen");
	                    }
	                    else 
	                    {
	                        if(r == 6)
	                        {
		                       printf("Sixteen");
	                        }
	                        else 
	                        {
	                            if(r == 7)
                                {
		                           printf("Seventeen");
	                            }
	                            else
	                            {
	                                if(r == 8)
	                                {
		                               printf("Eighteen");
	                                }
	                                else 
	                                {
	                                    
		                                printf("Nineteen");
                                    }
                               }
                           }
                       }
                   }
               }
           }
       }
   }
   else 
	{
		
	if(q == 1)
    {
	    printf("Ten");
	}
    else 
    {    
	    if(q == 2)
	    {
		   printf("Twenty");
	    }
	    else 
		{
		    if(q == 3)
		    {
		      printf("Thirty");
		    }
	        else 
		    {
		        if(q == 4)
		        {
			       printf("Fourty");
		        }
	            else 
		        {
		            if(q == 5)
		            {
			            printf("Fifty");
		            }
	                else 
		            {
	                    if(q == 6)
	     	            {  
			                printf("Sixty");
		                }
		           	    else 
	                	{
		                    if(q == 7)
		                    {
			                    printf("Seventy");
		                    }
	                      	else
		                    {
			                    if(q == 8)
		                        {
			                        printf("Eighty");
		                        }
		                        else
		                        {
		                            if(q == 9)
		                            {
			                           printf("Ninety");
		                            }
		                        }
		                    }
		                }
		           }
		        }
		    }
		}
	}
	if(r == 1)
    {
		printf("One");
	}
	else
	{
		if(r == 2)
		{  
			printf("Two");
		}
		else 
		{
		    if(r == 3)
		    {
			   printf("Three");
		    }
		    else
		    {
		        if(r == 4)
		        {
			        printf("Four");
		        }
		        else 
		        {
		            if(r == 5)
		            {
			            printf("Five");
		            }
		            else 
		            {
		                if(r == 6)
		                {
			                printf("Six");
		                }
		                else 
		                {
		                    if(r == 7)
		                    {
			                   printf("Seven");
		                    }
		                    else 
		                    {   
							    if(r == 8)
		                        {
			                        printf("Eight");
		                        }
		                        else
		                        {
		                            if(r == 9)
		                            {
			                            printf("Nine");
		                            }
		                        }
		                    }
		                }
		            }
		        }
		    }
		}
	}
	
    }
                                   
}
