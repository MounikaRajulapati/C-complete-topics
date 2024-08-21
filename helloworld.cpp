// The C++ JOURNEY  -----------> SELF NOTES BY BIPUL MISHRA
// #include <iostream>
// using namespace std;

// int main(){ 
//     cout <<"Hello There";
//     return 0;
// }

// #include <cstdio>
// using namespace std;

// int main(){
//     puts("click on Button");
//     puts("create a new player");
//     puts ("add life to player");
//     return 0;
// }

// just a normal program to understand out the things 
// #include <iostream>
// using namespace std;

// int main(){
//     int numbers ;
//     cin >> numbers ;
//     printf("Your ID is %d\n" , numbers+3);
//     return 0;
// }
// --------------------
// int main(){
//     int numbers ;-------- Variable Declaration
//     numbers = 0; -------- variable initialisation
//     cin >> numbers ;
//     printf("Your ID is %d\n" , numbers+3);
//     return 0;
// }

// Program for color matching 
// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string my_color;
//     cout << "Enter your fav. color:\n";
//     getline(cin , my_color);
//     cout << "Hey "  <<  my_color  << " is my fav. too " << endl;
//     return 0 ;

// }

// Take the first name and last name of the user and print welcome to the world of c++

// #include <iostream>
// #include <string>
// using namespace std ;

// int main(){
//     string first_name;
//     string last_name;
//     cout << "Enter your first name :\n";
//     cout << "Enter your last name : \n";
//     getline(cin , first_name , last_name );
//     cout << "Hi " << first_name << last_name << " We are welcoming you to the world of c++ \n";
//     return 0 ;

// ------- why this program thrown the error as getline can take only one argument it can't take the two agrument in the program simultaneously

// }
// #include <iostream>
// #include <string>

// int main() {
//     std::string firstName, lastName;

//     // Ask the user to enter their first name
//     std::cout << "Enter your first name: ";
//     std::cin >> firstName;

//     // Ask the user to enter their last name
//     std::cout << "Enter your last name: ";
//     std::cin >> lastName;

//     // Print the welcoming message with the user's name
//     std::cout << "Welcome, " << firstName << " " << lastName << "!" << std::endl;

//     return 0;
// }
// Question : take the first name and last name of the user and prints the welcoming message over the screen .

// #include <iostream>
// #include <string>
// using namespace std ;

// int main (){
//     string first_name ;
//     string middle_name ;
//     string last_name ;

//     cout << " Enter the first_name  ";
//     getline(cin , first_name );
//     cout << " Enter the middle name ";
//     getline(cin , middle_name );
//     cout << " Enter the last name ";
//     getline(cin , last_name );

     

//     cout << " Hi " <<  first_name  << " " << middle_name << " " << last_name << " Welcome to the c++ community \n ";
//     return 0 ;

// }

// Pointers and refrences 
// ------- a small program to understand the pointers 
// #include <iostream>
// using namespace std;

// int main(){
//     int life ;
//     life = 4;

//     int card ;
//     card = 40 ;
//     int my_card = card ;

//     int *myp ;
//     myp = & card ;

//     my_card = *myp ;   // pointer derefrences

//     printf ("value of card is : %d\n" ,my_card);
//     printf ("value of card is : %p\n" ,myp);
//     printf ("value of card is : %d\n" ,my_card);

//     return 0 ;


// }

// program for refrences 

// #include <iostream>
// using namespace std ;

// int main (){
//     int score = 200 ;
//     int *myp = &score ;
//     printf("value of score is %d\n", score);
//     printf("value of pointers is %p\n" ,myp);

//     int & another_score = score ;
//     another_score = 800;

//     printf("value of score is %d\n", score);
//     printf("value of pointers is %p\n" ,myp);

//     return 0 ;


// }

//  Arrays ----------- >>> programs for understanding the topics 
// #include <iostream>
// using namespace std ;

// int main(){
//     int integer_array[4] = {1,2, 3,4};
//     cout << integer_array[0] << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std ;

// int main(){
//     int integer_array[4] = {1,2, 3,4};
//     cout << integer_array << endl; // if we just write like this then it will give 
//     //us just a memory storage or in other words it will just points towards the 
//     //memory.


//     return 0;
// }
// Another approach
// #include <iostream>
// using namespace std ;

// int main(){
//     int integer_arr[4] ;
//     integer_arr[0] = 1;
//     cout << integer_arr[1]<< endl; // it gives us  some random value maybe of space or memory.
//     return 0 ;
// }
// array is a continuos memory allocation which can hold a lot of values .
// #include <iostream>
// using namespace std ;
// int main (){
//     int integer_array[4] = {1, 2, 3, 4 };
//     cout << integer_array[0] << endl ;

//     int another_array[4] ;
//     another_array[0] = 9 ;
//     another_array[1] = 19 ;
//     cout << another_array[0] << endl ;
//     cout << another_array[1] << endl ; 

//     int *ap = another_array ;
//     ap = ap++ ;
//     *ap = 209 ;
//     cout << another_array[1] << endl ;



//     return 0 ;
// }

// DataTypes ------------->>>>   Integer
// #include <iostream>
// using namespace std ;
// // 1 Byte is of 8 bits 
// int main (){
//      printf("Size of this data type is %ld bits\n" , sizeof (short int)*8);
//      printf("Size of this data type is %ld bits\n" , sizeof (int)*8);
//      printf("Size of this data type is %ld bits\n" , sizeof (long int)*8);
//      printf("Size of this data type is %ld bits\n" , sizeof (long long int)*8);
//      return 0 ;

// }

// conditionals programs  example ---------------->>>
// #include <iostream>
// using namespace std ;
// int main(){
//     int rating = 5;
//     if (rating == 5){
//         cout << "5 Star Rated ";
//     } else if (rating == 4){
//         cout << "4 Star Rated " ;

//     } else {
//         cout << "Neither 4 or 5 Star Rated ";
//     }
//     return 0 ;

// }

// question : Take the rating from 1 to 5 from the user and print different different messages .
// #include <iostream>
// using namespace std ;
// int main(){
//     int rating ;
//     cout << " Enter any one rating from 1 to 5 : ";
//     cin >> rating ;
//     if (rating == 1 ){
//         cout << " Not Satisfactory !! " ;
//     } else if (rating == 2 ){
//         cout << " Needs improvement!! " ;
//     } else if (rating == 3){
//         cout << " Okay!! " ;
//     } else if (rating == 4) {
//         cout << " Satisfactory!! ";
//     }else {
//         cout << " Best " ;
//     }
//     return 0 ;

// }
// solve the same question using switch case statement 
// #include <iostream>
// using namespace std ;
// int main(){
//     int rating ;
//     cout << " Enter the rating From 1 to 5 :  " ;
//     cin >> rating ;
//     switch (rating) {
//         case 1 :
//            puts(" Below Average ");
//            break;
//         case 2 :
//            puts (" Average ") ;
//            break ;
//         case 3 : 
//            puts (" Above average ");
//            break ;
//         case 4 :
//            puts (" Satisfactory ") ;
//            break ;
//         case 5 :
//            puts (" Best ") ;
//            break ;
//         default :
//         puts (" Oops !!You have not rated from 1 to 5 ");

//     }
//     return 0 ;
// }
// Loops in cpp ---------->>> 
//  ---> where the condition is getting tested .
//  ----> what condition is getting tested .
//  -----> change the value that is getting tested .
//  -----> Automatic change of value , that is getting tested .

// while loop examples practice 
// #include <iostream>
// using namespace std ;
// int main (){
//     int my_numbers[] = { 4, 5, 6, 7, 8, 9, 0};
//     int i=0;
//     while (i<7){
//         cout << " Current Numbers is : " << my_numbers[i] << endl ;
//         i=i+1 ;
//     }
//     return 0 ;
// }
//break keyword 
// #include <iostream>
// using namespace std ;
// int main (){
//     int my_numbers[] = { 4, 5, 6, 7, 8, 9, 0};
//     int i=0;
//     while (i<7){
//         if (i==3){
//             break ;
//         }
//         cout << " Current Numbers is : " << my_numbers[i] << endl ;
//         i++ ;
//     }
//     cout << " outside of loop " << endl ;
//     return 0 ;
// }
// #include <iostream>
// using namespace std ;
// int main (){
//     int my_numbers[] = { 4, 5, 6, 7, 8, 9, 0};
//     int i=0;
//     while (i<7){
//         if (i==3){
//             i++ ;
//             continue ;
//         }
//         cout << " Current Numbers is : " << my_numbers[i] << endl ;
//         i=i+1 ;
//     }
//     return 0 ;
// }
// DoWhile Loop ------------------->
// do {

// } while ();
// For loops ------------------------>>>>
// #include <iostream>
// using namespace std ;
// int main (){
//     int my_nums[] = {2,3,4,5,6};
//     for (int i=0 ; i<5 ; i++){
//         cout << my_nums[i] << endl;
//     }
//     cout << "Get a break" << endl ;
//     for (int i :my_nums){  // for each loop
//         cout << i << endl ;
//     }
// }
// for each loop some advance version of loop and strings 
// #include <iostream>
// using namespace std ;
// int main(){
//     char my_string[] = "bipul" ; // string array 

//     char my_name[] = {'b','i', 'p', 'u' ,'l' , 0};

//     printf(" My Name is : %s\n " , my_name); 

//     cout << "Take a break \n " ;

//     for(int i = 0 ; my_name[i] !=0 ; i++ ) {
//            cout << "character is : " << my_name[i] << endl ;
//     }
//     cout << "Take a break\n" ;

//     for(int i = 0 ; my_name[i] ; i++ ) { // this also works the same as 0 and false value are not executed .
//            cout << "character is : " << my_name[i] << endl ;
//     }
//     // using pointers too
//     for(char * cp = my_name ; *cp !=0 ; cp++){
//         cout << "character is :" << *cp << endl;
//     }
//     cout << "take a break\n" ;
//     for (char i:my_name ){
//         if(i==0) break ;
//         cout << "char is :" << i << endl;
//     }
     
//     return 0 ;
// }
// ---------------------------------------------

// floating point  numbers 
// float , double , long double 
// sizes in bits  1 byte = 8 bits . 
// #include <iostream>
// using namespace std ;
// int main (){
//     printf("Float size is %ld bits\n" , sizeof(float)* 8);
//     printf("Double size is %ld bits\n" , sizeof(double)* 8);
//     printf("long double size is %ld bits\n" , sizeof(long double )* 8);
    
//     cout << "take a break\n" ;

//     float my_precision_value = 20.2 + 20.2 ;
//     if (my_precision_value == 40.400002){
//         puts("yup!! the value you got is correct!!\n");

//     } else{
//         puts(" Oopss!!! precision  not matched \n ");
//     }
//     printf("My Precison value is : % 1.30f in float\n" ,my_precision_value) ;

//     return 0 ;
// }
// Try and Catch Block---------------->
// #include <iostream>
// using namespace std;
// int main () {
//      int call_api = 2 ;
//      try {
//         cout << "trying to use API value\n";
//         cout << "did some testing with api value\n";
//         throw call_api ;
//         cout << "No code execute after return and throw\n";
//      } catch(int x){
//         cout << "Integer exeception handled\n";
//      }
//      cout << "Keep on moving with rest of code\n";
// }

// #include <iostream>
// using namespace std;
// int main () {
//      float call_api = 2.0;
//      try {
//         cout << "trying to use API value\n";
//         cout << "did some testing with api value\n";
//         throw call_api ;
//         cout << "No code execute after return and throw\n";
//      } catch(int x){
//         cout << "Integer exeception handled\n";
//      } catch (float f){
//         cout << "float exeception handled\n";
//      }
//      cout << "Keep on moving with rest of code\n";
// }

// #include <iostream>
// using namespace std;
// int main () {
//      char call_api = 'b';
//      try {
//         cout << "trying to use API value\n";
//         cout << "did some testing with api value\n";
//         throw call_api ;
//         cout << "No code execute after return and throw\n";
//      } catch(int x){
//         cout << "Integer exeception handled\n";
//      } catch (float f){
//         cout << "float exeception handled\n";
//      } catch (...){
//         cout << "something went wrong\n";
//      }
//      cout << "Keep on moving with rest of code\n";
// }

// Sneak-Peak of Functions ------------------->>>>>>>>>
// #include<iostream>
// using namespace std;
 
//     void sayHello(){
//         puts(" Hello There! ") ;
//     }
//     int sayTwo(){
//         //puts("2") ;
//         return 2 ;
//     }
//     void sayThree(){
//         puts("3") ;
//     }
//     int main(){
//         sayHello();
//         //sayTwo();
//         printf("%d\n" , sayTwo() +2 );
//         sayThree();
//         return 0 ;
//     }

// WEEK 2 OF CPP---------------------------->>>

// likers :  Linkers is something which comes in process when you execute your code 
//  and compiler gives you an executable binary there.

//Qualifiers : modification qualifiers and life duration qualifiers 

// Example program to understand out the things 
// #include <iostream>
// using namespace std ;
// int lifeup(){
//     static int life = 3;
//     return life = life +1 ;

// }
// int main(){
//     int life = 3 ;
//     cout << "Your starting game life is : " << life << endl ;

//     life = lifeup():
//     printf ("Your updated game life is %d\n " , life ) ;

//     life = lifeup() :
//     printf ("Your updated game life is %d\n " , life );

//     retrun 0 ;
// }



// Conditionals  
// && Operations 
// #include <iostream>
// using namespace std ;
// int main(){
//     bool isSignedIn = true ;
//     bool isAdmin = true ;
//     if (isSignedIn && isAdmin){
//         puts("welcome admin");
//     }else{
//         puts("No admin Acess!");
//     }

//      return 0 ;

// }

// || (or operation )
// #include <iostream>
// using namespace std ;
// int main(){
//     bool isSignedIn = true ;
//     bool isAdmin = false ;
//     if (isSignedIn || isAdmin){
//         puts("welcome admin");
//     }else{
//         puts("No admin Acess!");
//     }

//      return 0 ;

// }

// Mixed && and || operation 

// #include <iostream>
// using namespace std ;
// int main(){
//     bool isFBUser = false ;
//     bool isGoogleUser =true ;
//     bool isAdmin =true ;
    
//     if ((isGoogleUser || isFBUser) && isAdmin){
//         puts("Welcome Admin");
//     } else {
//         puts("No Admin Acess!");
//     }
//     return 0;

// }

// Memory leak in cpp

// new and delete :  if u use the word new then 100% u need to use the word delete too.
// new simply means you are forcefully allocating some memory and it's your job to free up that memory .

// Example program to understand out the things 
// #include <iostream>
// using namespace std ;
// int main(){
//     int *myp;
//     //myp = new int[10000];
//     myp = new(nothrow) int[10000];
//     cout << "Memory space allocated \n";
//     delete[] myp ;
//     return 0;
// }


//Structures in  cpp

// let's say you are designing a website and you have a user which you want 
//to architecture for this website .

// #include <iostream>
// using namespace std ;
// struct user{
//     const int uId ;
//     const char *name;
//     const char *email ;
//     int course_count;

// };  // ----> Don't forget this ; 
// int main(){
//       user Bipul = {001 ,"Bipul" ,"bipulm946@gmail.com" ,2};
//       user Mounika = {002 , "Mounika" , "mounika@gmail.com", 4};
//       cout << Bipul.email << endl ;
//       cout << Mounika.course_count << endl ;
//       return 0 ;

// }

// refrencing of pointer 
//  #include <iostream>
//  using namespace std ;
//  struct user{
//          const int uId ;

//     const char *name;

//     const char *email ;
//          int course_count;

//  };  // ----> Don't forget this ; 
//   int main(){
//         user Bipul = {001 ,"Bipul" ,"bipulm946@gmail.com" ,2};
//         user Mounika = {002 , "Mounika" , "mounika@gmail.com", 4};
//         cout << Bipul.email << endl ;
//         cout << Mounika.course_count << endl ;
//         user *b = &Bipul ;
//         b -> course_count = 12 ;
//         cout << Bipul.course_count << endl ;
//         return 0 ;

//   }


// Enums and Preprocessors 
// Enums 
// A program for understanding out the things 

// #include <iostream>
// using namespace std ;

//     enum MsOffice{
//         BOLD,
//         ITALICS,
//         UNDERLINE,
//         COSSED
//     };
//     int main(){
//         int myAttributes = BOLD ;
//         cout << myAttributes << endl ;
//         return 0 ;
//     }


// A challenge to a strongly Typed Language 
// Auto --> Automatically defines the types of data types .

// #include <iostream>
// #include <string>
// using namespace std ;

// string api_call(){
//     return "got some data from web\n";
// }
// int main(){
//     auto response = api_call();
//     cout << "API CALL VALUE : " << response ;
//     if (typeid(response) == typeid(string)){
//         puts("Type of both ID matches\n");
//     }
//     return 0 ;
// }

// Detailed intro to functions ------->>
//#include <iostream>
// int main(){
//     int score =100 ;
//     std ::cout << score ;
//     return 0 ;
// }

// Actual meaning of the program
// what_I_will_give_back function_name (what_you_have_to_give_me){
//     what i will do 
//     return 0 ;
//     // nothing executed here after 
// }

// One Example to understand out the things in simpler ways :  ---->>> 

// #include <iostream>
// using namespace std ;

// void lifeUp(int life){
//     ++life ;
// }
// int main(){
//     int life = 34 ;
//     lifeUp(life);
//     cout << life << endl ;
//     return 0;
// } // This program is example of call by value and we can see here the value is not getiing incremented 

// The output is 34 itself it is not getting incremented 



// so now we will try to fixout the things with the help of call by refrence 
// already we  have discussed about call by refrence in pointers concepts 

// Call By Refrence 

// #include <iostream>
// using namespace std ;
// void lifeUp(int *life ){
//     ++(*life);
// }
// int main(){
//     int life = 3 ;
//     lifeUp(&life);
//     cout << life << endl;
//     return 0 ;
// }


// Another Approach 
// #include <iostream>
// using namespace std ;
// void lifeUp (int &life){
//     ++life; // changing or incrementing the refrences here directly.
// }
// int addme(int a , int b){
//     return a+b ;
// }
// float addme(float a ,float b){
//     return a+b ;
// }
//     int main(){
//         int life = 3 ;
//         lifeUp(life);
//         int v1 = 4 ;
//         int v2 = 5;
//         float v3 = 5.6 ;
//         float v4 = 7.5 ;
//         cout << addme(v3,v4)<<endl;
//         cout << addme(v1,v2)<< endl;
//         cout << life << endl ;
//         return 0 ;
//     }


//Introduction to Templates 

//Templates ------>>>
//In templates you can create your own data types .
// #include <iostream>
// using namespace std ;

// template < typename Neha >
// Neha loveme(Neha a , Neha b){
//     return a+b;
// }
// int main(){
//     int v1 = 4 ;
//     int v2 = 6 ;
//     float v3 = 5.6 ;
//     float v4 = 6.5 ;

//     cout << loveme(v3 ,v4) << endl ;
//     cout << loveme(v1 ,v2) << endl ;
//     return 0 ;
// }

// Functional Pointers 


// #include <iostream>
// using namespace std ;
// int getTwo(){
//     return 2;
// }
// void intresting(){
//     puts("I am intresting");

// }
// int main(){
//     int whatIgot = getTwo() ;
//     void (*pointsToIntresting)() = intresting ;

//     cout << whatIgot << endl ;
//     pointsToIntresting();
//     (*pointsToIntresting)();
//     return 0 ;
// }

//nullptr || NULL POINTER 
// function overloading thing cames so for that 
//nullptr came into picture .

// What's the Problem??
// #include <iostream>
// #define NULL 0 
// using namespace std ;
// void printval(int a ){
//     printf("Integer value is %d \n" ,a);
// }
// void printval(double a){
//     printf("Double value is %f\n" ,a);
// }
// void printval(int *a){
//     printf("pointer value is %p\n", a);
// }
// int main(){
//     printval(5.3);
//     printval(NULL); // Compiler throws error and people
//     //find the sneaky ways to remove it.
// }

//This is how we will solve it.



// #include <iostream>
// #define NULL 0 
// using namespace std ;
// void printval(int a ){
//     printf("Integer value is %d \n" ,a);
// }
// void printval(double a){
//     printf("Double value is %f\n" ,a);
// }
// void printval(int *a){
//     printf("pointer value is %p\n", a);
// }
// int main(){
    
//     printval(nullptr); // Compiler throws error and people
//     //find the sneaky ways to remove it.
//     return 0 ;
// }


// A brief intro to recursion 
// let's understand it with factorial 
// #include <iostream>

// int factorial(int n) ;
// using namespace std ;
// int main(){
//     int n ;
//     cout << "Enter a value : " ;
//     cin >> n ;
//     cout << "your result after factorial is : " 
//     << factorial (n) << endl ;
//     return 0 ;
// }
// int factorial (int n ) {
//     if (n>1){
//         return n*factorial(n-1) ;
//     } else{
//         return 1 ;
//     }
// }







// MACROS --------->

// #include <iostream>
// #include <string>
// #define end return 0 

// using namespace std ;
// int main(){
//     int a = 4 ;
//     cout << a << endl ;
//     end ;
// }





// Variadic Templates and recursion 





//A function which can accepts infinity amount of arguments . 

// #include <iostream>
// #include <string>
// using namespace std ;

// template <typename T >
// void func (T  t){
//     cout << t << endl ;
// }
// // using variadic for multiple inputs .
// //if we want to make typename variadic use triple dots .

// template <typename T ,typename ...Args>
// void func (T t  ,Args ...args){
//     cout << t << endl ;
//     func (args ...) ;
// }
// int main(){
//     string myName = "Bipul" ;
//     func(myName) ;
//     func(1 ,2 , 3.4 ,4.5, myName) ;
//     return 0 ;
// }







// OBJECT ORIENTED PROGRAMMING (OOPS CONCEPT) 









// CLASSES ,OBJECT , INHERITENCE ,POLYMORPHISM , ABSTRACTION 






// #include <iostream>
// #include <string>
// using namespace std ;

// class User{
//     int secret = 22 ; 
// public :
//     string name = "default" ;
//     void classMessage(){
//         cout << "class is great ," << name << endl ;
//     }
// };
// int main(){
//     User sam ;
//     sam.name = "sam" ;
//     sam.classMessage() ;
//     User hitesh ;
//     hitesh.classMessage() ;
//     hitesh.name = "hitesh" ;
//     hitesh.classMessage() ;
//     return 0 ;     
// }





// Getters and setters 






// #include <iostream>
// #include <string>
// using namespace std ;

// class User{
//     int secret = 22 ;

// public :
//     string name = "default" ;
//     void classMessage () {
//         cout << "class is great ," << name << endl;
//     }
//     void setsecret(const int &newsecret){secret=newsecret;}
//     int getsecret(){return secret ;}

// };
// int main(){
//     User sam ;
//     sam.name = "sam" ;
//     sam.classMessage() ;
//     sam.setsecret(333) ;
//     cout << sam.getsecret() <<endl ;
//     return 0 ;
// }





// Method separation and const qualified Methods .






// #include <iostream>
// #include <string>
// using namespace std ;

// class User{
//     int secret = 22 ;

// public :
//     string name = "default" ;
//     void classMessage () {
//         cout << "class is great ," << name << endl;
//     }
//     void setsecret(const int &newsecret){secret=newsecret;}
//     int getsecret() const{return secret ;} 

// };
//     void User :: classMessage (){
//     cout << "class is great ," << name << endl ;
// }
// int main(){
//     User sam ;
//     sam.name = "sam" ;
//     sam.classMessage() ;
//     sam.setsecret(333) ;
//     cout << sam.getsecret() <<endl ;
//     const User rock ;
//     cout << rock.getsecret() << endl ;
//     return 0 ;
// }







// CONSTRUCTOR & DESTRUCTOR 





// #include <iostream>
// #include <string>
// using namespace std ;
// class phone{
//     string _name = " " ;
//     string _os = " " ;
//     int _price = 0 ;
// public:
//     phone() ;
//     phone(const string & name , const string & os , const int & price) ;
//     phone(const phone &) ;
//     string getName(){return _os;}
//     ~phone() ;
    

// };
//  phone :: phone() : _name() ,_os("Andy"), _price(){
//         puts("Default Constructor");
//     }
//  phone :: phone(const string &name , const string &os ,const int &price) : _name(name) ,_os(os) ,_price(price){
//         puts("this is parameter constructor");
// }
//  phone :: phone(const phone &values){
//     puts("overwrite copy constructor");
//     _name = values. _name;
//     _os = "skinned - " + values._os;
//     _price = values._price ;
//  }
//  phone :: ~phone(){
//     printf("Destructor called for %s\n" , _name.c_str());
//  }
// int main(){
//     phone SamsungAI ;
//     cout << SamsungAI.getName() << endl ;
//     phone oneplus8 ("OP8" ,"Android" , 799);
//     cout << oneplus8.getName() <<endl ; 
//     phone oneplus8s = oneplus8 ;
//     cout << oneplus8s.getName() << endl ;
//     return 0 ; 
// }






// THIS Keyword 





// #include <iostream>
//  #include <string>
//  using namespace std ;
//  class phone{
//      string _name = " " ;
//      string _os = " " ;
//      int _price = 0 ;
//      phone() ;
//  public:
//      int getprice();
//      phone(const string & name , const string & os , const int & price) ;
//      phone(const phone &) ;
//      string getName(){return _os;}
//      ~phone() ;
    

//  };
//   int phone ::getprice(){
//     printf("value of object is %p\n" ,this);
//     return _price;
//   }
//   phone :: phone() : _name() ,_os("Andy"), _price(){
//          puts("Default Constructor");
//      }
//   phone :: phone(const string &name , const string &os ,const int &price) : _name(name) ,_os(os) ,_price(price){
//          puts("this is parameter constructor");
//  }
//   phone :: phone(const phone &values){
//      puts("overwrite copy constructor");
//      _name = values. _name;
//      _os = "skinned - " + values._os;
//      _price = values._price ;
//   }
//   phone :: ~phone(){
//      printf("Destructor called for %s\n" , _name.c_str());
//   }
//  int main(){
//      //phone SamsungAI ;
//      //cout << SamsungAI.getName() << endl ;
//      phone oneplus8 ("OP8" ,"Android" , 799);
//      cout << oneplus8.getName() <<endl ; 
//      phone oneplus8s = oneplus8 ;
//      cout << oneplus8s.getName() << endl ;
//      printf("value of object is %p\n" , &oneplus8);
//      return 0 ; 
//  }




// this keyword

// #include <iostream>
// #include <string>
// using namespace std ;

// class Rectangle{
//     double _length ;
//     double _breadth ;
// public :
//   Rectangle(double l =2.0 , double b = 2.0){
//     _length = 1 ;
//     _breadth = b ;
//   }
//   double Area(){
//     return _length * _breadth ;
//   }
//   int compare(Rectangle rectangle){

//     return this -> Area() > rectangle.Area();
//   }
// };
// int main(){
//     Rectangle h1(3.0 ,3.0);
//     Rectangle h2(4.0 ,4.0) ;
//     cout << h2.compare(h1);
//     if(h1.compare(h2)){
//         cout << "H2 is smaller" ;
//     } else {
//         cout << "H2 is bigger" ;
//     }
//     return 0 ;
// }



// INHERITANCE 

// BASE CLASS , DERIVED CLASS , AND OVERRIDING

// #include <iostream>
// #include <string>
// using namespace std ;

// class Man{
//     string _name ;
//     int _age ;
//     Man(){}
//   protected :
//    Man(const string &name , const int & age)
//    : _name(name) , _age(age){}
//    void run(){puts("I can run");}

//    public:
//      void sayName() const ;
// };

// void Man :: sayName() const{
//     cout << "My name is : " << _name << " and age is : " << _age << endl ;
// }
// class superman : public Man{
//     bool flight ;
//    public :
//      superman(string name) : Man (name ,26){}
//      void run(){puts("I can run at light speed");}
// };

// class spiderman : public Man{
//     bool webbing ;
//    public:
//    spiderman(string name ) : Man(name ,19){}
//    void  run(){puts("I can run at normal speed");}
  
// };

// int main(){
//     superman clark("Kent");
//     clark.sayName();
//     clark.run();
//     spiderman peter("peter");
//     peter.sayName();
//     peter.run();
//     return 0 ;
// }




// Multiple Inheritance 
// Polymorphism and Virtual --------->

// #include <iostream>
// #include <string>
// using namespace std ;
// class one{
//     public:
//     void intro(){
//         cout << "I am one\n";
//     }
// };
// class two : public one{
//     public :
//     void intro(){
//         cout << "I am Two\n";
//     }
// };
// class Three : public one {
//     public :
//     void intro(){
//         cout << "I am Three\n" ;
//     }
// };

// int main(){
//     one a ;
//     two b;
//     Three c ;
//     a.intro();
//     b.intro();
//     c.intro();
//     return 0 ;
// }

// same example with pointers

// #include <iostream>
//  #include <string>
//  using namespace std ;
//  class one{
//      public:
//     virtual void intro(){
//          cout << "I am one\n";
//      }
//  };
//  class two : public one{
//      public :
//      void intro(){
//          cout << "I am Two\n";
//      }
//  };
//  class Three : public one {
//      public :
//     void intro(){
//          cout << "I am Three\n" ;
//      }
//  };

//  int main(){
//       one *a ;
//       two b ;
//       Three c ;

//       a = &b;
//       a ->intro();

//       a = &c;
//       a ->intro();

//       return 0;
//  }





// SMART POINTERS AND UNIQUE POINTERS


// #include <iostream>
// #include <string>
// #include <memory>

// using namespace std ;

// class User{
//     public:
//     User(){
//         cout << "User Created\n" ;
//     }
//     ~User(){
//         cout << "User destroyed\n";
//     }
//     void testfunc(){
//         cout << "I am a test function\n";
//     }
// };
// int main(){
//     { 
//     // unique_ptr<User> Sam(new User());  
//     unique_ptr<User> Sam = make_unique<User>();
//     Sam -> testfunc();
//     // unique_ptr<User> Samm = Sam ;
//  }
// cout << "Outside code \n" ;
// return 0 ;
// }




// SHARED POINTERS IN SMART POINTERS 

//  #include <iostream>
//  #include <string>
//  #include <memory>

//  using namespace std ;

//  class User{
//      public:
//      User(){
//          cout << "User Created\n" ;
//      }
//      ~User(){
//          cout << "User destroyed\n";
//      }
//      void testfunc(){
//          cout << "I am a test function\n";
//      }
//  };
//  int main(){
//      { 
//      // unique_ptr<User> Sam(new User());  
//      unique_ptr<User> Sam = make_unique<User>();
//      Sam -> testfunc();
//      // unique_ptr<User> Samm = Sam ;
//   }
//  cout << "Outside code \n" ;
//  {
//     // shared_ptr<User> tim (newUser());
//     shared_ptr<User> tim = make_shared<User>();
//     weak_ptr <User> wtim = tim;   // weak pointers in smart pointers 
//     shared_ptr<User> timm = tim ;
//  }
//  return 0 ;
//  }



// Move semantics Lvalue and Rvalue 

// eg: swapping of two numbers 

// #include <iostream>
// #include <string>
// using namespace std ;
// void swap (int &a , int &b){
//     int tmp = a ;
//     a = b ;
//     b = tmp ;
// }
// int main(){
//     int a = 3 ;
//     int b = 4 ;
//     swap(a ,b);
//     cout << "A :" << a << endl ;
//     return 0 ;
// }



// Memory Optimisation with move 

// #include <iostream>
// #include <string>
// using namespace std ;
// void swap (int &a , int &b){
//      int tmp = move(a) ;
//      a = move (b) ;
//      b = move (tmp );
// }
// int main(){
//     int a = 3 ;
//     int b = 4 ;
//     swap(a ,b);
//     cout << "A :" << a << endl ;
//     return 0 ;
// }



// VECTORS ----- DYNAMIC ARRAY 


// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std ;
// struct corners{
//     float a ,b ,c ,d ;

// };
// ostream operator << (ostream &stream , const corners & corner){
//     stream << corner.a <<" " << corner.b << " " << corner.c << " " << corner.d ;
//     return stream ;
//  }
// int main(){
//     vector <int> inty ;
//     inty.push_back(2);
//     inty.push_back(3);
//     inty.push_back(4);
//     inty.push_back(5);
//     for (auto i = inty.begin() ; i!= inty.end(); ++i){
//         cout << *i << endl ;
//     }
//     vector <corners> corners ;
//     corners.push_back({1,2 ,3 ,4});
//     corners.push_back({5 , 6 ,7 ,8});
//     for (int i = 0 ; i<corners.size() ; ++i){
//         cout << corners[i] << endl ;
//     }
//     return 0 ;

// }



// LAMBDA -------------->>>>>>>>>>..

// int main(){
//     auto sum = [](auto a , auto b){return a+b;};
//     cout<< "sum of 2 and 5 is :" << sum (2,5) << endl ;
//     cout<< "sum of 2.5 and 5.5 is : " << sum (2.5 , 5.5) << endl ;
//     string  a = "abc" ;
//     string b = "def" ;
//     cout << sum (a,b) << endl ;
//     return 0;
// }


// STL ----- >>>> STANDARD TEMPLATE LIBRARY 
// It takes generic programming to next level 
// something between pseudocode and actual code 
//  provides in built data structure and algorithms 

// #include <iostream>
// using namespace std ;
// template <typename T>
// T getBigger(T a ,T b){
//     return(a>b) ? a:b ;
// }
// int main(){
//     cout << getBigger(3.5 ,3.6) << endl ;
//     return 0;
// }



//eg : FUNCTORS / FUNCTION IN STL

// #include <iostream>
// using namespace std ;
// class MyFloat{
//     float ft ;
//     public:
//     MyFloat(){
//         ft = 0.1 ;
//     }
//     void getValue(){
//         cout << ft << endl ;
//     }
//     void operator () (float v){
//         ft+=v ;
//     }
// };
// int main(){
//     MyFloat floaty;
//     floaty.getValue();
//     floaty(1);
//     floaty.getValue();
//     floaty (1.3) ;
//     floaty.getValue();
//     return 0;
// }



// SORTING ALGORITHM IN STL 
// SORTING WORKS MOSTLY ON ITERATORS SO INSTEAD OF CALLING IT AS ARRAY WE CAN CALL IT AS ITERATOR .

// #include <iostream>
// using namespace std ;
// int main(){
//     int numbers[6] ={3,2,6,4,7,9};
//     cout << "unsorted values: " << endl ;
//     for (int n : numbers){
//         cout << n << " " ;
//     }
//     Sort(numbers , numbers+6) ;
//     cout << "SORTED values: " << endl;
//     for(int n : numbers){
//         cout << n << " " ;
//     }
//     return 0 ;
// }

//SEARCHING ALGORITHM IN STL 

// #include <iostream>
// using namespace std ;
// int main(){
//     int numbers[6] ={3,2,6,4,7,9};
//     cout << "unsorted values: " << endl ;
//     for (int n : numbers){
//         cout << n << " " ;
//     }
//     Sort(numbers , numbers+6) ;
//     if(binary_search(numbers , numbers+6 , 13)){
//         cout << "NUMBER FOUND " << endl ;
//     } else{
//         cout << "NUMBER NOT FOUND " << endl ;
//     }
//     cout << "SORTED values: " << endl;
//     for(int n : numbers){
//         cout << n << " " ;
//     }
//     return 0 ;
// }



// PARTITION AND STABLE PARTITION IN STL 
//eg :partition
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std ;
// int main(){
//     vector <int> myints ={1,2,3,4,5,6,7,8,9,10};
//     for(int x: myints){
//         cout << x << " " ;
//     }
//     cout << "\n" ;
//     return 0;
// // }

// stable partition
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std ;
// int main(){
//     vector <int> myints ={1,2,3,4,5,6,7,8,9,10};
//     for(int x: myints){
//         cout << x << " " ;
//     }
//     cout << "\n" ;
//     stable_partition(myints.begin() ,myints.end() ,[](auto x){
//         return x%2 ==0;
//     });
//     for (int x :myints){
//         cout << x << " " ;
//     }
//     cout << "\n" ;
//     return 0;
// }



// REVISITING VECTORS IN STL 


//  #include <iostream>
//  #include <algorithm>
//  #include <vector>
//  using namespace std ;

// int main(){
//     vector <int> nums ;
//     vector <string> heros {"batman" ,"flash" ,"superman" ,"robin"} ;
//     nums.push_back(5);
//     nums.push_back(6);
//     nums.push_back(7);
//     nums.push_back(8);

//     for (int i=0 ; i<=5 ; ++i){
//         nums.push_back(i) ;
//     }
//     cout << nums.size() << endl << nums.capacity() << endl << nums.max_size() << endl ;
//     cout << nums.empty () << endl;
//     for(auto i = nums.begin() ; i!=nums.end(); ++i){
//         cout << *i << " " ;
//     }
//     return 0 ;
// }



//LIST

// #include <iostream>
// #include <algorithm>
// #include <list>
// using namespace std ;
// int main(){
//     list <int> mylist ;
//     for(int i=3 ; i<=10 ; ++i){
//         mylist.push_back(i) ;
//     }
//     cout << mylist.front() << endl ;
//     cout << mylist.back() << endl ;

//     mylist.pop_back();
//     mylist.reverse();
//     for(auto i :mylist){
//         cout << i << " " ;
//     }
//     cout << endl ;
//     mylist.sort();
//     for(auto i :mylist){
//         cout << i << " " ;
//     }
//     cout << endl ;
// }


//  QUEUE

// #include <iostream>
// #include <algorithm>
// #include <queue>
// using namespace std ;
// int main(){
//     queue <int> myq ;
//     myq.push(10);
//     myq.push(12);
//     myq.push(14);
//     myq.push(16);

//     cout << myq.front() << endl ;
//     cout << myq.back() << endl ;
//     myq.pop();
//     cout << myq.front() << endl ;
//     while(!myq.empty()){
//         cout << " " << myq.front();
//         myq.pop();
//     }
//     cout << "\n" ;
//     cout << "outside" << endl ;
//     cout << myq.front() << endl ;
//     priority_queue <int> myq ;
//     mypq.push(10) ;
//     mypq.push(40) ;
//     mypq.push(50) ;
//     mypq.push(5) ;
//     while(!mypq.empty()){
//         cout << " " << myp.top();
//         mypq.pop() ;
//     }
//     cout << "\n" ;
// }
//------------------------------The end !!! -----------------------




















































    