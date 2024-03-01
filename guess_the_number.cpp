#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
using namespace std;

void playGame(int n, int random)
{
    int user;
    do
    {
        cout << endl
             << "Enter your Number : ";
        cin >> user;
        if (user == random)
        {
            cout << "YOU WON !!" << endl;
            break;
        }
        else if (user < random)
        {
            cout << "YOU GUESSED IT LESS " << endl;
            n--;
        }
        else if (user > random)
        {
            cout << "YOU GUESSED IT MORE " << endl;
            n--;
        }
        cout << endl
             << "--> You have Remained with " << n << " times " << endl
             << endl;
    } while (n > 0);

    cout << "Loading the correct number...." << endl;
    sleep(5);
    cout << endl
         << endl
         << "CORRECT NUMBER : " << random << endl;
    cout << "------------------------------------------------------------------------" << endl;
}
int RandomNumber()
{
    srand(time(0));
    return rand() % 100 + 1;
}
void Easymode(int n, int random)
{
    cout << endl
         << "You have only " << n << " turns !!" << endl;
    playGame(n, random);
}
void Mediummode(int n, int random)
{
    cout << "You have only " << n << " turns !!" << endl;
    // cout<<"You have only "<<n <<" turns !!"<<endl;
    playGame(n, random);
}
void Hardmode(int n, int random)
{
    cout << "You have only " << n << " turns !!" << endl;
    playGame(n, random);
}

int main()
{

    int random_number = RandomNumber();
    cout << "------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tSELECT DIFFICULTY LEVEL" << endl
         << endl;
    cout << "1.Easy" << endl;
    cout << "2.Medium" << endl;
    cout << "3.Hard" << endl;
    cout << "4.Quit" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Easymode(7, random_number);
        break;
    case 2:
        Mediummode(5, random_number);
        break;
    case 3:
        Hardmode(3, random_number);
        break;

    default:
        cout << "Invalid option" << endl;
        break;
    }
    return 0;
}