#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <vector>
using namespace std;
#ifdef _MSC_VER
#define getch() _getch()
#endif

using namespace std ;

void Shownamehotel(){

    cout << "                                                            **************************************************************\n" ;
    cout << "                                                            * *  *                                                  *  * *\n" ;
    cout << "                                                            **  *                                                    *  **\n" ;
    cout << "                                                            * *                 Compro project Hotel                   * *\n";
    cout << "                                                            **  *                                                    *  **\n" ;
    cout << "                                                            * *  *                                                  *  * *\n" ;
    cout << "                                                            **************************************************************\n" ;
    
}

void moveText(string inputStr, int scrLen)
{
    string displatScr="";
    int inputStrLen=inputStr.length();

    if(inputStrLen<scrLen)
    {

        inputStr.append(scrLen-inputStrLen,' ');
        inputStrLen=inputStr.length();
    }

    int i=0,j=0;

    while(true)
    {
        if(i+scrLen<inputStrLen)
        {
            displatScr=inputStr.substr(i,scrLen);
            cout << displatScr << endl;
            system("cls");
        }
        else
        {

            displatScr=inputStr.substr(i,inputStrLen-i)+inputStr.substr(0,j);
            cout << displatScr << endl;
            system("cls");
            j++;
        }
        i++;
        if(i==inputStrLen)
        {
            i=0;
        }
        if(j==scrLen)
        {
            j=0;
        }
    }
}
void reservation(){
    int age , hmn , room , hmr ,room1 ,room2, sum1,sum2 ,total ,yn,g ;
    string name ,surname, wf ,number ;
    string space = "                           " ;
    do
    {
        system("cls");
        Shownamehotel();
            cout<< endl << space << "Please input your presonal information"<<endl;
            cout<< endl << space <<  "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Please input your name : ";
            cin>>name ;
            cout<< space << "Please input your surname : ";
            cin>>surname ;
            cout<< space << "Please input your age : ";
            cin>> age ;
            cout<< space << "Please input your phone number : " ;
            cin >> number ;
            system("cls") ;
        Shownamehotel() ;
            cout << endl ;
            cout<< space << "Please input your presonal information"<<endl;
            cout<<endl;
            cout<< space << "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Name : "<<name <<" "<<surname<<endl ;
            cout<< space << "Age  : "<<age <<endl ;
            cout<< space << "Phone number :"<< number <<endl;
            cout<< space << "______________________________________________________________"<<endl<<endl ;
            cout<< space << "When do you come?"<<endl ;
            cout<< space << "Day (d/m/25xx) :" ;
            cin>>wf ;
            cout<< space << "How long will you be staying?:" ;
            cin>>hmn ;
            do{
            cout<<space << "And would you like a room ?"<<endl ;
            cout << space <<  "1. A double room. 600 bath/night :";
            cin >> room1  ;
            sum1=(600*room1)*hmn;
            cout << space <<  "2. A twin room. 800 bath/night :" ;
            cin >> room2 ;
            sum2=(800*room2)*hmn;
            if(room1 >= 7 || room2 >=7){
                cout << space << "This hotel has double rooms and twin rooms 6 rooms each."<<endl ;
            }
            }
            while(room1 >= 7 || room2 >=7) ;
            total = sum1+sum2 ;
            cout<< space << "Price : "<<total<<" bath"<<endl ;
        system("cls") ;
        Shownamehotel() ;
            cout<< space << "Name : "<<name<<" "<<surname<<endl;
            cout<< space << "Age : "<< age <<" years old"<<endl ;
            cout<< space << "Tel. : "<<number<<endl ;
            cout<< space << "Day "<<wf<<endl ;
            cout<< space << "How long will you stay : "<<hmn<<" night"<<endl ;
            cout<< space << " 1. A double room. : "<<room1<<endl ;
            cout<< space << " 2. A twin room. : "<<room2<<endl ;
            cout<< space << "Price : "<<total<<" bath"<<endl ;
            cout<< space << "______________________________________________________________" ;
            cout<<endl ;
            cout<< space << "Please verty that the information is correct or not."<<endl ;
            cout<< space << "Yes =1 or No =0"<<endl;
            cout<< space << "Input number : ";
            cin >> yn ;
    }
    while(yn == 0) ;
        if(yn == 1)
        {
            system("cls");
            Shownamehotel();
            cout << endl ;
            cout<< space << "Name : "<<name<<" "<<surname<<endl;
            cout<< space << "Age : "<< age <<" years old"<<endl ;
            cout<< space << "Tel. : "<<number<<endl ;
            cout<< space << "Day "<<wf<<endl ;
            cout<< space << "How long will you stay : "<<hmn<<" night"<<endl ;
            cout<< space << " 1. A double room. : "<<room1<<endl ;
            cout<< space << " 2. A twin room. : "<<room2<<endl ;
            cout<< space << "Price : "<<total<<" bath"<<endl ;
            cout << endl ;
            cout << space << "**************************************************************" << endl ;
            cout << endl ;
            cout << space << "Press Enter 1 times to exit the program.";
            cin.get();
            cin.get();
            moveText("***************THANKS COMPLATION LIST*************Thank you for booking***************",113) ;
        }
}

int main(){
    string name ;
    string word ;
    int start = 0 ;
    Shownamehotel() ;
    cout << "Hotel: Hello can you tell me your name ?\n";
    cout << "??????:" ;
    getline(cin,name) ;
    cout << "Hotel: Is there anything We can help you with ?\n" ;
    cout << name << ": " ;
    getline(cin,word) ;
    int end = word.find_first_of(" ") ;
    while(end != -1){
    if(word.substr(start,end-start) == "reservation"){
        reservation() ;
        end = word.find_first_of(" ") ;
        break ;
        }
        start = end+1 ;
        end = word.find_first_of(" ",start);
    }
    while(end != -1){
    if(word.substr(start,end-start) == "description"){
        cout << "bigloso" ;
        end = word.find_first_of(" ") ;
        break ;
        }
        start = end+1 ;
        end = word.find_first_of(" ",start);
    }
    
    return 0 ;
}
