//Finding F from C (temp)-Without Parameter With Returntype

float celciusToFahrenheit();
void main()
{	
	float Fahrenheit;
	
	Fahrenheit=celciusToFahrenheit();
	
	printf("\nTemperature in Fahrenheit is:%f",Fahrenheit);
}
float celciusToFahrenheit()
{
	float Fh,Celcius;
	printf("Temperature in Celcius is ");
	scanf("%f",&Celcius);
	Fh=Celcius*(1.8) + 32;
	return Fh;
}
