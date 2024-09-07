//Queue is based on principle of first in first out(FIFO)
#include<iostream>
#include<queue>
using namespace std;

int main(){

  queue<int> Q;

  Q.push(3);
  Q.push(6);
  Q.push(8);
  Q.push(5);

  cout << Q.front() << " " << Q.back() << endl;
  Q.pop();
  cout << Q.front() << " " << Q.back() << endl;
}


//Queue traversal

#include<iostream>
#include<queue>
using namespace std;

int main(){

  queue<int> Qs;

  Qs.push(1);
  Qs.push(2);
  Qs.push(3);
  Qs.push(4);

  while(Qs.empty() == false){
    cout << Qs.front() << " " << Qs.back() << endl;
    Qs.pop();

  }
}
//time complexcity is same as stack O(1)

//Example of queue ds

#include<iostream>
#include<queue>
using namespace std;



void print_queue(queue<int> Qss){

  queue<int> temp = Qss;
  while(!temp.empty()){
    cout << temp.front()<< " ";
    temp.pop();

  }
  cout << '\n';
}
int main(){
   queue<int> Q1;
  

   Q1.push(7);
   Q1.push(9);
   Q1.push(10);
   Q1.push(4);

   cout << "Queue1 = ";
   print_queue(Q1);

   queue<int> Q2;
   Q2.push(2);
   Q2.push(65);
   Q2.push(36);
   Q2.push(67);

   cout << "Queue2 = ";
   print_queue(Q2);

   Q2.swap(Q1);

   cout << "After swapping: " << endl;
   print_queue(Q1);
   cout << "after swapping: " << endl;
   print_queue(Q2);

}


//deque operation in queue
//in deque the insertion and deletion is done by both ends

#include<iostream>
#include<deque>
using namespace std;

int main(){


  deque<int> dq;

  dq.push_back(1);
  dq.push_back(2);
  dq.push_back(6);


  dq.push_front(3);
  dq.push_front(4);

  cout << "front element: " << dq.front() << endl;
  cout << "back element: " << dq.back() << endl;

  dq.pop_front();
  dq.pop_back();

  cout << "size of deque: " << dq.size() << endl;

  if(dq.empty()){
    cout << "deque is empty";
  }
  else{
    cout << "deque is not empty";
  }

}




