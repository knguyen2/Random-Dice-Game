#include <iostream>
#include <time.h> // has to be here in order for the random number generator function srand() to work
using namespace std;

//Declare constant variables
const int NUMSIDES = 6; 
const int NUMROLLS = 14; //Deciding how many times the dice roll 

//Function Declaration
int rollDice();


int main()
{

	int dice[NUMROLLS];
	int i;

	for (i = 0; i < NUMROLLS; i++) 
	{
		dice[i] = rollDice();
	}


	//Print our the dice rolls
	for (i = 0; i < NUMROLLS; i++) 
	{
		cout << " dice: " << i+1 << " " << dice[i] << endl;
	}


	system("pause");
	return 0;
}

int rollDice() 
{

	int roll; 
	//Keep track of how many times the function is called
	static int nCalls = 0;
	
	if (nCalls == 0)
		srand(time(NULL)); //if the condition inside if() is meet, this function will be seeded
						   //seeding is: passing a random value with time because it's a changing value

	nCalls++;

	roll = (rand() % NUMSIDES) + 1;
	return roll;


}