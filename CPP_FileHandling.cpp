// #include <iostream>
// #include <fstream>
// #include <conio.h>
// #include <limits>
// #include <windows.h>
// using namespace std;
// int main(){
//     int n;
//     char c;
//     string name;
//     ifstream myfile;
//     system("cls");
//     restart :
//     cout<<"Would you like to input,output,replace,delete or exit (i/o/r/d/e): ";
//     cin>>c;
//     system("cls");
//     choice:
//     if(c=='i'){
//         cout<<"How many names need to be entered ? : ";
//         cin>>n;
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         fstream myfile("listOfNames.txt",ios::app);
//         if(myfile.is_open()){
//             for(int i=0;i<n;i++){
//                 cout<<"Enter Your Name : ";
//                 getline(cin,name);
//                 myfile<<name+"\n";
//             }
//             myfile.close();
//         }  
//     }
//     else if(c =='o'){
//         ifstream myfile("listOfNames.txt");
//         if(myfile.is_open()){
//             while(getline(myfile,name)){
//                 cout<<name<<endl;;
//             }
//             myfile.close();
//         }
//         getch();
//     }
//     else if(c=='d'){
//         bool present=false;
//         string line;
//         cout<<"Enter the name you want to remove : ";
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         getline(cin,name);
//         ifstream myfile("listOfNames.txt");
//         if(myfile.is_open()){
//             ofstream temp("temp.txt");
//             if(temp.is_open()){
//                 while (getline(myfile, line)){
//                     if (line != name){
//                         temp << line << endl;
//                     }
//                     else {
//                         present =true;
//                     }
//                 }
//                 myfile.close();
//                 temp.close();
//                 remove("listOfNames.txt");
//                 rename("temp.txt", "listOfNames.txt");
//                 if(present){
//                     cout<<"Successfully deleted !";                   
//                 }
//                 else{
//                     cout<<"Name not present !";
//                 }
//             }
//         }
//         getch();
//     }
//     else if(c=='r'){
//         string name2;
//         bool present=false;
//         string line;
//         cout<<"Enter the name you want to replace : ";
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         getline(cin,name);
//         cout<<"Enter the name you want to enter : ";
//         getline(cin,name2);
//         ifstream myfile("listOfNames.txt");
//         if(myfile.is_open()){
//             ofstream temp("temp.txt");
//             if(temp.is_open()){
//                 while (getline(myfile, line)){
//                     if (line != name){
//                         temp << line << endl;
//                     }
//                     else {
//                         temp<<name2+"\n";
//                         present =true;
//                     }
//                 }
//                 myfile.close();
//                 temp.close();
//                 remove("listOfNames.txt");
//                 rename("temp.txt", "listOfNames.txt");
//                 if(present){
//                     cout<<"Successfully Replaced !";                   
//                 }
//                 else{
//                     cout<<"Name not present !";
//                 }
//             }
//         }
//         getch();
//     }
//     else if(c=='e'){
//         return 0;
//     }
//     system("cls");
//     goto restart;
// }