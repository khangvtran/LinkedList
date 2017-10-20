
/*
 * ListTest.cpp
 *
 *	Khang Vinh Tran
 *  CIS 22C, Lab2
*/


#include <iostream>
#include "List.h"
using namespace std;

# include <string>
# include <cstring>
# include <cstdlib>
# include <iomanip>

int main() {

    //instantiate two lists for testing purposes
    List<int> L1;
    List<int> L2;
    //Testing insertStart() and print()
    cout << "**Testing InsertStart**\n\n";
    cout << "Should print out an empty line: \n";
    L1.print(); //Should not print any message to the screen, just an empty line
    L1.insertStart(0);
    cout << "Should print out 0 and then move to a new line: \n";
    L1.print();
    for (int i = 1; i <= 10; i++) { //inserting the the values 1-10 into L1
        L1.insertStart(i);
    }
    L1.print();
    cout << endl;

    // Testing insertStop()
    cout << "**Testing insertStop**" << endl << endl;
    cout << "Should print out an empty line: \n";
    L2.print(); //Should not print any message to the screen, just an empty line
    L2.insertStop(0);
    cout << "Should print out 0 and then move to a new line: \n";
    L2.print();
    for (int i = 1; i <= 10; i++)
    	{
    		L2.insertStop(i);
    	}
    cout << "Should print out 10 9 8 7 6 5 4 3 2 1 0 and then move to a new line: \n";
    L2.print();
    cout << endl;

    // Testing removingStart()
    cout << "**Testing removeStart**" << endl << endl;
    List<int> L3;

    cout << "Test removeStart empty list. Should be declined" << endl;
    //L3.removeStart();

    cout << "Now insert 1 node, print out the list, removeStart, then print again" << endl;
    L3.insertStart(1);
    L3.print();
    L3.removeStart();
    L3.print();
    cout << "Now insert 2 node, print out the list, removeStart, then print again" << endl;
    L3.insertStart(1);
    L3.insertStart(2);
    L3.print();
    L3.removeStart();
    L3.print();

    // Testing removingStop()
    cout << "**Testing removeStop**" << endl << endl;
    List<int> L4;

    cout << "Test removeStop empty list. Should be declined" << endl;
    //L4.removeStart();

    cout << "Now insert 1 node, print out the list, removeStop, then print again. Should get empty line" << endl;
    L4.insertStop(1);
    L4.print();
    L4.removeStart();
    L4.print();
    cout << "Now insert 2 nodes, print out the list, removeStop, then print again. Should get only 1 data value" << endl;
    L4.insertStop(1);
    L4.insertStop(2);
    L4.print();
    L4.removeStart();
    L4.print();
    cout << endl;

    // Test the accessors
    cout << "**Test accesors**" << endl;
    	cout << "create empty linked list then getSize(), should return zero.Next, test isEmpty(), and we should get 1 (True that the list is empty). Lastly, test print(), should get empty line" << endl;
    List<string> L5;
    cout << L5.getSize() << endl;
    cout << L5.isEmpty() << endl;
    L5.print();
    cout << "Add 1 node, then getStart(), getStop(), we should both get a, which is the value added. Test isEmpty(), should get 0. Test getSize(), should get 1. Lastly, test print(), should get a" << endl;
    L5.insertStart("a");
    cout << L5.getStart() << endl;
    cout << L5.getStop() << endl;
    cout << L5.isEmpty() << endl;
    cout << L5.getSize() << endl;
    L5.print();
    cout << "Add another node, then getStart(), getStop(). It should print out a, then b, which are the two added values. Next, test isEmpty(), should get 0.Next, test getSize() and we should get 2. Lastly, test print(), should get a and b on a line" << endl;
    L5.insertStop("b");
    cout << L5.getStart() << endl;
    cout << L5.getStop() << endl;
    cout << L5.isEmpty() << endl;
    cout << L5.getSize() << endl;
    L5.print();
    cout << endl;

    // Test the Iterator
    cout << "**Test Iterator**" << endl;
    cout << "First, create a list, insert data into that list then print out." << endl;
    List<int> L6;
    for (int i = 1; i < 5; i++) L6.insertStop(i);
    L6.print();
    cout <<  "Next, Test offEnd(), should get 1 (true that iterator is pointing at NULL)" << endl;
    cout << L6.offEnd() << endl;
    cout << "Then test pointIterator(), follow by offEnd() again, should get 0 (false if iterator is pointing at NULL)" << endl;
    L6.pointIterator();
    cout << L6.offEnd() << endl;
    cout << "test getIterator() by print out the data value of the first node. Should get 1" << endl;
    cout << L6.getIterator() << endl;
    cout << "test advanceIterator() by advance it 3 times then print out the data. Should get 4, which is the last node" << endl;
    for (int i = 0; i<3; i++) L6.advanceIterator();
    cout << L6.getIterator() << endl;
    cout << "test reverseIterator() by reverse it twice and print out the data. Should get 2" << endl;
    for (int i = 0; i < 2; i++) L6.reverseIterator();
    cout << L6.getIterator() << endl;
    cout << endl;

    cout << "Test insertIterator(). Create a list with one node with data = 1. Print out the list. Should get 1" << endl;
    List<int> L7;
    L7.insertStart(1);
    L7.print();
    cout << "Point Iterator to that node, then insertIterator(2) to test the case where iterator node is end node. print out the list. Should get 1, 2" << endl;
    L7.pointIterator();
    L7.insertIterator(2);
    L7.print();
    cout << "insertIterator(3) to test the case where the iterator node is not end node. Print put the list. Should get 1 3 2" << endl;
    L7.insertIterator(3);
    L7.print();
    cout << "Print out the size of the list to see if the size++ condition has been enforced"<< endl;
    cout << L7.getSize() << endl;
    cout << endl;

    cout << "Test removeIterator()" << endl;
    cout << "Create a list with length 5. Print out the list" << endl;
    List<int> L8;
    for (int i = 1; i < 6; i++) L8.insertStop(i);
    L8.print();
    cout << "Case 1: pointIterator(), then removeIterator() to remove the first node. Should get 2 3 4 5" << endl;
    L8.pointIterator();
    L8.removeIterator();
    L8.print();
    cout << "The Iterator is now pointing to NULL. offEnd() to verify. Should get 1" << endl;
    cout << L8.offEnd() << endl;
    cout << "Case 2: pointIterator(), the advance Iterator 3 times. We now test removeIterator() at end nod then print. Should get 2 3 4" << endl;
    L8.pointIterator();
    for (int i = 0; i < 3; i++) L8.advanceIterator();
    L8.removeIterator();
    L8.print();
    cout << "Case 3: pointIterator() again, the advance it once. We now test removeIterator() at middle node. removeIterator() then print. Should get 2 4" << endl;
    L8.pointIterator();
    L8.advanceIterator();
    L8.removeIterator();
    L8.print();
    cout << "Remove one of the last two node using removeStart. Print the list, should get only 4." << endl;
    L8.removeStart();
    L8.print();
    cout << "Case 4: pointIterator() again. We now test removeIterator() at the only node. print the list, should get empty" << endl;
    L8.pointIterator();
    L8.removeIterator();
    L8.print();

    cout << "**Testing printNumberedList**" << endl;
    List<int> L9;
    cout << "print the empty list as blank line" << endl;
    L9.printNumberedList();
    cout << "Insert 11 to 20, then print out again" << endl;
    for (int i = 1; i <= 10; i++) L9.insertStop(i+10);
    L9.printNumberedList();


    cout << "**Test  == overloading and copy constructor**" << endl;
    List<string> L10;
    List<string> L11;
    cout << "First, compare 2 empty lists" << endl;
    if (L10 == L11) cout << "- The two empty list are equal" << endl;
    else cout << "They are not equal" << endl;
    cout << "Next, insert data into one of the list and compare again" << endl;
    L10.insertStop("a");
    if (L10 == L11) cout << "The two empty list are equal" << endl;
    else cout << "- They are not equal" << endl;
    cout << "Now, test the copy constructor and compare" << endl;
    List<string> L12(L10);
    if (L10 == L11) cout << "The two empty list are equal" << endl;
    else cout << "- They are not equal" << endl;

    // Test Reverse Print
    cout << "- Start testing reversePrint(). \nWe use L2 which contains the follow data in the order we inserted in: ";
    L2.print();
    cout << "Now reversePrint() L2: ";
    L2.reversePrint();
    cout << "Test printing on an empty list. Should print an empty line" << endl;
    	List<int> L13;
    L13.reversePrint();
    cout << endl;

    // Test isSorted()
    cout << "- Test isSorted()" << endl;
    cout << "-First test on L2: 0 1 2 3 4 5 6 7 8 9 10. Should print 'sorted':" << endl;
    if (L2.isSorted()) cout << "sorted" << endl;
    cout << "- Test isSorted() on an empty list. Should print 'sorted:" << endl;
    List<int> L14;
    if (L14.isSorted()) cout << "sorted" << endl;
    cout << "- Test isSorted() on a list with only one node, should print 'sorted':" << endl;
    L14.insertStart(1);
    if (L14.isSorted()) cout << "sorted" << endl;
    cout << "- For a list that contains 1 2 3 5 4, print() that list first then test isSorted(), should print 'not sorted':" << endl;
    L14.insertStop(2);
    L14.insertStop(3);
    L14.insertStop(5);
    L14.insertStop(4);
    L14.print();
    if (L14.isSorted()) cout << "sorted" << endl;
    else cout << "Not sorted" << endl;



    return 0;
}




/*

 **Testing InsertStart**

Should print out an empty line:

Should print out 0 and then move to a new line:
0
10 9 8 7 6 5 4 3 2 1 0

**Testing insertStop**

Should print out an empty line:

Should print out 0 and then move to a new line:
0
Should print out 10 9 8 7 6 5 4 3 2 1 0 and then move to a new line:
0 1 2 3 4 5 6 7 8 9 10

**Testing removeStart**

Test removeStart empty list. Should be declined
Now insert 1 node, print out the list, removeStart, then print again
1

Now insert 2 node, print out the list, removeStart, then print again
2 1
1
**Testing removeStop**

Test removeStop empty list. Should be declined
Now insert 1 node, print out the list, removeStop, then print again. Should get empty line
1

Now insert 2 nodes, print out the list, removeStop, then print again. Should get only 1 data value
1 2
2

**Test accesors**
create empty linked list then getSize(), should return zero.Next, test isEmpty(), and we should get 1 (True that the list is empty). Lastly, test print(), should get empty line
0
1

Add 1 node, then getStart(), getStop(), we should both get a, which is the value added. Test isEmpty(), should get 0. Test getSize(), should get 1. Lastly, test print(), should get a
a
a
0
1
a
Add another node, then getStart(), getStop(). It should print out a, then b, which are the two added values. Next, test isEmpty(), should get 0.Next, test getSize() and we should get 2. Lastly, test print(), should get a and b on a line
a
b
0
2
a b

**Test Iterator**
First, create a list, insert data into that list then print out.
1 2 3 4
Next, Test offEnd(), should get 1 (true that iterator is pointing at NULL)
1
Then test pointIterator(), follow by offEnd() again, should get 0 (false if iterator is pointing at NULL)
0
test getIterator() by print out the data value of the first node. Should get 1
1
test advanceIterator() by advance it 3 times then print out the data. Should get 4, which is the last node
4
test reverseIterator() by reverse it twice and print out the data. Should get 2
2

Test insertIterator(). Create a list with one node with data = 1. Print out the list. Should get 1
1
Point Iterator to that node, then insertIterator(2) to test the case where iterator node is end node. print out the list. Should get 1, 2
1 2
insertIterator(3) to test the case where the iterator node is not end node. Print put the list. Should get 1 3 2
1 3 2
Print out the size of the list to see if the size++ condition has been enforced
3

Test removeIterator()
Create a list with length 5. Print out the list
1 2 3 4 5
Case 1: pointIterator(), then removeIterator() to remove the first node. Should get 2 3 4 5
2 3 4 5
The Iterator is now pointing to NULL. offEnd() to verify. Should get 1
1
Case 2: pointIterator(), the advance Iterator 3 times. We now test removeIterator() at end nod then print. Should get 2 3 4
2 3 4
Case 3: pointIterator() again, the advance it once. We now test removeIterator() at middle node. removeIterator() then print. Should get 2 4
2 4
Remove one of the last two node using removeStart. Print the list, should get only 4.
4
Case 4: pointIterator() again. We now test removeIterator() at the only node. print the list, should get empty

**Testing printNumberedList**
print the empty list as blank line

Insert 11 to 20, then print out again
1: 11
2: 12
3: 13
4: 14
5: 15
6: 16
7: 17
8: 18
9: 19
10: 20

**Test  == overloading and copy constructor**
First, compare 2 empty lists
- The two empty list are equal
Next, insert data into one of the list and compare again
- They are not equal
Now, test the copy constructor and compare
- They are not equal
*/


