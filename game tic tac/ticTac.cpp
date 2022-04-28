1#include<iostream>
#include<ctime>
using namespace std;
void mane_manue();
void credit();
void instruction();
bool player1_turn();
bool player2_turn();
bool toss();
void draw();
void win1();
void win2();
int i, j, k=0;
bool p1 = false, p2 = false;
char arr[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
void mape(char arr[][3]);
int main()
{
 mane_manue();
}
void mane_manue()
{
 system("cls");
 int v1;
 system("color 64");
 cout << "\n\n\n\n\n\n\t\t\t\t---> Option 1 : Play Game\n\n";
 cout << "\t\t\t\t---> Option 2 : Credits\n\n";
 cout << "\t\t\t\t---> Option 3 : Instruction\n\n";
 cout << "\t\t\t\t---> Option 4 : Exit\n\n";
 cout << "\n\t\t\t\t---> Enter The Option : ";
 cin >> v1;
 switch (v1)
 {
 case 1:
 int v3;
 v3=toss();
 if (v3 == 1)
 {
 player1_turn();
 }
 else
 {
 player2_turn();
 }
 break;
 case 2:
 credit();
 break;
 case 3:
 instruction();
 break;
 case 4:
 exit(1);
 break;
 }
}
void credit()
{
 system("cls");
 char a1;
 system("color 03");
 cout << "\n\n\n\n\n\n\t\t\t\t---> Name : Seemant Kamlapuri\n\n";
 cout << "\t\t\t\t---> Degree : Btech Software Engineering\n\n";
 cout << "\t\t\t\t---> Press B or b for back to Main Manue : ";
 cin >> a1;
 if (a1 == 'B' || a1 == 'b')
 {
 mane_manue();
 }
}
void instruction()
{
 system("cls");
 char a2;
 system("color 06");
 cout << "\n\n\n\n\n\n\t\t\t\t---> Its a 2 player game.\n\n";
 cout << "\t\t\t\t---> The game is played on a 3 by 3 square grid.\n\n";
 cout << "\t\t\t\t---> One player picks the (X) mark and the other is (O) mark.\n\n";
 cout << "\t\t\t\t---> You only get one turn for one mark to put in empty squares.\n\n";
 cout << "\t\t\t\t---> Which ever player gets 3 of their marks, wins.\n\n";
 cout << "\t\t\t\t---> The marks can be made diagonally, vertically or horizontally.\n\n";
 cout << "\t\t\t\t---> Press B or b for back to Main Manue : ";
 cin >> a2;
 if (a2 == 'B' || a2 == 'b')
 {
 mane_manue();
 }
}
bool toss()
{
 int i;
 srand(time(0));
 i = rand() % 2;
 return i;
}
void mape(char arr[][3])
{
 cout << endl;

 cout << "     |     |     " << endl;
 cout << "  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;

 cout << "_____|_____|_____" << endl;
 cout << "     |     |     " << endl;

 cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;

 cout << "_____|_____|_____" << endl;
 cout << "     |     |     " << endl;

 cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;

 cout << "     |     |     " << endl << endl;
}
bool player1_turn()
{
 system("cls");
 system("color 02");
 mape(arr);
 int v2;
 cout << endl;
 cout << "Enter the position number(PLAYER_1) : ";
 cin >> v2;
 while (p1 == false)
 {
 if (v2 == 1)
 {
 if (arr[0][0] == '1')
 {
 arr[0][0] = 'X';
 p1 = true;
 k++;
 if ((arr[0][0] == 'X' && arr[0][1] == 'X') && arr[0][2] == 'X')
 {
 win1();
 }
 else if ((arr[1][0] == 'X' && arr[2][0] == 'X')&& arr[0][0] == 'X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[2][2] == 'X')&& arr[0][0] == 'X')
 {
 win1();
 }
 }
 else if (arr[0][0] == 'O')
 {
 player1_turn();
 }
 else if (arr[0][0] == 'X')
 {
 player1_turn();
 }
 cout << endl;
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 2)
 {
 if (arr[0][1] == '2')
 {
 arr[0][1] = 'X';
 p1 = true;
 k++;
 if ((arr[0][0] == 'X' && arr[0][2] == 'X')&&arr[0][1]=='X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[2][1] == 'X')&& arr[0][1] == 'X')
 {
 win1();
 }
 }
 else if (arr[0][1] == 'O')
 {
 player1_turn();
 }
 else if (arr[0][1] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 3)
 {
 if (arr[0][2] == '3')
 {
 arr[0][2] = 'X';
 p1 = true;
 k++;
 if ((arr[0][0] == 'X' && arr[0][1] == 'X')&& arr[0][2] == 'X')
 {
 win1();
 }
 else if ((arr[1][2] == 'X' && arr[2][2] == 'X')&& arr[0][2] == 'X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[0][0] == 'X')&& arr[0][2] == 'X')
 {
 win1();
 }
 }
 else if (arr[0][2] == 'O')
 {
 player1_turn();
 }
 else if (arr[0][2] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 4)
 {
 if (arr[1][0] == '4')
 {
 arr[1][0] = 'X';
 p1 = true;
 k++;
 if ((arr[1][1] == 'X' && arr[1][2] == 'X')&&arr[1][0]=='X')
 {
 win1();
 }
 else if ((arr[0][0] == 'X' && arr[2][0] == 'X') && arr[1][0] == 'X')
 {
 win1();
 }
 }
 else if (arr[1][0] == 'O')
 {
 player1_turn();
 }
 else if (arr[1][0] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 5)
 {
 if (arr[1][1] == '5')
 {
 arr[1][1] = 'X';
 p1 = true;
 k++;
 if ((arr[0][1] == 'X' && arr[2][1] == 'X')&&arr[1][1]=='X')
 {
 win1();
 }
 else if ((arr[1][0] == 'X' && arr[1][2] == 'X') && arr[1][1] == 'X')
 {
 win1();
 }
 else if ((arr[0][0] == 'X' && arr[2][2] == 'X') && arr[1][1] == 'X')
 {
 win1();
 } 
 else if ((arr[0][2] == 'X' && arr[2][0] == 'X') && arr[1][1] == 'X')
 {
 win1();
 }
 }
 else if (arr[1][1] == 'O')
 {
 player1_turn();
 }
 else if (arr[1][1] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 6)
 {
 if (arr[1][2] == '6')
 {
 arr[1][2] = 'X';
 p1 = true;
 k++;
 if ((arr[0][2] == 'X' && arr[2][2] == 'X')&&arr[1][2]=='X')
 {
 win1();
 }
 else if ((arr[1][0] == 'X' && arr[1][1] == 'X') && arr[1][2] == 'X')
 {
 win1();
 }
 }
 else if (arr[1][2] == 'O')
 {
 player1_turn();
 }
 else if (arr[1][2] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 7)
 {
 if (arr[2][0] == '7')
 {
 arr[2][0] = 'X';
 p1 = true;
 k++;
 if ((arr[0][0] == 'X' && arr[1][0] == 'X')&&arr[2][0]=='X')
 {
 win1();
 }
 else if ((arr[2][1] == 'X' && arr[2][2] == 'X') && arr[2][0] == 'X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[0][2] == 'X') && arr[2][0] == 'X')
 {
 win1();
 }
 }
 else if (arr[2][0] == 'O')
 {
 player1_turn();
 }
 else if (arr[2][0] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 =false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 8)
 {
 if (arr[2][1] == '8')
 {
 arr[2][1] = 'X';
 p1 = true;
 k++;
 if ((arr[2][0] == 'X' && arr[2][2] == 'X')&&arr[2][1]=='X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[0][1] == 'X') && arr[2][1] == 'X')
 {
 win1();
 }
 }
 else if (arr[2][1] == 'O')
 {
 player1_turn();
 }
 else if (arr[2][1] == 'X')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 = false;
 player2_turn();
 return p2;
 }
 }
 else if (v2 == 9)
 {
 if (arr[2][2] == '9')
 {
 arr[2][2] = 'X';
 p1 = true;
 k++;
 if ((arr[2][1] == 'X' && arr[2][0] == 'X')&&arr[2][2]=='X')
 {
 win1();
 }
 else if ((arr[1][2] == 'X' && arr[0][2] == 'X') && arr[2][2] == 'X')
 {
 win1();
 }
 else if ((arr[1][1] == 'X' && arr[0][0] == 'X') && arr[2][2] == 'X')
 {
 win1();
 }
 }
 else if (arr[2][2] == 'X')
 {
 player1_turn();
 }
 else if (arr[2][2] == 'O')
 {
 player1_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p1 == true)
 {
 p2 =false;
 player2_turn();
 return p2;
 }
 }
 }
}
bool player2_turn()
{
 system("cls");
 system("color 02");
 mape(arr);
 int v3;
 cout << endl;
 cout << "Enter the position number(PLAYER_2) : ";
 cin >> v3;
 while (p2 == false)
 {
 if (v3 == 1)
 {
 if (arr[0][0] == '1')
 {
 arr[0][0] = 'O';
 p2 = true;
 k++;
 if ((arr[0][1] == 'O' && arr[0][2] == 'O') && arr[0][0] == 'O')
 {
 win2();
 }
 else if ((arr[1][0] == 'O' && arr[2][0] == 'O') && arr[0][0] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[2][2] == 'O') && arr[0][0] == 'O')
 {
 win2();
 }
 }
 else if (arr[0][0] == 'O')
 {
 player2_turn();
 }
 else if (arr[0][0] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 2)
 {
 if (arr[0][1] == '2')
 {
 arr[0][1] = 'O';
 p2 = true;
 k++;
 if ((arr[0][0] == 'O' && arr[0][2] == 'O') && arr[0][1] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[2][1] == 'O') && arr[0][1] == 'O')
 {
 win2();
 }
 }
 else if (arr[0][1] == 'O')
 {
 player2_turn();
 }
 else if (arr[0][1] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 3)
 {
 if (arr[0][2] == '3')
 {
 arr[0][2] = 'O';
 p2 = true;
 k++;
 if ((arr[0][0] == 'O' && arr[0][1] == 'O') && arr[0][2] == 'O')
 {
 win2();
 }
 else if ((arr[1][2] == 'O' && arr[2][2] == 'O') && arr[0][2] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[2][0] == 'O') && arr[0][2] == 'O')
 {
 win2();
 }
 }
 else if (arr[0][2] == 'O')
 {
 player2_turn();
 }
 else if (arr[0][2] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 4)
 {
 if (arr[1][0] == '4')
 {
 arr[1][0] = 'O';
 p2 = true;
 k++;
 if ((arr[1][1] == 'O' && arr[1][2] == 'O') && arr[1][0] == 'O')
 {
 win2();
 }
 else if ((arr[0][0] == 'O' && arr[2][0] == 'O') && arr[1][0] == 'O')
 {
 win2();
 }
 }
 else if (arr[1][0] == 'O')
 {
 player2_turn();
 }
 else if (arr[1][0] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 5)
 {
 if (arr[1][1] == '5')
 {
 arr[1][1] = 'O';
 p2 = true;
 k++;
 if ((arr[0][1] == 'O' && arr[2][1] == 'O') && arr[1][1] == 'O')
 {
 win2();
 }
 else if ((arr[1][0] == 'O' && arr[1][2] == 'O') && arr[1][1] == 'O')
 {
 win2();
 }
 else if ((arr[0][0] == 'O' && arr[2][2] == 'O') && arr[1][1] == 'O')
 {
 win2();
 }
 else if ((arr[0][2] == 'O' && arr[2][0] == 'O') && arr[1][1] == 'O')
 {
 win2();
 }
 }
 else if (arr[1][1] == 'O')
 {
 player2_turn();
 }
 else if (arr[1][1] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 6)
 {
 if (arr[1][2] == '6')
 {
 arr[1][2] = 'O';
 p2 = true;
 k++;
 if ((arr[0][2] == 'O' && arr[2][2] == 'O') && arr[1][2] == 'O')
 {
 win2();
 }
 else if ((arr[1][0] == 'O' && arr[1][1] == 'O') && arr[1][2] == 'O')
 {
 win2();
 }
 }
 else if (arr[1][2] == 'O')
 {
 player2_turn();
 }
 else if (arr[1][2] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 7)
 {
 if (arr[2][0] == '7')
 {
 arr[2][0] = 'O';
 p2 = true;
 k++;
 if ((arr[0][0] == 'O' && arr[1][0] == 'O') && arr[2][0] == 'O')
 {
 win2();
 }
 else if ((arr[2][1] == 'O' && arr[2][2] == 'O') && arr[2][0] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[0][2] == 'O') && arr[2][0] == 'O')
 {
 win2();
 }
 }
 else if (arr[2][0] == 'O')
 {
 player2_turn();
 }
 else if (arr[2][0] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 8)
 {
 if (arr[2][1] == '8')
 {
 arr[2][1] = 'O';
 p2 = true;
 k++;
 if ((arr[2][0] == 'O' && arr[2][2] == 'O') && arr[2][1] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[0][1] == 'O') && arr[2][1] == 'O')
 {
 win2();
 }
 }
 else if (arr[2][1] == 'O')
 {
 player2_turn();
 }
 else if (arr[2][1] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 else if (v3 == 9)
 {
 if (arr[2][2] == '9')
 {
 arr[2][2] = 'O';
 p2 = true;
 k++;
 if ((arr[2][1] == 'O' && arr[2][0] == 'O') && arr[2][2] == 'O')
 {
 win2();
 }
 else if ((arr[1][2] == 'O' && arr[0][2] == 'O') && arr[2][2] == 'O')
 {
 win2();
 }
 else if ((arr[1][1] == 'O' && arr[0][0] == 'O') && arr[2][2] == 'O')
 {
 win2();
 }
 }
 else if (arr[2][2] == 'O')
 {
 player2_turn();
 }
 else if (arr[2][2] == 'X')
 {
 player2_turn();
 }
 if (k == 9)
 {
 draw();
 return 0;
 }
 cout << endl;
 if (p2 == true)
 {
 p1 = false;
 player1_turn();
 return p1;
 }
 }
 }
}
void win1()
{
 system("cls");
 system("color 60");
 cout << "\n\n\n\n\n\n\t\t\t\t---> PLAYER -----> 1 have won the game\n";
 exit(1);
}
void win2()
{
 system("cls");
 system("color 30");
 cout << "\n\n\n\n\n\n\t\t\t\t---> PLAYER -----> 2 have won the game\n";
 exit(1);
}
void draw()
{
 system("cls");
 system("color 56");
 cout << "\n\n\n\n\n\n\t\t\t\t---> Sorry! ";
 cout << "This game is Draw\n\n\n";
 exit(1);
}
