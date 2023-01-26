#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*********MENU*********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "**********************" << endl;
}

int main()
{
    // check balance,deposit,withdraw,show menu
    srand(time(NULL));
    int balance = 500 + (rand() % 1000), accNumber;
    cout << "Enter Account NUmber" << endl;
    cin >> accNumber;
    cout << "Balance: " << balance << endl;
    int option;
    do
    {
        showMenu();
        cout << "Options:\n***Enter 1 for check Blance***\n***Enter 2 for deposit Money***\n***Enter 3 for withdrawMoney***" << endl;
        cin >> option;
        // system("cls");
        switch (option)
        {
        case 1:
            cout << "Your Balance is " << balance << " rs" << endl
                 << endl;
            break;
        case 2:
            cout << "Enter Amount you want to deposit" << endl;
            int depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Updated Balance: " << balance << " rs" << endl
                 << endl;
            ;
            break;

        case 3:
            cout << "Enter Amount you want to withdraw" << endl;
            int withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                int notes[] = {2000, 500, 100, 50, 20, 10, 2, 1};
                int noteCount[9] = {0};
                int temp = withdrawAmount;

                for (int i = 0; i < 8; i++)
                {
                    if (temp >= notes[i])
                    {
                        noteCount[i] = temp / notes[i];
                        temp = temp % notes[i];
                    }
                }
                cout << "Currency Count ->" << endl;
                for (int i = 0; i < 8; i++)
                {
                    if (noteCount[i] != 0)
                    {
                        cout << endl
                             << notes[i] << " * " << noteCount[i] << " = " << notes[i] * noteCount[i];
                    }
                }
                cout << "\n---------------" << endl;
                cout << "         " << withdrawAmount << endl;
                cout << "Updated Balance: " << balance << " rs" << endl
                     << endl;
            }

            else
                cout << "Not Enough Money...!" << endl
                     << endl;
            break;
        case 4:
            break;
        default:
            cout << "Enter Valid Option" << endl;
            break;
        }
    } while (option != 4);
    return 0;
}