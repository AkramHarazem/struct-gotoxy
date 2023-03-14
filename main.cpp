#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define num 2

using namespace std;


struct address
{
    string city;
    int st_no,bl_no;
};
struct employee
{
    int code,age;
    string name;
    float gross,bouns;
    address emp_add;
};

COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int i,j,index;
    employee emp[num];
    int headX=40, headY=2;
    int labelX=3, labelY=3;
    int dataX=3,  dataY=4;
    for(i=0; i<num; i++)
    {
        gotoxy(headX,headY);
        cout << "Enter the data of employee no."<<i+1<<endl;
        headY+=6;

        gotoxy(labelX,labelY);
        cout <<"code: ";
        labelX+=13;
        gotoxy(dataX,dataY);
        cin >> emp[i].code;
        dataX+=13;

        gotoxy(labelX,labelY);
        cout <<"name: ";
        labelX+=13;
        gotoxy(dataX,dataY);
        cin >> emp[i].name;
        dataX+=13;

        gotoxy(labelX,labelY);
        cout <<"age: ";
        labelX+=13;
        gotoxy(dataX,dataY);
        cin >> emp[i].age;
        dataX+=13;

        gotoxy(labelX,labelY);
        cout<<"gross-salary: ";
        labelX+=17;
        gotoxy(dataX,dataY);
        cin>> emp[i].gross;
        dataX+=17;


        gotoxy(labelX,labelY);
        cout<<"bouns: ";
        labelX+=13;
        gotoxy(dataX,dataY);
        cin>> emp[i].bouns;
        dataX+=13;

        gotoxy(labelX,labelY);
        cout <<"city: ";
        labelX+=13;
        gotoxy(dataX,dataY);
        cin >> emp[i].emp_add.city;
        dataX+=13;

        gotoxy(labelX,labelY);
        cout<<"street number: ";
        labelX+=17;
        gotoxy(dataX,dataY);
        cin >> emp[i].emp_add.st_no;
        dataX+=17;


        gotoxy(labelX,labelY);
        cout<<"building number: ";
        gotoxy(dataX,dataY);
        cin >> emp[i].emp_add.bl_no;

        labelX=3;
        labelY+=6;
        dataX=3;
        dataY+=6;
    }

    system("cls");



    for(i=0; i<num; i++)
    {
        int labelX=3;
        int dataX=3;
        gotoxy(1,1);
        cout << "\nEnter employee no."<<endl;
        cin>>index;

        gotoxy(40,5);
        cout << "Choosen Employee no. "<<index<<" data"<<endl;

        gotoxy(labelX,7);
        labelX+=13;
        cout <<"code: ";
        gotoxy(dataX,8);
        dataX+=13;
        cout<<emp[index-1].code;

        gotoxy(labelX,7);
        labelX+=13;
        cout <<"name: ";
        gotoxy(dataX,8);
        dataX+=13;
        cout<< emp[index-1].name;

        gotoxy(labelX,7);
        labelX+=13;
        cout <<"age: ";
        gotoxy(dataX,8);
        dataX+=13;
        cout<<emp[index-1].age;

        gotoxy(labelX,7);
        labelX+=17;
        cout<<"gross-salary: ";
        gotoxy(dataX,8);
        dataX+=17;
        cout<< emp[index-1].gross;

        gotoxy(labelX,7);
        labelX+=13;
        cout<<"bouns: ";
        gotoxy(dataX,8);
        dataX+=13;
        cout<< emp[index-1].bouns;

        gotoxy(labelX,7);
        labelX+=13;
        cout <<"city: ";
        gotoxy(dataX,8);
        dataX+=13;
        cout<< emp[index-1].emp_add.city;

        gotoxy(labelX,7);
        labelX+=17;
        cout<<"street number: ";
        gotoxy(dataX,8);
        dataX+=17;
        cout<< emp[index-1].emp_add.st_no;

        gotoxy(labelX,7);
        cout<<"building number: ";
        gotoxy(dataX,8);
        cout<< emp[index-1].emp_add.bl_no;
    }

////        for(j=index;;)
////        {
//        gotoxy(i,6);
//        cout<<" employee no." <<" code "<<" name "<<" age "<<" gross-salary "<<" bouns "<<" city "<<" street No. "<<" Building No. "<<endl;
//        gotoxy(i*2,9);
//        cout<<"  "<<index<<"  "<<emp[index-1].code<<"  "<<emp[index-1].name<<"  "<<emp[index-1].age<<"  "<<emp[index-1].gross<<"  "<<emp[index-1].bouns<<"  "
//            <<emp[index-1].emp_add.city<<"  "<<emp[index-1].emp_add.st_no<<"  "<<emp[index-1].emp_add.bl_no<<endl;
////            cout<<(emp[index-1][i],(i+1)*5);
////        }
//    }

    return 0;
}

//struct address
//{
//    string city;
//    int st_no,bl_no;
//};
//struct employee
//{
//    int code,age;
//    string name;
//    float gross,bouns;
//    address emp_add;
//};
//
//COORD coord= {0,0}; // this is global variable
//void gotoxy(int x,int y)
//{
//    coord.X=x;
//    coord.Y=y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
//}
//int main()
//{
//    int i, j,index;
//    char oper;
////    clrscr();
////    getch();
//    employee emp[num];
//    for(i=0; i<num; i++)
//    {
//
//        cout << "Enter employee no."<<i+1<<" code: ";
//        cin >> emp[i].code;
//        cout << "Enter employee no."<<i+1<<" name: ";
//        cin >> emp[i].name;
//        cout << "Enter employee no."<<i+1<<" age: ";
//        cin >> emp[i].age;
//        cout<< "Enter employee no."<<i+1<< " gross salary: ";
//        cin>> emp[i].gross;
//        cout<< "Enter employee no."<<i+1<< " bouns: ";
//        cin>> emp[i].bouns;
//        cout << "Enter employee no."<<i+1<<" city: ";
//        cin >> emp[i].emp_add.city;
//        cout << "Enter employee no."<<i+1<<" street number: ";
//        cin >> emp[i].emp_add.st_no;
//        cout << "Enter employee no."<<i+1<<" building number: ";
//        cin >> emp[i].emp_add.bl_no;
//
//    }
//
//    system("cls");
//
////    cout << "Enter employee no. or e for Exit"<<endl;
////    cin>>index;
//
//
//    cout << "Enter employee no. or e for Exit"<<endl;
//    cin>>index;
//
//    cout << "\n\t\tChoosed Employee data"<<endl;
////    printf("\n\t\tChoosed Employee data");
//    for(i=1; i<8; i++)
//    {
////        for(j=index;;)
////        {
//        gotoxy(i,6);
//        cout<<" employee no." <<" code "<<" name "<<" age "<<" gross-salary "<<" bouns "<<" city "<<" street No. "<<" Building No. "<<endl;
//        gotoxy(i*2,9);
//        cout<<"  "<<index<<"  "<<emp[index-1].code<<"  "<<emp[index-1].name<<"  "<<emp[index-1].age<<"  "<<emp[index-1].gross<<"  "<<emp[index-1].bouns<<"  "
//            <<emp[index-1].emp_add.city<<"  "<<emp[index-1].emp_add.st_no<<"  "<<emp[index-1].emp_add.bl_no<<endl;
////            cout<<(emp[index-1][i],(i+1)*5);
////        }
//    }
//
////    getch();
//    return 0;
//
//}
