#include <iostream>

using namespace std;

int converts(int fur) { return fur * 220; }

void firstPrint() { cout << " Three blind mice" << endl; }
void secondPrint() { cout << " See how they run" << endl; }
int ageToMonth(int age) { return age * 12; }
double celsiusToFahrenheit(int celsius) { return 1.8 * celsius + 32.0; }
double yearsToAstro(double years) { return years * 63240; }
void time(int hours, int minutes) { cout << " Time : " << hours << " : " << minutes << endl; }

int main()
{
    //Exercises 1
    cout << " ex num 2-1" << endl;
    cout << " Name: Irina\n Address: Serbia" << endl;

    //Exercises 2
    int furlogs;

    cout << "\n ex num 2-2" << endl;
    cout << " Enter the distance in furlongs:" << endl;
    cin >> furlogs;
    cout << " The yards is: " << converts(furlogs) << "\n" << endl;

    //Exercises 3
    cout << "\n ex num 2-3" << endl;
    firstPrint();
    firstPrint();
    secondPrint();
    secondPrint();

    //Exercises 4
    int age;

    cout << "\n ex num 2-4" << endl;
    cout << " Enter your age:" << endl;
    cin >> age;
    cout << " Your age in months is: " << ageToMonth(age) << "\n" << endl;

    //Exercises 5

    int celsius;

    cout << "\n ex num 2-5" << endl;
    cout << " Please enter a Celsius value :" << endl;
    cin >> celsius;
    cout << " " << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit.\n" << endl;

    //Exercises 6

    double years;

    cout << "\n ex num 2-6" << endl;
    cout << " Enter the number of light years :" << endl;
    cin >> years;
    cout << " " << years << " light years = " << yearsToAstro(years) << " astronomical units.\n" << endl;

    //Exercises 7

    int hours;
    int minutes;

    cout << "\n ex num 2-7" << endl;
    cout << "  Enter the number of hours :" << endl;
    cin >> hours;
    cout << "  Enter the number of minutes :" << endl;
    cin >> minutes;
    time(hours, minutes);

    cin.get();
    return 0;
}
