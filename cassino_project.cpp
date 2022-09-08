// cassino_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int casino_number;
int number, pay;
int casinobill;
void buy()
{
 
    cout << "every 10$ is one casino tickets";
    cout << "\t\t\t----------------------------------------------\n";
    cout << "how much money you enter:";
    cin >> pay;
    casinobill =casinobill+ (pay / 10);
    cout << "casino bill puase secsacfully you have" <<" " <<casinobill << "casino bill" << endl;
    

}
void game()
{
    if (casinobill != 0)
    {
        
        char play;     
        cout << "t1. Choose any number between 1 to 10n" << endl;
        cout << "t2. If you say true number you will get 2 casino bill" << endl;
        cout << "t3. If you say wrong number you will lose 1 casino bill " << endl;
        cout << "\t\t\t----------------------------------------------\n";
        casino_number = rand() % 10 + 1;
        cout << "enter the number:";
        cin >> number;

        if (number == casino_number)
        {
            casinobill = casinobill + 2;
            cout << "congratulation! you guess the true number" <<" " << "your casion bills is:" << casinobill << endl;
            cout << "do you want to play again y/n";
            cin >> play;
            cout << endl;
            if (play == 'y')
            {
                game();
            }
        }
        else
        {
            cout << "the number is:" << casinobill<< endl;
            casinobill = casinobill - 1;
            cout << "sorry you guess the wrong number" <<" " << "your casion bills is" << casinobill << endl;
            cout << "do you want to play again y/n";
            cin >> play;
            cout << endl;
            if (play == 'y')
            {
                game();
                
            }
            

        }
    }
    else
    {
        cout << "sorry not enoght casino bills" << endl;


        
    }


}



int main()
{
    char ok = 'y';
    while (ok != 'n')
    {
        char conti;
      
        char c = 'y';
        cout << "welcome to casino!" << endl;
        cout << "\t\t\t----------------------------------------------\n";
        buy();
      
        game();
        cout << "do want to contionu or exit";
        cin >> conti;
        if(conti == 'y')
        {
            cout << "do you want to buy some tickets y/n" << endl;
            cin >> c;
            if (c == 'y')
            {
                buy();
                game();
            }
            else
                game();



        }
        else
        {
            int money;
            money = casinobill * 10;
            cout << "\t\t\t----------------------------------------------\n";
            cout << "your casion bills is 0" << endl;
            cout << "you get $" << money << endl;
            cout << "have a nice day @& RAdin_casino";
            ok = 'n';
        }

    }

    
   
    
    





}


