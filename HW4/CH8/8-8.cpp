#include<iostream>

using namespace std;

class Temperature{
	public:
		Temperature();
//		Temperature(double fahrenheit);
//		double getFahrenheit() const;
		double toKelvin() const;
		double toCelisus() const;
		bool operator==(const Temperature& temperature);
		friend ostream& operator<<(ostream& outputStream, const Temperature& temperature);
		friend istream& operator>>(istream& inputStream, Temperature& temperature);
	private:
		double fahrenheit;
};

int main(){
	Temperature temperature1, temperature2;
	cout << "Input temperature 1 in Fahrenheit.\n";
	cin >> temperature1;
	cout << "In Kelvin : " << temperature1.toKelvin() << endl;
	cout << "In Celisus : " << temperature1.toCelisus() << endl;
	cout << "In Fahrenheit : " << temperature1 << endl << endl;
	cout << "Input temperature 2 in Fahrenheit.\n";
	cin >> temperature2;
	cout << "In Kelvin : " << temperature2.toKelvin() << endl;
	cout << "In Celisus : " << temperature2.toCelisus() << endl;
	cout << "In Fahrenheit : " << temperature2 << endl << endl;
	cout << "temperature 1 == temperature 2 : ";
	if(temperature1 == temperature2)
		cout << "true\n";
	else
		cout << "false\n";
}

Temperature::Temperature(){
}

/*Temperature::Temperature(double fahrenheit){
	this->fahrenheit = fahrenheit;
}*/

/*double Temperature::getFahrenheit() const{
	return fahrenheit;
}*/

double Temperature::toKelvin() const{
	return toCelisus()+273.15;
}

double Temperature::toCelisus() const{
	return (fahrenheit - 32) * 5 / 9.0;
}

bool Temperature::operator==(const Temperature& temperature){
	return (toKelvin() == temperature.toKelvin());
}

ostream& operator<<(ostream& outputStream, const Temperature& temperature){
	outputStream << temperature.fahrenheit;
	return outputStream;
}

istream& operator>>(istream& inputStream, Temperature& temperature){
	double fahrenheit;
	inputStream >> fahrenheit;
	temperature.fahrenheit = fahrenheit;
	return inputStream;
}
