//[]{}() syntax of the lambda function when we define it  we have to initialize it, write program in {} braces only

#include<iostream>

using namespace std;

int main(){
              []{ cout << "Hello i am learning lambda in cpp";}();
              [](){return 100;};

    auto  sum =  []{auto  a , auto  b}(a + b);

   cout << "Sum of 2 and 8 is: " << sum(2, 8) << endl;


}



//File handling in cpp


#include<iostream>
#include<string>


using namespace std;

int main(){


   static const char  * originalfile = "originalFile.txt";
   static const char * changedfile = "changedFile.txt";

// for changing the file name
//for open file in any mode:  

// FILE * fh = fopen(originalfile, "w");
// fclose(fh);
 // for remove the file use remove()
  remove(changedfile);


   return 0;
}
