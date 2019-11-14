#include <iostream>

using namespace std;
int inputarrSize();
void getBasicinfo(string[], string[], int[], int[], string[], string[], string[]);
void disPlayarray(string[], string[], int[], int[], string[], string[], string[]);


int arrSize;

int main()
{
    string firstname [10];
    string lastname[10] ;
    int age[10];
    int contact[10];
    string email[10];
    string address[10];
    string username[10];
    getBasicinfo(firstname, lastname, age, contact, email, address, username);
    disPlayarray(firstname, lastname, age, contact, email, address, username);

    return 0;
}

int inputarrSize()
{
    int age [arrSize];

    cout <<" Enter Array Size:";
    cin >> arrSize;

    return arrSize;
}

void getBasicinfo(string firstname[], string lastname[], int age[], int contact[], string email[], string address[], string username[])
{
    inputarrSize();
    for (int i=0;i<arrSize;i++){
    cout <<" Firstname "<< ":";
    cin >> firstname[i];
    }

     for (int i=0;i<arrSize;i++){
    cout <<" Lastname "<< ":";
    cin >> lastname[i];
    }

    for (int i=0;i<arrSize;i++){
    cout <<" Age "<< ":";
    cin >> age[i];
    }

    for (int i=0;i<arrSize;i++){
    cout <<" Contact "<< ":";
    cin >> contact[i];
    }

    for (int i=0;i<arrSize;i++){
    cout <<" E-mail "<< ":";
    cin >> email[i];
    }

    for (int i=0;i<arrSize;i++){
    cout <<" Address "<< ":";
    cin >> address[i];
    }

    for (int i=0;i<arrSize;i++){
    cout <<" Username "<< ":";
    cin >> username[i];
    }
}

void disPlayarray(string firstname[], string lastname[], int age[], int contact[], string email[], string address[], string username[]){

    for (int i=0;i<arrSize;i++){
    cout << firstname [i]<< "|" << lastname[i]<< "|" << age[i]<< "|" << contact[i]<< "|" << email[i]<< "|" << address[i]<< "|" << username[i]<<endl ;
    }
}
