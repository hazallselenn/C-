#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //random number generation
    int random_number=0;
    srand(time(NULL));
    random_number = 0+rand()%99;
    cout<<"random number:"<<random_number<<endl;

    while(1){
    //get the number to guess
    int number = 0;
    cout<<"enter the number:"<<endl;
    cin>>number;

    //case of entering a data other than a number
    if(cin.fail()){
        cout<< "Error encountered, exiting..."<<endl;
        exit(1);
    }



    else if(number >= 0 && number <= 99){

        if(random_number > number){
        cout<<"guessed number is less than random number"<<endl;}
        else if (random_number < number){
        cout<<"guessed number is greater than random number"<<endl;}
        else if (random_number == number){
        cout << "number found"<<endl;
        break;
        }
    }


    //Case of entering numbers outside the range of 0-99
    else{
        cout<<"[WARNING] number entered must be between 0 and 99"<<endl;
    }




    }








    return 0;
}
