//[]{}() syntax of the lambda function when we define it  we have to initialize it, write program in {} braces only

#include<iostream>

using namespace std;

int main(){
              []{ cout << "Hello i am learning lambda in cpp";}();
              [](){return 100;};

    auto  sum =  []{auto  a , auto  b}(a + b);

   cout << "Sum of 2 and 8 is: " << sum(2, 8) << endl;


}
