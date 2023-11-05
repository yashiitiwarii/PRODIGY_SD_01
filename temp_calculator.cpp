#include<iostream>
using namespace std;
int main()
{
    cout << "WLCOME TO THE TEMPERATURE CALCULATOR!" << endl;
    cout << endl;
    cout << "Enter the Temperature value : ";
    float temp;
    cin >> temp;

    float temp_in_c;
    float temp_in_f;
    float temp_in_k;

    char unit;
    cout << "Enter the Unit of Temp (K, C, F): ";
    cin >> unit;

    if(unit == 'C'){
        temp_in_f = temp * 9/5 + 32;
        temp_in_k = temp + 273;

        cout << "Temperature in F : " << temp_in_f << "    " << "Temperature in K :" << temp_in_k << endl;
    }

    else if(unit == 'F'){
        temp_in_c = (temp - 32) * (5/9);
        temp_in_k = (temp-32) * (5/9) + 273.15;
        cout << "Temperature in C : " << temp_in_c << "    " << "Temperature in K :" << temp_in_k << endl;

    }

    else if(unit == 'K'){
        temp_in_c = temp - 273.15;
        temp_in_f = (temp - 273.15) * (9/5) + 32;
        cout << "Temperature in C : " << temp_in_c << "    " << "Temperature in F :" << temp_in_f << endl;
    }

    else{
        cout << "**PLEASE ENTER THE VALID TEMPERATURE UNIT!**" << endl;
    }
    return 0;
}