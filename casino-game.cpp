#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include<windows.h>
using namespace std;

int main() {

    string name;
    int age;
system("cls");
    cout << "------------------------------------" << endl;
    cout << "\t CASINO GAME" << endl;
    cout << "------------------------------------" << endl;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your age: " << endl;
    cin >> age;

    if (age >= 16) {
        start:
        int playamount;
        int totalamount;
        int choice;
        int randomnumber;
        srand(time(0));
        string button;
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "\t CASINO GAME" << endl;
        cout << "------------------------------------" << endl;
        cout << "Welcome " << name << " !" << endl;
        cout << "Enter your total amount: " << endl;
        cin >> totalamount;
        cout << "------------------------------------" << endl;
        cout << "\t Instructions:" << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Select your play amount." << endl;
        cout << "2. Select a number between 1 to 5." << endl;
        cout << "3. The game engine will choose any random number between 1 to 5." << endl;
        cout << "4. If the number you selected and the random number matches, then you win double the playing amount you had chosen." << endl;
        cout << "5. If the number you selected and the random number doesn't match, then you'll lose your play amount." << endl;
        cout << "------------------------------------" << endl;
        cout << "Press any button to continue" << endl;
        cin >> button;
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "\t CASINO GAME" << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter the play amount: " << endl;
        cin >> playamount;
        if (playamount > totalamount) {
            cout << "Not enough balance" << endl;
        }
        else {
            again:
            cout << "Enter any number between 1 to 5: " << endl;
            cin >> choice;
            if (choice < 1 || choice > 5) {
                cout << "Invalid number, please try again" << endl;
                goto again;
            }
            else {
                randomnumber = rand() % 5 + 1;
                cout << endl << endl << endl;

                if (randomnumber == choice) {
                    cout << "Congratulations! You won" << endl;
                    totalamount =totalamount+ playamount;
                    
                    cout << "Your new total amount is " << totalamount << endl;
                    Sleep(5000); // Add the winnings to the total
                }
                else {
                    cout << "Sorry, you lost. The random number generated was " << randomnumber << endl;
                    totalamount =totalamount + playamount;
                cout << "Your new total amount is " << totalamount << endl;
                Sleep(5000);

                }
                
                goto start;
            }
        }
    }
    else {
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "\t CASINO GAME" << endl;
        cout << "------------------------------------" << endl;
        cout << "Sorry " << name << ", you are not old enough to play this game." << endl;
    }

    return 0;
}
