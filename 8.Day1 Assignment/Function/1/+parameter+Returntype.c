//Finding F from C (temp)-With Parameter With Returntype

float celciusToFahrenheit(float);
void main()
{
	float Fahrenheit,Celcius;
	printf("Temperature in Celcius is ");
	scanf("%f",&Celcius);
	
	Fahrenheit=celciusToFahrenheit(Celcius);
	
	printf("\nTemperature in Fahrenheit is:%f",Fahrenheit);
}
float celciusToFahrenheit(float Cl)
{
	float Fh;
	Fh=Cl*(1.8) + 32;
	return Fh;
}
