// Simple test cases for clsDblLinkedList
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> list;

    cout << "Is list empty? " << list.IsEmpty() << endl;

    // Insert at beginning
    list.InsertAtBeginning(10);
    list.InsertAtBeginning(20);
    list.InsertAtBeginning(30);

    cout << "After InsertAtBeginning: ";
    list.Print();   // 30 20 10

    // Insert at end
    list.InsertAtEnd(40);
    list.InsertAtEnd(50);

    cout << "After InsertAtEnd: ";
    list.Print();   // 30 20 10 40 50

    // Insert after index
    list.InsertAfter(2, 99); // after value 10

    cout << "After InsertAfter index 2: ";
    list.Print();   // 30 20 10 99 40 50

    // Delete by value
    list.DeleteNode(20);

    cout << "After DeleteNode(value=20): ";
    list.Print();   // 30 10 99 40 50

    // Delete first & last
    list.DeleteFirstNode();
    list.DeleteLastNode();

    cout << "After DeleteFirst , DeleteLast: ";
    list.Print();   // 10 99 40

    // Reverse list
    list.Reverse();
    cout << "After Reverse: ";
    list.Print();   // 40 99 10

    // Access items
    cout << "First item: " << list.GetFirst() << endl;
    cout << "Last item: " << list.GetLast() << endl;
    cout << "Item at index 1: " << list.GetItem(1) << endl;

    // Update item
    list.UpdateItem(1, 777);
    cout << "After UpdateItem index 1: ";
    list.Print();   // 40 777 10

    cout << "List size: " << list.Size() << endl;

    // Clear list
    list.Clear();
    cout << "After Clear, IsEmpty? " << list.IsEmpty() << endl;

    return 0;
}
