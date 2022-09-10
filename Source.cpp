#include <iostream>
#include <vector>
#include<string>
using namespace std;
//var
string user="admin";
string pas="123";
vector<pair<string, string>>target;
int sit[20];
string busname[20];

int s = 0;
int n = 0;
int money[20];
string avaliables[56];
//class
class admin {

public:
	void ticket() {
		string w, s; int aw;
	
		
		cout << "enter where:";
		cin >> w;
		cout << endl;
		cout << "enter to:";
		cin >> s;
		
		target.push_back(make_pair(w,s));
		cout << endl;

		cout << "enter how many sit the avaliable:";
		
		cin >> aw;

		cout << endl;
	

		cout << "enter the bus name:";
		cin >> busname[n];
		cout << endl;
		sit[n] = aw;
		string sitting="";
		for (int j = 0; j <aw; j++) {
			sitting=sitting+to_string(j);
			
		

		}
		avaliables[n] = sitting;
		cout << "cose:$";


		cin >> money[n];
		cout << endl;
		n++;
		cout << "ticket added susafully";
		system("cls");

		admin();
		







		


	}
	int ch;
	admin() {
		cout << "Welcome admin" << endl;
		cout << "1.add tickect" << endl;
		cout << "2.exit" << endl;
		cout << "1/2:";
		cin >> ch;
		cout << endl;
		if (ch == 1)
		{
			ticket();

		}
		if (ch == 2)
		{
			cout << "Exit";
		
			
		}
	}



};

class bus {
public:
	string wh, t, bu;
	int bn;
	
	bus() {
		cout << "welcome!!" << endl;
		cout << "enter wh:";
		cin >> wh;
		cout << endl;
		cout << "enter to:";
		cin >> t;
		cout << endl;
		cout << "/////////////////////////////" << endl;
		for (int i = 0; i<target.size(); i++)
		{
			if (target[i].first == wh)
			{
				if (target[i].second == t)
				{
					
					cout << "bus name:" << busname[i]<<" "<< endl;
					cout << "choise the bus name:" << endl;
					cin >> bu;
					cout << endl;
					cout << "avaliable seats" << endl;
					int m;
					for (int q = 0; q < sit[i];q++) {
						if (avaliables[i][q] != '0') {
							if (q > 10&&20>q)
							{
								int g = q - 10;

								cout << avaliables[i][q] << avaliables[i][g] << " " << " is" << "empty" << endl;

							}
							else
							{
								cout << avaliables[i][q] << " " << " is" << "empty" << endl;
							}



						}
					
						
						

							
							



						

						
						
						
						
						
						
						

					}
					cout << "choise your seat:" << endl;
					cin >> bn;
					string t = to_string(bn-10);
					char const* n_char = t.c_str();

					string temp = to_string(bn/10);
					char const* n_temp = t.c_str();
				
					
					int tt = bn - 10;
					for (int qq = 0; qq < sit[i]; qq++)
					{
						if (avaliables[i][qq] == *n_char)
						{
							avaliables[i][qq] = '0';
							break;

						}
						else if (avaliables[i][qq] && avaliables[i][qq+tt] ==  *n_temp)
						{
							avaliables[i][qq] = '0';
							avaliables[i][qq + tt] = '0';
								

						}


						
					

							
						
						
					}
			
						


					


					
					cout << "/////////////////////////////////////////////" << endl;
					cout << "bus name:" << " " << bu << "choise:" <<" "<< bn << endl;
					cout << "price is:" << "$"<<money[i] << endl;
					string credit;
					cout << "enter your credit number:";
					cin >> credit;
					cout << endl;
					cout << "you pouse the ticket susafully" << endl;
					s++;
					if (target.size() == 0) {
						break;

					}
				
					


				}

			}
		}


	}

};
void main() {
	int chose=0;
	while (chose!=3)
	{
		cout << endl;
		cout << "welcome partner!!!!!!" << endl;
		cout << "1.admin" << endl;
		cout << "2.buy a ticket" << endl;
		cout << "3.exit" << endl;
		cout << "1/2/3:";
		cin >> chose;
		cout << endl;
		if (chose == 1)
		{
			string u, p;
			system("cls");
			cout << "enter the username:";
			cin >> u;
			cout << endl;
			cout << "enter the password:";
			cin >> p;
			if (user == u) {
				if (pas == p) {
					admin s;

				}

			}
		}
		else if (chose == 2)
		{
			system("cls");
			bus s;
		}
	}




}