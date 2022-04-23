#include<iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){

    char *value1, *value2, *number1, *number2;
    char *exit1, *exit2;

    if(argc-1 != 2){
        cout<<"Error \n"<<endl;
    }
    else{
        value1 = strtok(argv[1],".");
        while(value1 != NULL){
            value1 = strtok(NULL, ".");
            if(value1 != NULL)
                exit1 = value1;
            }
        number1 = strtok(argv[1],".");

        value2 = strtok(argv[2],".");
        while(value2 != NULL){
            value2 = strtok(NULL, ".");
            if(value2 != NULL)
                exit2 = value2;
            }
        number2 = strtok(argv[2],".");

        cout<<"\n"<<exit1<<endl;
        cout<<"\n"<<exit2<<endl;

        if(!strcmp(exit1, "txt")&& !strcmp(exit2, "txt"))
            cout << (atoi(number1)+atoi(number2))/2 << endl;

        else if(!strcmp(exit1, "png")&& !strcmp(exit2, "png"))
            cout << atoi(number1)+atoi(number2) << endl;

        else if(!strcmp(exit1, "txt")&& !strcmp(exit2, "png"))
            cout << "" <<endl;

        else{
            fprintf(stderr, "“Error!” \n");
        }

    }
}
