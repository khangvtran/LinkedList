/*
 * Anagram.cpp
 *
 *  Khang Vinh Tran
 *  CIS 22C, Lab2
 *
 */



/*
# include "List.h"
# include <string>
# include <cstring>
# include <cstdlib>
# include <iomanip>



int main()
{
	cout << "Welcome to the Anagram Arranger!" << endl <<  endl;

	// get the word
	string word;
	cout << "Please enter a word: ";
	getline(cin, word);
	int wordLength = word.length();

	// create the char list
	List<char> L;
	for (int i = 0; i < wordLength; i++) L.insertStop(word[i]);

	// the main working code
	string keepRearranging;
	do
	{
		cout << endl;
		// get the position
		int pos1, pos2;
		string confirm;
		do
		{
			L.printNumberedList();
			cout << "Enter the position numbers of the two letters you wish to swap: ";
			cin >> pos1 >> pos2;
			// check Validity for user inputs
			while (pos1 < 0 || pos1 > wordLength || pos2 < 0 || pos2 >wordLength || pos1 > pos2 || pos1 == pos2 )
			{
				cout << endl << "Invalid Entry!!" << endl << endl;
				L.printNumberedList();
				cout << "Enter the position numbers of the two letters you wish to swap: ";
				cin >> pos1 >> pos2;
			}

			cout << endl;
			L.print();
			for (int i = 1; i<=wordLength; i++)
			{
				if (i == pos1 || i == pos2) cout << "^ ";
				else cout << "  ";
			}
			cout << endl;
			cout << endl << "Are these the letters you wish to swap? (y/n): ";
			//cin >> ws;
			//getline(cin,confirm);
			cin >> confirm;
		} while (confirm != "Y" & confirm != "y" & confirm != "yes" & confirm != "Yes");



		// get the two character
		L.pointIterator();
		for (int i = 1; i< pos1; i++) L.advanceIterator();
		char char1 = L.getIterator();
		//cout << char1 << endl;
		L.pointIterator();
		for (int i = 1; i< pos2; i++) L.advanceIterator();
		char char2 = L.getIterator();
		//cout << char2 << endl;

		// insertIterator() and removeIterator()
		L.pointIterator();
		for (int i = 1; i< pos1; i++) L.advanceIterator();
		L.insertIterator(char2);
		L.removeIterator();

		L.pointIterator();
		for (int i = 1; i < pos2; i++) L.advanceIterator();
		L.insertIterator(char1);
		L.removeIterator();

		// print out after swapped list
		cout << endl << "The new word is: ";
		L.print();
		cout << endl << "Want to keep rearranging? (y/n): ";
		cin >> keepRearranging;
	} while( keepRearranging == "Y" || keepRearranging == "y" || keepRearranging == "yes" || keepRearranging == "Yes");


	cout << endl << "Bye!" << endl;
	return 0;
}


*/
