// list is called as doubly linked list , means the each element in list has connection with next element and previous element.
// through this the insertion and deletion of element is esay, list allows us to move in both directions , forward and backward
//we have to traverse the list to get acsess the element of the list
// basic syntax of list = list<data_type>list_name

#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> number{1, 2, 3, 4, 5};
  for(int i: number){
    cout<< i << ' ';
  }
}

// list membar functions :

//front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list.
// push_front() – Adds a new element ‘g’ at the beginning of the list.
// push_back() – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// insert() – Inserts new elements in the list before the element at a specified position.
// size() – Returns the number of elements in the list.
// begin() – begin() function returns an iterator pointing to the first element of the list.
// end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.