// BMI calculation = (weight(in kg))/Height^2(in meter)
// underweight < 18.5
// Normal weight is range of 18.5-24.9
// Overweight is range of 25-29.9
// Obese is > 31

#include <iostream>
using namespace std;

int main() 
{
        float w, h, bmi, x, BMI, p, i;
        cout << "\n\t************Welcome to the BMI calculator************\n\n";
        cout << "Please Enter ==>" << endl
             << "1 for calculate bmi weight in (kg) and height in (meter)" << endl
             << "2 for calculate bmi weight in (pounds) and height in (inches)" << endl;
        cout << "Enter the nunber: ";
        cin >> x;

        if (x == 1)
        {
                cout << "Please Enter the Weight in kilogram (Kg): ";
                cin >> w;
                cout << "Please Enter the Height in meter(m): ";
                cin >> h;
                bmi = (w / (h * h));
                if (bmi < 18.5)
                {
                        cout << "Your BMI is:" << bmi << endl;
                        cout << "Your BMI catogary is Underweight";
                }
                else if (bmi > 18.5 && bmi < 24.9)
                {
                        cout << "Your BMI is:" << bmi << endl;
                        cout << "Your BMI catogary is Normal";
                }
                else if (bmi > 25 && bmi < 29.9)
                {
                        cout << "Your BMI is:" << bmi << endl;
                        cout << "Your BMI catogary is Overweight";
                }
                else
                {
                        cout << "Your BMI is:" << bmi << endl;
                        cout << "Your BMI catogary is Obese";
                }
        }
        if (x == 2)
        {
                cout << "Please Enter the Weight in kilogram (pound): ";
                cin >> p;
                cout << "Please Enter the Height in inches (inc): ";
                cin >> i;
                BMI = (p/ (i * i)) * 703 ;
                if (BMI < 18.5)
                {
                        cout << "Your BMI is:" << BMI << endl;
                        cout << "Your BMI catogary is Underweight";
                }
                else if (BMI > 18.5 && BMI < 24.9)
                {
                        cout << "Your BMI is:" << BMI << endl;
                        cout << "Your BMI catogary is Normal";
                }
                else if (BMI > 25 && BMI < 29.9)
                {
                        cout << "Your BMI is:" << BMI << endl;
                        cout << "Your BMI catogary is Overweight";
                }
                else
                {
                        cout << "Your BMI is:" << BMI << endl;
                        cout << "Your BMI catogary is Obese";
                }
        }

        return 0;
}