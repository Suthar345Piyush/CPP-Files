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


// To print the file content in the console


#include<iostream>
#include<string>

constexpr int maxbuffer = 1234;


using namespace std;

int main(){
   const char * filename = "fileName.txt";
   const char * infofile = "Hello, I am Piyush";


//    FILE *fh = fopen(filename , "w");
   
// // use fputs to write input inside that file
//    for(int i = 0; i < 5; ++i){
//       fputs(infofile, fh);

//    }
// fclose(fh);

char buf[maxbuffer];

FILE *fh = fopen(filename, "r");
while(fgets(buf,  maxbuffer, fh)){
   fputs(buf, stdout);

}
fclose(fh);
return 0;
   
   }

