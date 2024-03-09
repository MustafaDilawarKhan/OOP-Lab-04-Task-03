#include <iostream>
#include <list>
#include <algorithm> 
using namespace std;

class LinkedList {
public:
    list<int> lst;


    void append(int data) {
        lst.push_back(data);
    }


    void sort() {
        lst.sort();
    }

    void merge(LinkedList& other) {
        lst.merge(other.lst);
    }


    void reverse() {
        lst.reverse();
    }


    void print() {
        for (int val : lst) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;
    myList.append(1);
    myList.append(5);
    myList.append(3);
    myList.append(2);
    myList.append(4);

    LinkedList otherList;
    otherList.append(6);
    otherList.append(8);
    otherList.append(7);

    cout << "Original list 1: ";
    myList.print();
    cout << "Original list 2: ";
    otherList.print();

    char choice;
    do {
        cout << "Enter 's' to sort the lists" << endl;
        cout << "Enter 'm' to merge another list" << endl;
        cout << "Enter 'r' to reverse the list" << endl;
        cout << "Enter 'p' to print the lists" << endl;
        cout << "Enter 'q' to quit" << endl;
        cin >> choice;

        switch (choice) {
        case 's':
            myList.sort();
            otherList.sort();
            cout << "Sorted list 1: ";
            myList.print();
            cout << "Sorted list 2: ";
            otherList.print();
            break;
        case 'm':
            cout << "Merging lists: " << endl;
            otherList.sort();
            myList.merge(otherList);
            cout << "Merged list: ";
            myList.print();
            break;
        case 'r':
            myList.reverse();
            cout << "Reversed list: ";
            myList.print();
            break;
        case 'p':
            cout << "Current list 1: ";
            myList.print();
            cout << "Current list 2: ";
            otherList.print();
            break;
        case 'q':
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'q');

    return 0;
}

