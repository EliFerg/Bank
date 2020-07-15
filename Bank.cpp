#include <iostream>
#include <cmath>

using namespace std;

class Person
{
    public:
        string name;
        string username;
        string password;
        double cash = 0;
        double bank;
        double deposit;
        double withdrawl;
        double result;
        string proceed;
        string proceed2;
        int dex;
        int cont2;
        int cont3;
        int cont4;
        int cont5;
        string other;
        string other2;

        double aDeposit(double deposit)
        {
            if(deposit < 0){
                cout << "Invalid amount" << endl;
                cout << endl;

                cont2 = 1;

                return bank;
            }else if(deposit > cash){
                cout << "You have entered an amount higher than your cash on hand." << endl;
                cout << "Would you like to enter a different amount?" << endl;
                    cin >> other;
                    do
                    {    if(other == "Yes" || other == "yes" || other == "y"){
                            cont3 = 1;
                            return bank;
                        }else if(other == "No" || other == "no" || other == "n"){
                            cont3 = 1;
                            return bank;
                        }else{
                            cout << "Invalid choice" << endl;
                            cont3 = 0;
                        }
                    }while(cont3 == 0);

            }else if(deposit == cash){
                cout << "Warning!" << endl;
                cout << "Your deposit of $" << deposit << " will set your on hand cash to $0." << endl << endl;

                do{
                    cout << "Would you like to proceed?" << endl;
                    cout << "Yes or No: ";
                        cin >> proceed;
                        cout << endl;
                    if(proceed == "Yes" || proceed == "yes" || proceed == "y"){
                        cont2 = 1;

                        cout << "Your deposit of $" << deposit << " has been processed." << endl << endl;

                        cash = cash - deposit;

                        bank = bank + deposit;

                        return bank;

                    }else if(proceed == "No" || proceed == "no" || proceed == "n"){
                        cont2 = 1;
                        return bank;
                    }else{
                        cout << "Invalid Response" << endl;
                        cont2 = 0;
                    }
                }while(cont2 == 0);

            }else{
                cout << "Your deposit of $" << deposit << " has been processed." << endl << endl;

                cash = cash - deposit;

                bank = bank + deposit;

                return bank;
            }
        };

        double aWithdrawl(double withdrawl)
        {
             if(withdrawl < 0){
                cout << "Invalid amount" << endl;
                cout << endl;

                cont4 = 1;

                return bank, cash;
            }else if(withdrawl > bank){
                cout << "You have entered an amount higher than the amount in your account." << endl;
                cout << "Would you like to enter a different amount?" << endl;
                    cin >> other2;
                    do
                    {    if(other2 == "Yes" || other2 == "yes" || other2 == "y"){
                            cont4 = 1;
                            return bank, cash;
                        }else if(other2 == "No" || other2 == "no" || other2 == "n"){
                            cont4 = 1;
                            return bank, cash;
                        }else{
                            cout << "Invalid choice" << endl;
                            cont4 = 0;
                        }
                    }while(cont4 == 0);

            }else if(withdrawl == bank){
                cout << "Warning!" << endl;
                cout << "Your withdrawl of $" << withdrawl << " will set your bank to $0." << endl << endl;

                do{
                    cout << "Would you like to proceed?" << endl;
                    cout << "Yes or No: ";
                        cin >> proceed2;
                        cout << endl;
                    if(proceed2 == "Yes" || proceed2 == "yes" || proceed2 == "y"){
                        cont5 = 1;

                        cout << "Your withdrawl of $" << withdrawl << " has been processed." << endl << endl;

                        bank = bank - withdrawl;

                        cash = cash + withdrawl;

                        return bank, cash;

                    }else if(proceed2 == "No" || proceed2 == "no" || proceed2 == "n"){
                        cont5 = 1;
                        return bank, cash;
                    }else{
                        cout << "Invalid Response" << endl;
                        cont5 = 0;
                    }
                }while(cont5 == 0);

            }else{
                cout << "Your withdrawl of $" << withdrawl << " has been processed." << endl << endl;

                bank = bank - withdrawl;

                cash = cash + withdrawl;

                return bank, cash;
            }
        };
};
    
int main()
{
    cout << endl;

    string response;
    string doWhat;
    string usercheck;
    string passcheck;
    string again;
    double deposit;
    double withdrawl;
    int dex = 1;
    int checkdex;
    int dex2;
    bool end;
    bool end2;
    bool end4;
    bool cont;
    bool stop = false;
    Person num[8000] = {};

    for(int index = 1; stop == false; index ++)
    {
        dex2 = index;

            cout << "Hello, I am the Bank." << endl;
                cout << "Welcome!" << endl << endl;

            cout << "Enter your first name only: ";
            num[index];
            cin >> num[index].name;
            cout << endl;

            cout << "Hello " << num[index].name << ", your account number is: " << dex2 << endl<<endl;

            cout << "To finish setting up your account enter a username and password to secure it." << endl;
                cout << "Create a username: "; cin >> num[index].username;
                //cout << endl;
                cout << "Create a password: "; cin >> num[index].password; 

            cout << endl << "First I will need some information" << endl;

                cout << "How much is in your bank currently?" << endl << "$";
                cin >> num[index].bank;

                cout << "How much cash do you have on hand currently?" << endl << "$";
                cin >> num[index].cash;
            
            cout << endl << "Thank you!" << endl << endl;
            
            do
            {
                cout << "How can I help " << num[index].name << "?" << endl;
                    cout << "Type a response:   Withdrawl   Deposit   Cancel" << endl;
                    cin >> response;
                    cout << endl;

                if(response == "Deposit" || response == "d" || response == "deposit")
                {
                    cout << num[index].name << ", you chose: Deposit" << endl;
                        cout << "How much would you like to deposit?" << endl;
                        cout << "$";
                    cin >> deposit; 
                        num[index].aDeposit(deposit);
                    cout << "Your current standing is: " << endl;
                    cout << "Bank account: $" << num[index].bank << endl;
                    cout << "Cash on hand: $" << num[index].cash << endl << endl;

                    cont = true;
                    
                } else if(response == "Withdrawl" || response == "w" || response == "withdrawl")
                {
                    cout << num[index].name << ", you chose to make a withdrawl." << endl << endl;
                        cout << "There is currently $" << num[index].bank << " in your bank account" << endl;
                        cout << "How much would you like to withdrawl?" << endl;
                    cin >> withdrawl;
                        num[index].aWithdrawl(withdrawl);
                    
                    cout << "Your current standing is: " << endl;
                    cout << "Bank account: $" << num[index].bank << endl;
                    cout << "Cash on hand: $" << num[index].cash << endl << endl;

                    cont = true;
                }else if(response == "Cancel" || response == "c" || response == "cancel")
                {
                    cout << "Cancelled" << endl;

                    cont = false;
                }else if(response == "Transfer" || response == "t" || response == "transfer"){
                    cout << num[index].name << " you chose to transer money." << endl;
                    cout << "Which account number would you like to transfer to?";
                }else{
                    cout << "Invalid response" << endl;

                    cont = true;
                }
            } while(cont == true);
            
            do
            {
            cout << "Would you like to: " << endl << endl;
            cout << "If you would like to review an account enter 1" << endl;
            cout << "If you would like to create an account enter 2" << endl;
            cout << "If you would like to close the program enter 3" << endl;
                cin >> doWhat;

                if(doWhat == "1"){

                    do                        
                     {   cout << "Type the account number of the account you would like to review: ";
                            cin >> checkdex;
                            cout << endl;

                            cout << "Enter your username: "; cin >> usercheck;
                                cout << endl;
                            cout << "Enter your password: "; cin >> passcheck;

                                if(usercheck == num[checkdex].username && passcheck == num[checkdex].password){

                                    cout << "Correct" << endl<<endl;
                                    cout << "Account name: " << num[checkdex].name << endl;
                                    cout << "Account number: " << checkdex << endl;
                                    cout << "Bank: $" << num[checkdex].bank << endl;
                                    cout << "Cash: $" << num[checkdex].cash << endl;

                                    end2 = true;
                                    end = true;

                                }else if(usercheck != num[checkdex].username || passcheck != num[checkdex].password){

                                    cout << "Either your username or password is incorrect!" << endl;
                                    do{
                                        cout << "Would you like to try again?" << endl;
                                        cout << "Yes or no: ";
                                            cin >>  again;

                                                if(again == "Yes" || again == "y" || again == "yes"){
                                                    end = false;
                                                    end4 = true;
                                                    cout << endl;
                                                }else if(again == "No" || again == "no" || again == "n"){
                                                    end = true;
                                                    end4 = true;
                                                    cout << endl;
                                                }else{
                                                    cout << "Invalid response." << endl;
                                                    end4 = false;
                                                }
                                    }while(end4 == false);

                                    end2 = true;
                                    end = false;
                                }else{

                                    cout << "Invalid answer." << endl;
                                    cout << "Try again." << endl;
                                    end2 = true;
                                    end = false;
                                }
                     }while(end == false);

                    stop = false;

                }else if(doWhat == "2"){
                    end2 = false;
                    stop = false;
                }else if(doWhat == "3"){
                    end2 = false;
                    stop = true;
                }else{
                    cout << "Invalid response" << endl;
                    end2 = true;
                }
            }while(end2 == true);

    }

    return 0;
}