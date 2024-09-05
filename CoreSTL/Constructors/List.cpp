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


//forward list in cpp is singly linked list
//it tracks only next element of the list
//1.assign() = it assigns value in forward list.

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
  forward_list<int> number;
  forward_list<int> number2;
  forward_list<int> number3;

  number.assign({1, 4 , 6 ,8});
  number2.assign(6 , 4);
  number3.assign(number.begin(), number.end());

  cout << "The elements of first forward list: ";
  for(int &a :  number);
  cout << a << ' ';
  cout<< endl;

  cout <<"The elements of second forward list: ";
  for(int &b : number2);
  cout << b << ' ';
  cout << endl;

  cout <<"The elements of third forward list: ";
  for(int &c: number3);
  cout << c << ' ';
  cout << endl;

  return 0;
}

//push_front(), pop_front(), emplace_front();
//emplace_front = used to insert the element in the start of the list

#include<iostream>
#include<forward_list>
using namespace std;

int main(){


  forward_list<int> backUp({1, 2, 3, 4, 5 ,6, 7});

  //push_front 
  backUp.push_front(20);

  cout <<"The list after push_front is: ";
  for(int &a: backUp)
  cout << a << " ";
  cout << endl;

  //emplace_front
  backUp.emplace_front(67);

  cout << "The list after emplace_front is: ";
  for(int &a : backUp)
  cout << a << " ";
  cout << endl;

  //pop_front()

  backUp.pop_front();

  cout << "The list after pop_front is : ";
  for(int &a : backUp)
  cout << a << " ";
  cout << endl;

  return 0;
}






