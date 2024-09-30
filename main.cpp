/*
Neel & Ayaan
9/30/24
Ikea Store Project
Extra:
Rounded numbers in the bill to hundredths place
*/

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
  // Declaring Variables
  int items = 0;
  float sum = 0.0;
  char buyQuestion;
  bool quit = false;
  cout << "welcome big rizz" << endl;

  cout << "would you like to buy something or nah? (y/n)" << endl;
  cin >> buyQuestion;
  if (tolower(buyQuestion) == 'y')
  {
    char standing, blackout, tabletop, legs;
    char sSize, lSize, tFinish;
    int bSize;

    cout << "Wanna get a Standing Desk perchance?? (enter 'q' to quit and go to bill)" << endl;
    cin >> standing;

    if (tolower(standing) == 'y') // toLower() makes the inout lowercase so it does not matter what the user inputted
    {
      cout << "What size? (s/m/l)" << endl;
      cin >> sSize;
      sSize = tolower(sSize);

      if (sSize == 's')
      {
        sum += 249.99; // based on the size, the price is added to the sum
        items++;       // the total item count increases with each purchase
      }

      else if (sSize == 'm')
      {
        sum += 299.99;
        items++;
      }

      else if (sSize == 'l')
      {
        sum += 349.99;
        items++;
      }
      else // if no input matches these sizes, this is printed and the purchase does not go through
      {
        cout << "Invalid size" << endl;
      }
    }
    else if (tolower(standing) == 'q')
      quit = true;

    if (!quit)
    {

      cout << "Wanna get a Blackout Curtain perchance?? (enter 'q' to quit and go to bill)" << endl;
      cin >> blackout;

      if (tolower(blackout) == 'y')
      {
        cout << "What size? (45in/57in)" << endl;
        cin >> bSize;
        bSize = bSize;

        if (bSize != 45 && bSize != 54)
        {
          cout << "invalid size you can't get this item anymore." << endl;
          blackout = 'n';
        }

        if (bSize == 45)
        {
          sum += 29.99;
          items++;
        }
        else if (bSize == 57)
        {
          sum += 39.99;
          items++;
        }
      }
      else if (tolower(blackout) == 'q')
        quit = true;
    }

    if (!quit)
    {

      cout << "Wanna get a Tabletop perchance?? (enter 'q' to quit and go to bill)" << endl;
      cin >> tabletop;

      if (tolower(tabletop) == 'y')
      {
        cout << "What finish? (Wood(w)/Marble(m)/Granite(g))" << endl;
        cin.ignore();
        cin >> tFinish;
        tFinish = tolower(tFinish);

        if (tFinish == 'w' || tFinish == 'm' || tFinish == 'g')
        {
          sum += 69.99;
          items++;
        }
        else
        {
          cout << "Invalid Finish you can't get this anymore" << endl;
          tabletop = 'n';
        }
      }
      else if (tolower(tabletop) == 'q')
        quit = true;
    }

    if (!quit)
    {

      cout << "Wanna get a Table Leg perchance?? (enter 'q' to quit and go to bill)" << endl;
      cin >> legs;

      if (tolower(legs) == 'y')
      {
        cout << "What color? (White(w)/Black(b)/Brown(r))" << endl;
        // cin.ignore();
        cin >> lSize;
        lSize = tolower(lSize);

        if (lSize == 'w' || lSize == 'b' || lSize == 'r')
        {
          items++;
          sum += 9.99;
        }
        else
        {
          cout << "Invalid Color you can't get this anymore" << endl;
          legs = 'n';
        }
      }
      else if (tolower(legs) == 'q')
        quit = true;
    }
    // if quit is true, the program will jump to the bill
  }

  float tax = sum * 0.06625; // Multiplying the sum by the tax to get the standalone sales tax
  float total = tax + sum;
  cout << "================================" << endl;
  cout << " " << endl;
  cout << "              BILL              " << endl;
  cout << "Items ordered: " << items << endl;
  cout << "Subtotal: " << fixed << setprecision(2) << sum << endl; // setprecision(2) rounds to the hundredths place
  cout << "NJ Sales Tax: $" << fixed << setprecision(2) << tax << endl;
  cout << "Total: $" << fixed << setprecision(2) << total << endl;
  cout << " " << endl;
  cout << "   !!THANK YOU FOR SHOPPING!!   " << endl;
  cout << "================================" << endl;

  // so exe program doesn't immediately close
  cout << "Enter anything to close...\n>";
  string wait;
  cin >> wait;
}
