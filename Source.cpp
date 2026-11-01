#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	string brand;
	int model = 0;
	double price = 0;

public: // Setter لكل خاصية
	void setcarbrand(string newName) {
		brand = newName;
	}
	void setcarmodel(int newModel) {
		model = newModel;
	}
	void setcarprice(double newPrice) {
		price = newPrice;
	}
	// Getter لكل خاصية 
	string getcarbrand() {
		return brand;
	}
	int getcarmodel() {
		return model;
	}
	double getcarprice() {
		return price;
	}
	//بناء المشيّد للكائن  
	Car(string newName, int newModel, double newPrice) {
		brand = newName;
		model = newModel;
		price = newPrice;
	}
	//دالة عرض المعلومات 
	void displayCarInfo() {
		cout << "\n----- Display car information -----\n";
		cout << "Car brand : " << brand << endl;
		cout << "Car model :" << model << endl;
		cout << "Car price :" << price << endl;
	}
	//دالة حساب السعر بعد الخصم
	void calculatdiscount( float percentag) {
		double discount = price * (percentag / 100);
		price = price - discount;
		cout << "\nPrice after discount = " << price<<endl;
	}
};

int main()
{
	Car Mycar("BMW",2022,31.000);
	Mycar.displayCarInfo();
	Mycar.calculatdiscount(10);
	Mycar.setcarbrand("TOYOTA");
	cout << endl << "- Car brand after editing : "<< Mycar.getcarbrand();
	Mycar.setcarmodel(2025);
	cout << endl << "- Car model after editing : "<< Mycar.getcarmodel();
	Mycar.setcarprice(34.500);
	cout << endl << "- Car price after editing : "<< Mycar.getcarprice();
	Mycar.displayCarInfo();
	Mycar.calculatdiscount(5);
}