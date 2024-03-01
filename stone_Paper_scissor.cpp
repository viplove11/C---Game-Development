#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

// random number generator
int RandomNumber()
{
    srand(time(0));
    int n = rand() % 100 + 1;

    return n;
}
// computer selecting its option
char ComputerChoice(int n)
{
    // cout << RandomNumber() << endl;
    if (n > 0 && n <= 33)
    {
        return 'r';
    }
    else if (n >= 34 && n < 66)
    {
        return 'p';
    }
    else if (n >= 66 && n <= 100)
    {
        return 's';
    }
}

// checking the winner
void check_result(int user_count, int computer_count)
{
    if (user_count > computer_count)
    {
        cout << endl
             << "\t\t\t   User Won !!" << endl;
        cout << "--------------------------------------------------------------------------" << endl
             << endl;
    }
    else if(user_count == computer_count)
    {
        cout << endl
             << "\t\t\t   DRAW !!" << endl;
        cout << "--------------------------------------------------------------------------" << endl
             << endl;
    }
    else
    {
        cout << endl
             << "\t\t\t   Computer Won !!" << endl;
        cout << "--------------------------------------------------------------------------" << endl
             << endl;
    }
}

// displaying the winning table
void displayTable(int user_count, int computer_count)
{
        cout << "--------------------------------------------------------------------------" << endl;

    cout << "\t\tUSER VALUE : " << user_count << "\t\t|\t\tCOMPUTER VALUE : " << computer_count << "\t\t" << endl
         << endl;
}

// playing the game
void playgame(int n)
{
    int user_count = 0, computer_count = 0;
    char user_option;

    do
    {
        char computer_option = ComputerChoice(RandomNumber());
        cout<<endl;
        cout << "Enter your option : ";
        cin >> user_option;
        cout << "Computer Chooses : " << computer_option << endl<<endl;

        if (user_option == computer_option)
        {
            continue;
        }
        if ((user_option == 's' && computer_option == 'p') || (user_option == 'p' && computer_option == 'r') || (user_option == 'r' && computer_option == 's'))
        {
            user_count++;
        }
        else
        {
            computer_count++;
        }
        n--;
    } while (n > 1);
    // system("cls");
    displayTable(user_count, computer_count);
    check_result(user_count, computer_count);
}
void Easymode(int n)
{
    playgame(n);
}
void Mediummode(int n)
{
    playgame(n);
}
void Hardmode(int n)
{
    playgame(n);
}

int main()
{

    cout << "------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tSELECT DIFFICULTY LEVEL" << endl
         << endl;
    cout << "1.Easy" << endl;
    cout << "2.Medium" << endl;
    cout << "3.Hard" << endl;
    cout << "4.Quit" << endl;
    cout << endl
         << "'s' --> scissors | 'p' --> Paper | 'r' --> Rock " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;
    // cout<<RandomNumber
    switch (choice)
    {
    case 1:
        Easymode(5);
        break;
    case 2:
        Mediummode(3);
        break;
    case 3:
        Hardmode(1);
        break;

    default:
        cout << "Invalid option" << endl;
        break;
    }

    return 0;
}