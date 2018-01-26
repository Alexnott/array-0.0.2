#include "stdafx.h"

#include <iostream>

#include <conio.h> 

#include <Windows.h>

using namespace std ;



int _tmain(int argc, _TCHAR* argv[])

{

    SetConsoleOutputCP(1251);

    int Nx;

    Nx=10;

    int *Mass1 =new int [Nx]; 

    int *Mass2 =new int [Nx];

    //int Mass1[10]={1,2,3,4,5,6,7,8,9,10};

//int Mass2[10]={1,2,3,42,5,6,7,8,9,10};//

        cout<<"ввод"<<endl;

    for (int i=0; i<10; i++) {

        cin>>Mass1[i];

    }

    cout<<"===="<<endl;

    for (int i=0; i<10; i++) {

        cin>>Mass2[i];


    }

        cout<<"===="<<endl;

    int max1=Mass1 [0];

    int max2=Mass2 [0];

    for (int i=0; i<10; i++) 

    {

        if ( Mass1 [i] > max1 ) {

            max1=Mass1 [i] ; 

        }

    }

    for (int i=0; i<10; i++) 

    {

        if ( Mass2 [i] > max2 ) {

            max2=Mass2 [i] ; 

        }

    }

    cout << endl;

    cout <<(max1+max2);

    _getch ( ) ;







    //delete Mass1;

    //delete Mass2;

    return 0;

}
