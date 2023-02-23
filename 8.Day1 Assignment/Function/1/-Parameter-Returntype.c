//Finding F from C (temp)-Without Parameter Without Returntype

void celciusToFahrenheit();
void main()
{
	celciusToFahrenheit();
}
void celciusToFahrenheit()
{
	float Fahrenheit,Celcius;
	printf("Temperature in Celcius is ");
	scanf("%f",&Celcius);
	
	Fahrenheit=Celcius*(1.8) + 32;
	
	printf("\n\n Temperature in Fahrenheit is:%f",Fahrenheit);
	
}
