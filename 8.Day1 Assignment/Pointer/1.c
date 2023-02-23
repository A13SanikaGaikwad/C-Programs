//1.Finding F from C (temp)-Pointer with Function

void celciusToFahrenheit(float*);
void main()
{
	float temperature;
	celciusToFahrenheit(&temperature);
}
void celciusToFahrenheit(float *Fahrenheit)
{
	float Celcius;
	printf("Temperature in Celcius is ");
	scanf("%f",&Celcius);
	
	*Fahrenheit=Celcius*(1.8) + 32;
	
	printf("\nTemperature in Fahrenheit is:%f",*Fahrenheit);
	
}
