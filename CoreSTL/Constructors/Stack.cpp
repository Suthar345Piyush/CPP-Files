//stack follows firstin lastout

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//   stack<int> s;
//   s.push(1);
//   s.push(2);
//   s.push(3);
//   s.push(4);
//   s.push(5);

//   int num = 0;
//   s.push(num);
//   s.pop();
//   s.pop();
//   s.pop();
//   s.pop();

//   while(!s.empty()){
//     cout << s.top() << " ";
//     s.pop();
//   } // if stack is empty, loop ends.
//     // if stack not empty , loop continue.
// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){

//   stack<int> stacks;
//   stacks.push(5);
//   stacks.push(6);
//   cout << stacks.top() << endl;

// }

//stack sum operation.
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){

//   stack<int> allStacks;
//   int sum  = 0;
//   allStacks.push(5);
//   allStacks.push(6);
//   allStacks.push(7);
//   allStacks.push(9);


// //it returns true if empty otherwise loop continues
//   while(!allStacks.empty()){
//     sum += allStacks.top();
//     allStacks.pop();
//   }
//   cout << sum << endl;

// }

//empty() and size() in stack;

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//   stack<int> myStacks;

//   myStacks.push(3);
//   myStacks.push(4);
//   myStacks.push(5);

//   if(myStacks.empty()){
//     cout << "My stack is empty" << endl;

//   }
//   else{
//     cout << "My satck is full" << endl;

//   }
// }

//size() operations:
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//   stack<int> myStacks;

//   myStacks.push(4);
//   myStacks.push(5);
//   myStacks.push(2);
//   myStacks.push(1);
//         cout <<  myStacks.size() << endl;
// }

#include<iostream>
#include<Stack>
using namespace std;

int main(){

  stack<int> stacks;
  int sum = 0;
  stacks.push(6);
  stacks.push(9);
  stacks.push(4);
  stacks.push(2);

 while(stacks.size() > 0){
sum = sum + stacks.top();
 stacks.pop();


 cout << sum << endl;
 }
}