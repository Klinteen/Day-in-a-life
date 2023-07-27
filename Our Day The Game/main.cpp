#include <iostream>
#include <windows.h>
#include <string>

void HUD();
void dayPlanning();
void firstAM();
void secondAM();
void wakeUp();
void firstAction();
void final();

std::string name = " ", age = " ", sex = " ";
int funLevel = 0, xp = 0;

//std::string scheduleIdeas[] = { "sleep", "drink", "smoke", "study", "work" };
//int currentScheduleIdeas = 5;
//std::string currentPlan = " ";

int main() {

	funLevel = 0;
	xp = 0;


	// basic info
	std::cout << "Enter Character Name: ";
	std::cin >> name;

	std::cout << "Enter Character Age: ";
	std::cin >> age;

	std::cout << "Enter Character Gender: ";
	std::cin >> sex;

	// trying something new
	std::cout << "Creating character.\n";
	Sleep(200);
	system("cls");

	std::cout << "Creating character..\n";
	Sleep(200);
	system("cls");

	std::cout << "Creating character...\n";
	Sleep(200);
	system("cls");

	HUD();
	dayPlanning();

	system("pause");

	return 0;
}

void HUD() {
	Sleep(500);
	system("cls");
	std::cout << "\n";
	std::cout << " DAY IN A LIFE";
	std::cout << "\n";
	std::cout << "Name: " << name << "\nAge: " << age << "\nGender: " << sex << std::endl;
}


void dayPlanning() {

	int yourAnswer;
	std::cout << "\n";
	std::cout << "1. start your day \n";
	std::cout << "\n";


	std::cin >> yourAnswer;

	if (yourAnswer == 1) {

		std::cout << "\n";
		std::cout << "Your day is about to start \n" << "It is 00:00 and you have no idea what to do? \n";
		std::cout << "\n";
		firstAM();

	}

	else {
		std::cout << "Invalid Number";
		Sleep(500);
		dayPlanning();
	}
}



void firstAM() {

	int morningAnswer;

	std::cout << "\n";
	std::cout << "1. Keep sleeping \n";
	std::cout << "2. wake up";
	std::cout << "\n";

	std::cout << "\n";
	std::cin >> morningAnswer;
	std::cout << "\n";

	if (morningAnswer == 1) {
		std::cout << name << " decides to keep sleeping \n" << "After 15 minutes, " << name << "'s alarm rings again \n";
		std::cout << "\n";
		secondAM();

	}
	else if (morningAnswer == 2) {
		std::cout << name << " wakes up and refreshes. Handles personal care and realizes he still has a long way into the night. \n Apparently the time now is 00:30 \n Looking at the clock, wondering what to do next \n";
		std::cout << "\n";
		wakeUp();
	}
	else {
		std::cout << "Invalid Number";
		std::cout << "\n";
		Sleep(500);
		firstAM();
	}
}

void secondAM() {

	int secondAnswer;

	std::cout << "1. wake up \n";
	std::cout << "2. keep sleeping";
	std::cout << "\n";

	std::cin >> secondAnswer;
	std::cout << "\n";

	if (secondAnswer == 1) {
		std::cout << name << " wakes up and refreshes. Handles personal care and realizes he still has a long way into the night. \n Apparently the time now is 00:30 \n Looking at the clock, wondering what to do next \n";
		std::cout << "\n";
		wakeUp();

	}
	else if (secondAnswer == 2) {
		std::cout << name << " you have decided to sleep longer and you would have to restart the game";
		std::cout << "\n";
		Sleep(1000);
		firstAM();

	}
	else {
		std::cout << "Invalid Number";
		std::cout << "\n";
		Sleep(500);
		secondAM();
	}
}

void wakeUp() {

	int wakingAnswer;

	std::cout << " Lots of ideas go through your head, and then it clicks. You could either" << std::endl;
	std::cout << "\n";
	std::cout << "1. Go for a run \n";
	std::cout << "2. Do a home work out";
	std::cout << "\n";
	std::cin >> wakingAnswer;
	std::cout << "\n";

	if (wakingAnswer == 1) {

		int secondWakingAnswer;

		std::cout << "Preparing for the run, you check the weather and realize \n";
		std::cout << "\n";
		std::cout << "1. The weather is perfect \n";
		std::cout << "2. You'd have to stay inside \n";
		std::cout << "\n";

		std::cin >> secondWakingAnswer;

		std::cout << "\n";

		int firstChoice;

		if (secondWakingAnswer == 1) {
			std::cout << name << " goes for the run. After an hour, comes back home." << std::endl;
			std::cout << "\n You hop in the shower, playing your favorite tracks and have the next best bathe. \n Making a plan for the day, you want to pick the next set of activities for the morning, but you have to pick between " << std::endl;
			std::cout << "1. Make a snack \n";
			std::cout << "2. Study";
			std::cout << "\n";

			std::cin >> firstChoice;

			if (firstChoice == 1) {
				std::cout << name << " wants to make a snack, but then can't cook. \n Ponders on who to call for help but realises there is no one. \n Dresses up and heads out to the store to get a snack. \n After much options he makes his final choice to groceries and some floating berries. \n Goes home and feasts on the snacks." << std::endl;
				std::cout << "\n";
				final();
			}
			else if (firstChoice == 2) {
				std::cout << "Goes to the shelf, there are lots of books to choose from and you suffer from being indecisive.\n Finally picks a book and reads for just an hour before getting bored. \n You suffer from having low attention span.";
				std::cout << "\n";
				final();
			}
			else {
				std::cout << "Invalid Number";
				std::cout << "\n";
				Sleep(500);
				wakeUp();
			}
		}
		else if (secondWakingAnswer == 2) {

			std::cout << "decides to stay inside and do a home work out because the weather isn't conducive for a run.";
			std::cout << "\n";
			firstAction();
		}
		else {
			std::cout << "Invalid Number";
			std::cout << "\n";
			Sleep(500);
			wakeUp();
		}

	}
	else if (wakingAnswer == 2) {
		firstAction();
	}
	else {
		std::cout << "\n";
		std::cout << "Invalid Number";
		std::cout << "\n";
		Sleep(500);
		wakeUp();
	}
}

void firstAction() {

	int firstChoice;

	std::cout << name << " checks youtube and finds some intensive work out\n. Decides to do a couple, but after an hour your body decides to give up. \n The intense work out has tired you out and makes you all sweaty. \n You hop in the shower, playing your favorite tracks and have the next best bathe. \n Making a plan for the day, you want to pick the next set of activities for the morning, but you have to pick between " << std::endl;
	std::cout << "1. Make a snack \n";
	std::cout << "2. Study";
	std::cout << "\n";

	std::cin >> firstChoice;

	if (firstChoice == 1) {
		std::cout << name << " wants to make a snack, but then can't cook. \n Ponders on who to call for help but realises there is no one. \n Dresses up and heads out to the store to get a snack. \n After much options he makes his final choice to groceries and some floating berries. \n Goes home and feasts on the snacks." << std::endl;
		std::cout << "\n";
		final();
	}
	else if (firstChoice == 2) {
		std::cout << "Goes to the shelf, there are lots of books to choose from and you suffer from being indecisive.\n Finally picks a book and reads for just an hour before getting bored. \n You suffer from having low attention span.";
		std::cout << "\n";
		final();
	}
	else {
		std::cout << "Invalid Number";
		std::cout << "\n";
		Sleep(500);
		firstAction();
	}

}

void final() {
	std::cout << "It is 3:00 am, and everywhere is literally dark.\n Crickets chirping, early morning prayers done. \n " << std::endl; std::cout << "Sleep has gone out of your eyes and you're staring into the abyss. \n Next proper activity is 6am and you want to pass the time." << std::endl;
	std::cout << "\n";
	std::cout << "Watch a movie or surf the net. \n Regardless, you pick your phone and after a while you check the time. \n It is 6:00 am" << std::endl;
}
