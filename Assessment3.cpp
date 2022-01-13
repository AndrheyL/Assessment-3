#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

void menu()
{
    cout << "Coffee          Price(AED)       Tea          Price(AED)" << endl << endl;
    cout << "Iced Coffee     AED 3       |    Iced Tea     AED 3" << endl;
    cout << "Milk Coffee     AED 2       |    Milk Tea     AED 2" << endl;
    cout << "Black Coffee    AED 1       |    Black Tea    AED 1" << endl << endl << endl;
}

int main()
{
    menu();
    char choice, sugar;
    int coffee, tea;
    int cash;
    
    cout << "Would you like some Coffee (C) or Tea (T)?" << endl;
    cin >> choice;

    while (choice != 'C' && choice != 'c' && choice != 'T' && choice != 't')
    {
        cout << "Invalid choice!" << endl << "Please try again." << endl;
        cout << "Would you like some Coffee (C) or Tea (T)?" << endl;

        cin >> choice;
    }

    if (choice == 'C' || choice == 'c')
    {
        cout << endl << "You chose Coffee." << endl;
        cout << "Please select which type of Coffee you want to drink." << endl;
        cout << "(1) Iced Coffee     AED 3" << endl;
        cout << "(2) Milk Coffee     AED 2" << endl;
        cout << "(3) Black Coffee    AED 1" << endl << endl;

        cin >> coffee;
        switch (coffee)
        {
        case 1:
        {
            cout << endl << "Do you want your Iced Coffee with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Iced Coffee with more sugar?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 3." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');
                
                cin >> cash;
            }

            if (cash < 3)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 3)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 3)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 3;
                cout << "Your change is AED " << cash << ".\nThank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        case 2:
        {
            cout << endl << "Do you want your Milk Coffee with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Milk Coffee with more sugar?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 2." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');

                cin >> cash;
            }

            if (cash < 2)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 2)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 2)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 2;
                cout << "Your change is AED " << cash << ".\nThank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        case 3:
        {
            cout << endl << "Do you want your Black Coffee with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Black Coffee with more sugar?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 1." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');

                cin >> cash;
            }

            if (cash < 1)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 1)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 1)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 1;
                cout << "Your change is AED " << cash << ".\nThank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        default:
        {
            cout << " Invalid Option!";
            break;
        }
        }


    }
    if (choice == 'T' || choice == 't')
    {
        cout << endl << "You chose Tea." << endl;
        cout << "Please select which type of Tea you want to drink." << endl;
        cout << "(1) Iced Tea        AED 3" << endl;
        cout << "(2) Milk Tea        AED 2" << endl;
        cout << "(3) Black Tea       AED 1" << endl << endl;

        cin >> tea;
        switch (tea)
        {
        case 1:
        {
            cout << endl << "Do you want your Iced Tea with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Iced Tea with more sugar?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 3." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');

                cin >> cash;
            }

            if (cash < 3)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 3)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 3)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 3;
                cout << "Your change is AED " << cash << ".\n Thank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        case 2:
        {
            cout << endl << "Do you want your Milk Tea with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Milk Tea with more sugar ?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 2." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');

                cin >> cash;
            }

            if (cash < 2)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 2)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 2)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 2;
                cout << "Your change is AED " << cash << ".\n Thank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        case 3:
        {
            cout << endl << "Do you want your Black Tea with sugar? ( Y / N )" << endl;
            cin >> sugar;

            while (sugar != 'Y' && sugar != 'y' && sugar != 'N' && sugar != 'n')
            {
                cout << "Invalid choice of sugar!" << endl << "Please try again." << endl;
                cout << "Do you want your Black Tea with more sugar ?" << endl;

                cin >> sugar;
            }

            cout << endl << "The price of your Coffee is AED 1." << endl;
            cout << "How much do you have in your pocket?" << endl;
            cin >> cash;

            while (cin.fail())
            {
                cout << endl << "Invalid Input!" << endl;
                cout << "Please enter the correct amount: ";
                cin.clear();
                cin.ignore(1000, '\n');

                cin >> cash;
            }

            if (cash < 1)
            {
                cout << endl << "You do not have the right amount." << endl;
                cout << "Please come again if you have the right amount." << endl;
                return 0;
            }
            if (cash == 1)
            {
                cout << endl << "Thank you for your purchase!" << endl;
                cout << "You have the exact change! Please come again!" << endl;
                return 0;
            }
            if (cash > 1)
            {
                cout << "I recieved AED " << cash << "." << endl;
                cash = cash - 1;
                cout << "Your change is AED " << cash << ".\nThank you for your purchase! Please come again!" << endl;
                return 0;
            }
            break;
        }
        default:
        {
            cout << " Invalid Option!";
            break;
        }
        }


    }
}
