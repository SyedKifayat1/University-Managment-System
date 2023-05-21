#include<bits/stdc++.h>
#include "function.h"
using namespace std;

void intro()
{

cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n ";
cout<<"\t\t\t\t\t\t\t\t /------------------WEL COME TO------------------\\\n\n";
cout<<"\t\t\t\t\t\t\t\t/--------INFORMATION TECHNOLOGY UNIVERSITY--------\\\n\n\n";
cout<<"\t\t\t\t\t\t\t =================\t=================\t=================\n\n";
cout<<"\t  DATE IS ! \n";
system("date");
cout<<"\n\n";
cout<<"\t\t\t\t\t\t\t \t \t       SELECT YOUR CHOICE !\n\n\n";
cout<<"\t\t\t \t\t\t\t\t \t\t     ARE YOU !\n\n\n";
cout<<"\t\t\t\t\t\t\t1).ADMIN:";
cout<<"\t\t\t\t\t\t    2).TEACHER:\n\n\n";
cout<<"\t\t\t\t\t\t\t3).STUDENT:";
cout<<"\t\t\t \t\t\t    4).EXIT:\n\n\n";
int choice;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

cout<<"\t\t\t\t\t\t\t\t\t\t\t   ";
cin>>choice;
    switch (choice)
    {
        case 1:
        {
            cout<<endl;
        login_adm();                    //calling admin login page
            break;
        }
        case 2:
        {
            cout<<endl;
            login_teach();          //calling teacher login page
            break;
        }
        case 3:
        {
            cout<<endl;
            login_std();             //calling student login page
            break;
        }

        case 4:
        {
            cout<<endl;
            exit(0);            // it can exit the program

           break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();              //it can pause the program until user press enter key
            cout<<endl;
            intro();              //recalling current function
            break;
        }
    }

}
void admin()
{

    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t \t\t\t\t\t --------WEL COME TO ADMIN REPOSITORY--------\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t  \t\t\t\t\t  WHICH DATA YOU WANT TO ACCESS !\n\n\n";
    cout<<"\t\t\t\t\t\t    1).TEACHER:\t\t\t\t\t";
    cout<<"\t\t  2).STUDENT:\n\n";
    cout<<"\t\t\t\t\t\t    3).ADMIN DETAILS:\t\t\t\t\t";
    cout<<"\t  4).ADD ADMIN:\n\n";
    cout<<"\t\t\t\t\t \t    5).ADD YOUR DETAILS:";
    cout<<"\t\t\t\t\t  6).BACK:\n\n";
    int choice ;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t\t ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        {
           cout<<endl;
              adm_tec();
            break;
        }
        case 2:
        {
            cout<<endl;
             adm_stud();
            break;
        }
        case 3:
        {
            cout<<endl;
            adm_details();
            break;
        }
        case 4:
        {
            cout<<endl;
          registr_adm();
        }
        case 5:
        {
            cout<<endl;
            adm_detail();
        }
        case 6:
        {
            cout<<endl;
           login_adm();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            admin();
            break;
        }

    }

}
void student()
{
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t\t\t\t\t \t --------------WEL COME DEAR STUDENT--------------\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n\n";
    cout<<"\t\t\t\t\t\t\t    1).LOGIN:";
    cout<<"\t\t\t\t\t      2).BACK:\n\n";
    int choice ;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t\t";
    cin>>choice;
    switch (choice)
    {
        case 1:
        {
            cout<<endl;
             login_std();

            break;
        }
        case 2:
        {
            cout<<endl;
            intro();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            student();
            break;
        }

    }
}
void teacher()
{
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t\t\t\t\t\t  --------WEL COME TO TEACHER  REPOSITORY--------\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t       SELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t WHICH DATA YOU WANT TO ACCESS !\n\n\n";
    cout<<"\t\t\t\t\t\t    1).ATTENDANCE:";
    cout<<"\t\t\t\t\t\t    2).MARKS:\n\n";
    cout<<"\t\t\t\t\t\t    3).TIME TABLE:";
    cout<<"\t\t\t\t\t\t    4).BACK:\n\n";
    int choice ;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t        ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        {
            cout<<endl;
            std_attan();
            break;
        }
        case 2:
        {
            cout<<endl;
            teach_marks();
            break;
        }
        case 3:
        {
            cout<<endl;
            tec_table();
            break;
        }

        case 4:
        {
            cout<<endl;
            intro();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            teacher();
            break;
        }

    }
}

void adm_tec()
{
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t \t\t\t\t\t\\--------WEL COME TO ADMIN REPOSITORY---------/\n ";
    cout<<"\t\t\t \t\t\t\t\t \\------------------TEACHER------------------/\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).ADDING NEW TEACHER:";
    cout<<"\t\t\t\t\t  2).ASSIGNING CLASS:\n\n";
    cout<<"\t\t\t\t\t\t    3).REPLACING:";
    cout<<"\t\t\t\t\t\t  4).DELETE DATA:\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t      5).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice ;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t   ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            cout<<endl;
            registr_teach();
            break;
        }
        case 2:
        {
            cout<<endl;
            assign_cls();
            break;
        }
        case 3:
        {
            cout<<endl;
            replace_tec();
            break;
        }
        case 4:
        {
            cout<<endl;
            del_teacher();
            cin.get();
            cin.get();
            break;
        } case 5:
        {
            cout<<endl;
            admin();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            adm_tec();
            break;
        }
    }
}
void adm_stud()
{
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t \t\t\t\t\t\\--------WEL COME TO ADMIN REPOSITORY---------/\n ";
    cout<<"\t\t\t \t\t\t\t\t \\------------------STUDENT------------------/\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).BIO DATA:";
    cout<<"\t\t\t\t\t\t  2).RESULTS:\n\n";
    cout<<"\t\t\t\t\t\t    3).ADD STUDENT:";
    cout<<"\t\t\t\t\t\t  4).REMOVE STUDENT:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      5).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice ;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            string user,line;
            cout<<"ENTER A ROLL NO:";cin>>user;
            ifstream read(user+" bio_data.txt");
            while (getline(read,line))
            {
                cout<<line<<endl;
            }
            read.close();
            cout<<"\nPRESS ENTER TO CONTINUE....";
            cin.get();
            cin.get();
            adm_stud();
            break;
        }
        case 2:
        {
            cout<<endl;
            student_result();
            break;
        }
        case 3:
        {
            cout<<endl;
             registr_std();
            break;
        }
        case 4:
        {
            cout<<endl;
           remove_std();

            break;
        }
        case 5:
        {
            cout<<endl;
            admin();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            adm_stud();
            break;
        }
    }


}

void login_std() {
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t\t\t\t\t \t\\-------------WEL COME DEAR STUDENT-------------/\n ";
    cout << "\t\t\t\t\t\t\t \t \\--------------LOGIN YOUR ACCOUNT-------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout << "\t\t\t\t\t\t\t    1).LOGIN:";
    cout << "\t\t\t\t\t     2).FORGOT PASSWORD:\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    int choice;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin >> choice;

    switch (choice) {
        case 1: {
            {
                int exist;
                string user, pass, u, p;
                system("cls");
                cout << "ENTER A ROLL NO :";
                cin >> user;
                cout << "ENTER A PASSWORD :";
                cin >> pass;
                ifstream input("Student Passwords.txt");
                while (input >> u >> p) {
                    if (u == user && p == pass) {
                        exist = 1;
                    }

                }
                input.close();
                if (exist == 1) {
                    cout << "HELLO " << user << "\nPRESS ENTER TO CONTINUE.....";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    student_aft();
                } else {
                    cout << "SORRY LOGIN ERROR (444)......";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    login_std();
                }
            }
        }
            break;
        case 2:
        {
            cout<<endl;
        forgot_std();
        break;
        }
        case 3:
        {
            cout<<endl;
            intro();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            login_std();
            break;
        }
    }


}
void registr_std()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t       \\----------WEL COME TO REGISTRATION CENTER----------/\n ";
    cout << "\t\t\t\t\t\t\t        \\----------------REGISTER  ACCOUNT----------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    k:
    string RollNo,pass,name,batch;
    system("cls");
    getline(cin,name);
    cout<<"STUDENT NAME :";getline(cin,name);
    cout<<"ENTER A BATCH :";cin>>batch;
    cout<<"ASSIGN ROLL NO Eg.(BSCE22026):";cin>>RollNo;
    cout<<"ENTER A PASSWORD :";cin>>pass;




    ofstream roll(batch+".txt",ios::app);
    roll<<"ROLL NO:"<<" "<<RollNo<<" "<<"NAME:"<<name<<" "<<"BATCH :"<<batch<<"\n";
    ofstream reg("Student Passwords.txt",ios::app);
    ofstream regs("Student Password.txt",ios::app);
    reg<<RollNo<<' '<<pass<<endl;
    regs<<RollNo<<endl;
    system("cls");
    roll.close();
    reg.close();
    regs.close();
    cout<<"REGISTRATION IS SUCCESSFUL\n";
    cout<<"ENTER Y/y TO ENTER MORE STUDENT";
    char ch;
    cin>>ch;
    if (ch=='y'||ch=='Y')
    {
        goto k;
    }
    cout<<"PLEASE ENTER TO CONTINUE.....";
    cin.get();
    cout<<endl;


    adm_stud();
}
void forgot_std()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t \t\\----------WEL COME TO RECOVERY CENTER----------/\n ";
    cout << "\t\t\t\t\t\t\t \t \\-------------RECOVER YOUR ACCOUNT------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    int ch;
    system ("cls");
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t    1).SEARCH YOUR ACCOUNT BY ROLL NO:";
    cout<<"\t\t    2).SEARCH YOUR ACCOUNT BY PASSWORD:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>ch;
    switch (ch)
    {
        case 1:
        {
            int ex=0;
            string user,su,sp;
            cout<<"ENTER A ROLL NO :";cin>>user;
            ifstream find("Student Passwords.txt");
            while(find>>su>>sp)
            {
                if(user==su)
                {
                    ex=1;
                    break;
                }
            }

            find.close();
            if(ex==1)
            {
                cout<<"CONGRATULATION YOUR ACCOUNT IS FOUND\n";
                cout<<"YOUR ROLL NO IS :"<<su;
                cout<<"YOUR PASSWORD IS :"<<sp;
                cout<<"YOUR ACCOUNT IS FOUND\n";
                cout<<"PLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
               login_std();
            }
            else
            {
                cout<<"SORRY YOUR ACCOUNT IS NOT FOUND\n";
                cout<<"PLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                forgot_std();
            }
            break;

        }
        case 2:
        {


            int ex=0;
            string serpas,su1,sp2;
            cout<<"Enter your password :";cin>>serpas;
            ifstream intp("Student Passwords.txt");
            while(intp>>su1>>sp2)
            {
                if(sp2==serpas)
                {
                    ex=1;
                    break;
                }
            }
            intp.close();
            if(ex==1)
            {
                cout<<"CONGRATULATION YOUR ACCOUNT IS FOUND\n";
                cout<<"YOUR ROLL NO IS :"<<su1;
                cout<<"\nYOUR PASSWORD IS :"<<sp2<<endl;
                cout<<"PLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                login_std();
            }
            else
            {
                cout<<"SORRY YOUR ACCOUNT IS NOT FOUND\n";
                cout<<"PLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                forgot_std();
            }
            break;

        }
        case 3:
        {
            cout<<endl;
            login_std();
            break;

        }
        default:
        {
                cout<<"\nINVALID CHOICE..";
                cout<<"PLEASE ENTER TO CONTINUE.....";
                cin.get();
                cin.get();
            cout<<endl;
            forgot_std();
            break;
        }

    }


}
void student_aft()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t \t\\--------WEL COME TO STUDENT  REPOSITORY--------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).RESULTS:";
    cout<<"\t\t\t\t\t\t  2).BIO DATA:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    int choice ;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {

        case 1:
        {
            cout<<endl;
             std_result();
            break;
        }


        case 2:
        {
            cout<<endl;
            std_per_data();
            break;
        }
        case 3:
        {
            cout<<endl;
            login_std();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            student_aft();
            break;
        }

    }

}
void login_adm() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n";
    cout<<"\t\t\t\t\t\t\t \t  /--------------WEL COME ADMIN--------------\\\n\n ";
    cout<<"\t\t\t\t\t\t\t \t /-------------LOGIN YOUR ACCOUNT-------------\\\n\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n\n";
    cout << "\t\t\t\t\t\t\t    1).LOGIN:";
    cout << "\t\t\t\t\t     2).FORGOT PASSWORD:\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t      3).BACK:\n\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice;
    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin >> choice;

    switch (choice) {
        case 1: {
            {
                int exist;
                string user, pass, u, p;
                system("cls");
                cout << "ENTER A USERNAME :";
                cin >> user;
                cout << "ENTER A PASSWORD :";
                cin >> pass;
                ifstream input("Admin Passwords.txt");
                while (input >> u >> p) {
                    if (u == user && p == pass) {
                        exist = 1;
                    }

                }
                input.close();
                if (exist == 1) {
                    cout << "HELLO " << user << "\nPRESS ENTER TO CONTINUE.....";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    admin();
                } else {
                    cout << "SORRY LOGIN ERROR (444)......";
                    cout<<"\nPRESS ENTER TO CONTINUE.....";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    login_adm();
                }
            }
        }
            break;
        case 2:
        {
            cout<<endl;
            forgot_adm();
            break;
        }
        case 3:
        {
            cout<<endl;
            intro();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            login_adm();

            break;
        }
    }


}
void registr_adm()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t\t\\----------WEL COME TO REGISTRATION CENTER----------/\n ";
    cout << "\t\t\t\t\t\t\t\t \\--------------REGISTER  YOUR ACCOUNT-------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    string reguser,pass;
    system("cls");
    cout<<"ENTER A USER NAME :";cin>>reguser;
    cout<<"ENTER A PASSWORD :";cin>>pass;
    ofstream reg("Admin Passwords.txt",ios::app);
    reg<<reguser<<' '<<pass<<endl;
    system("cls");
    cout<<"YOUR REGISTRATION IS SUCCESSFUL\n";
    cout<<"PLEASE ENTER TO CONTINUE.....";
    cin.get();
    cin.get();
    cout<<endl;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    admin();


}
void forgot_adm()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t \t\\----------WEL COME TO RECOVERY CENTER----------/\n ";
    cout << "\t\t\t\t\t\t\t \t \\-------------RECOVER YOUR ACCOUNT------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    int ch;
    system ("cls");
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t    1).SEARCH YOUR ACCOUNT BY USER NAME:";
    cout<<"\t\t    2).SEARCH YOUR ACCOUNT BY PASSWORD:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>ch;
    switch (ch)
    {
        case 1:
        {
            int ex=0;
            string user,su,sp;
            cout<<"\nENTER YOUR USERNAME :";cin>>user;
            ifstream find("Admin Passwords.txt");
            while(find>>su>>sp)
            {
                if(user==su)
                {
                    ex=1;
                    break;
                }
            }cout<<"\nYOUR PASSWORD IS :"<<sp;

            find.close();
            if(ex==1)
            {
                cout<<"\nCONGRATULATION YOUR ACCOUNT IS FOUND..\n";
                cout<<"PLEASE ENTER TO CONTINUE.....";
                cin.get();
                cin.get();
                cout<<endl;
                login_adm();
            }
            else
            {
                cout<<"\nSORRY YOUR ACCOUNT IS NOT FOUND..\n";
                cout<<"PLEASE ENTER TO CONTINUE.....";
                cin.get();
                cin.get();
                cout<<endl;
               forgot_adm();
            }
            break;

        }
        case 2:
        {


            int ex=0;
            string serpas,su1,sp2;
            cout<<"\nENTER YOUR PASSWORD :";cin>>serpas;
            ifstream intp("Admin Passwords.txt");
            while(intp>>su1>>sp2)
            {
                if(sp2==serpas)
                {
                    ex=1;
                    break;
                }
            }
            intp.close();
            if(ex==1)
            {
                cout<<"\nYOUR ACCOUNT IS FOUND..\n";
                cout<<"\nYOUR USER NAME IS :"<<su1;
                cout<<"\nYOUR PASSWORD IS :"<<sp2<<endl;
                cout<<"\nPLEASE ENTER TO CONTINUE.....";
                cin.get();
                cin.get();
                cout<<endl;
                login_adm();
            }
            else
            {
                cout<<"\nSORRY YOUR ACCOUNT IS NOT FOUND..\n";
                cout<<"PLEASE ENTER TO CONTINUE.....";
                cin.get();
                cin.get();
                cout<<endl;
                forgot_adm();

            }
            break;

        }
        case 3:
        {
            admin();
            break;

        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            forgot_adm();
            break;
        }

    }


}
void login_teach() {
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\\-------------WEL COME DEAR TEACHER-------------/\n ";
    cout<<"\t\t\t\t\t\t\t\t \\--------------LOGIN YOUR ACCOUNT-------------/\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout << "\t\t\t\t\t\t\t    1).LOGIN:";
    cout << "\t\t\t\t\t     2).FORGOT PASSWORD:\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    int choice;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin >> choice;

    switch (choice) {
        case 1: {
            {
                int exist;
                string user, pass, u, p,ch;
                system("cls");
                cout << "ENTER A USERNAME :";
                cin >> user;
                cout << "ENTER A PASSWORD :";
                cin >> pass;
                ifstream input("Teacher Passwords.txt");

                while (input>>u>>p) {
                    if (u == user && p == pass) {
                        exist = 1;
                    }

                }
                input.close();
                if (exist == 1) {
                    cout << "HELLO " << user << "\nPRESS ENTER TO CONTINUE.....";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    teacher();
                } else {
                    cout << "SORRY LOGIN ERROR (444)......\n";
                    cout<<"PLEASE ENTER TO CONTINUE.....";
                    cin.get();
                    cin.get();
                    cout<<endl;
                    login_teach();
                }

            }
        }
            break;
        case 2:
        {
            cout<<endl;
            forgot_teach();
            break;
        }
        case 3:
        {
            cout<<endl;
            intro();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..\n";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            login_teach();
            break;
        }
    }


}
void registr_teach()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t\t\\---------WELCOME TO REGISTRATION CENTER---------/\n ";
    cout << "\t\t\t\t\t\t\t\t \\-----------REGISTER TEACHER ACCOUNT-----------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    string reguser,pass;
    system("cls");
    cout<<"ENTER A USER NAME :";cin>>reguser;
    cout<<"ENTER A PASSWORD :";cin>>pass;
    ofstream reg("Teacher Passwords.txt",ios::app);

    reg<<reguser<<' '<<pass<<endl;
    system("cls");
    cout<<"REGISTRATION IS SUCCESSFUL\n";
    cout<<"PLEASE ENTER TO CONTINUE.....";
    cin.get();
    cin.get();
    cout<<endl;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    admin();
}
void forgot_teach()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t \t\\----------WELCOME TO RECOVERY CENTER-----------/\n ";
    cout << "\t\t\t\t\t\t\t \t \\-------------RECOVER YOUR ACCOUNT------------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    int ch;
    system ("cls");
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t    1).SEARCH YOUR ACCOUNT BY USER NAME:";
    cout<<"\t\t    2).SEARCH YOUR ACCOUNT BY PASSWORD:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>ch;
    switch (ch)
    {
        case 1:
        {
            int ex=0;
            string user,su,sp;
            cout<<"\nENTER A USERNAME :";cin>>user;
            ifstream find("Teacher Passwords.txt");
            while(find>>su>>sp)
            {
                if(user==su)
                {
                    ex=1;
                    break;
                }
            }

            find.close();
            if(ex==1)
            {
                cout<<"\nCONGRATULATION YOUR ACCOUNT IS FOUND\n";
                cout<<"YOUR USER NAME IS :"<<su;
                cout<<"\nYOUR PASSWORD IS :"<<sp;
                cout<<"\nYOUR ACCOUNT IS FOUND\n";
                cout<<"\nPLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                login_teach();
            }
            else
            {
                cout<<"\nSORRY YOUR ACCOUNT IS NOT FOUND\n";
                cout<<"PLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                forgot_teach();
            }
            break;

        }
        case 2:
        {


            int ex=0;
            string serpas,su1,sp2;
            cout<<"\nEnter your password :";cin>>serpas;
            ifstream intp("Teacher Passwords.txt");
            while(intp>>su1>>sp2)
            {
                if(sp2==serpas)
                {
                    ex=1;
                    break;
                }
            }
            intp.close();
            if(ex==1)
            {
                cout<<"CONGRATULATION YOUR ACCOUNT IS FOUND\n";
                cout<<"\nYOUR USER NAME IS :"<<su1;
                cout<<"\nYOUR PASSWORD IS :"<<sp2<<endl;
                cout<<"\nPLEASE ENTER TO CONTINUE......";

                cin.get();
                cin.get();
                cout<<endl;
                login_teach();
            }
            else
            {
                cout<<"\nSORRY YOUR ACCOUNT IS NOT FOUND\n";
                cout<<"\nPLEASE ENTER TO CONTINUE......";
                cin.get();
                cin.get();
                cout<<endl;
                forgot_teach();
            }
            break;

        }
        case 3:
        {
            cout<<endl;
            login_teach();
            break;

        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"\nPLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            forgot_teach();
            break;
        }

    }
}
void std_per_data()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t\t    \t\\--------WELCOME TO YOUR PERSONAL DATA--------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).ADD DATA:";
    cout<<"\t\t\t\t\t\t  2).CHECK DATA:\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    int choice ;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            cout<<endl;
            std_bio();

            break;
        }
        case 2:
        {
            cout<<endl;
            std_check_data();
            break;
        }


        case 3:
        {
            cout<<endl;
            student_aft();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"\nPLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            std_per_data();
            break;
        }

    }
}
void std_result()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t \t\t\\--------WEL COME TO YOUR RESULTS--------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).QUIZ :";
    cout<<"\t\t\t\t\t\t  2).ASSIGMENT :\n\n";
    cout<<"\t\t\t\t\t\t    3).MID TERM:";
    cout<<"\t\t\t\t\t  4).FINAL TERM:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      5).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice ;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            quiz_result_std();
            cout<<"\nPRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        }
        case 2:
        {
            assignment_result_std();
            cout<<"\nPRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        }
        case 3:
        {
            mid_result_std();
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        }
        case 4:
        {
            final_result_std();
            cout<<"\nPRESS ENTER TO CONTINUE........";
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        } case 5:
        {
           student_aft();
            cout<<endl;

            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        }
    }
}

void adm_details()
{
    string user,line;
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t \t\t\t\\--------WEL COME TO ADMIN DETAILS--------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"ENTER A USERNAME :";cin>>user;
    ifstream read(user+".txt");
    while (getline(read,line))
    {
        cout<<line<<endl;
    }
    read.close();
    cout<<"\nPRESS ENTER TO CONTINUE....";
    cin.get();
    cin.get();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    admin();
}
void std_attan()
{
    string user;
    string att;
    ifstream file("Student Password.txt");
    ofstream file1("temprary.txt");
    while (getline(file,user))
    {
        cout<<user<<" :";
        cin>>att;
        file1<<user<<" : "<<att<<endl;
        cout<<endl;

    }
    file1.close();
    file.close();
    remove("Student Password.txt");
    rename("temprary.txt","Student Password.txt");

    cout<<"PRESS ENTER TO CONTINUE....";
    cin.get();
    cin.get();
    teacher();
}
void std_marks()
{
    cout<<"sorry nothing is here";
    cin.get();
    cin.get();
    teacher();
}
void tec_table()
{
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t \t\t\t\t--------/\\--------WEL COME TO YOUR TIME TABLE---------/\\--------\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n\n\n\n\n\n\n";
    string username,str;
    cout<<"\t\t\t\t\t\t\t\t\tEnter the username :";
    cin>>username;
    cout<<endl<<endl;
    ifstream File(username+" time table.txt");
    while (getline(File,str))
    {
        cout<<"\t\t\t\t\t\t\t\t\t"<<str<<"\n\n";
    }
cout<<"\n\n\n\n";
    cout<<"PRESS ENTER TO CONTINUE..... ";
    cin.get();
    cin.get();
    teacher();
}

void replace_tec()
{
    string name, ID,email,gender,pas;
    int found = 0;
    fstream file, file1, file3;
    string id, str,ST;
    file.open("Teacher Passwords.txt", ios::in);
    if (!file)
    {
        cout << "   NO DATA IS PRESENT....";
        file.close();
    }
    else {
        cout << " ENTER USERNAME WHICH YOU WANT TO REPLACE :";
        cin >> id;
        file1.open("Record.txt", ios::app | ios::out);
        while (file>>str>>ST)
        {
            if (id == str)
            {
                cout << "\tENTER NEW NAME:";
                getline(cin, name);
                getline(cin, name);
                cout << "\tENTER USERNAME :";
                cin >> ID;
                cout<<"\tASSIGN PASSWORD :";cin>>pas;
                cout << "\tE-MAIL:";
                cin >> email;
                cout << "GENDER:";
                cin >> gender;
                file1 << ID << " " <<pas<< "\n";
                file3.open(ID + "Record.txt", ios::app | ios::out);
                file3 << "TEACHER ID :" << ID << "\nNAME :" << name << "\nEMAIL :" << email << "\nGENDER :" << gender << "\n";
                file3.close();
                found++;
            }
            else
            {
                file1 << str <<" "<<ST<< "\n";
            }

        }  if (found == 0)
        {
            cout << "  TEACHER ID NOT FOUND ...";
        }
        file1.close();
        file.close();
        remove("Teacher Passwords.txt");
        rename("Record.txt", "Teacher Passwords.txt");

    }
    adm_tec();
}
void student_result()
{
    cout<<"\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout << "\t\t\t\t\t\t \t\t\\--------WEL COME TO  RESULTS--------/\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).QUIZ :";
    cout<<"\t\t\t\t\t\t  2).ASSIGMENT :\n\n";
    cout<<"\t\t\t\t\t\t    3).MID TERM:";
    cout<<"\t\t\t\t\t  4).FINAL TERM:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      5).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice ;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            quiz_res();
            break;
        }
        case 2:
        {
            assignment_res();

            break;
        }
        case 3:
        {
            mid_res();

            break;
        }
        case 4:
        {
            final_res();

            break;
        } case 5:
        {
            adm_stud();
            cout<<endl;

            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            std_result();
            break;
        }
    }
    cout<<"PLEASE ENTER TO CONTINUE.....";
    cin.get();
    cin.get();
    adm_stud();

}
void course_detail()
{
    cout<<"sorry nothing is here";
    cin.get();
    cin.get();
    student_aft();
}

void std_bio()
{
    string name,f_name,course,email,religion,ph_num,age,cnic,roll;
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n";
    cout<<"\t\t\t \t\t\t\t\t\\--------WEL COME TO STUDENT REPOSITORY---------/\n ";
    cout<<"\t\t\t \t\t\t\t\t \\--\\---------------BIO--DATA--------------/--/\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n";
    cout<<"\nENTER A ROLL NO OF STUDENT :";cin>>roll;
     cout<<"\n\t\t\t\t\t\t  NAME :";getline(cin,name);getline(cin,name);
     cout<<"\n\t\t\t\t\t\t  FATHER NAME :";getline(cin,f_name);
     cout<<"\n\t\t\t\t\t\t  EMAIL :";cin>> email;
     cout<<"\n\t\t\t\t\t\t  RELIGION :";cin>> religion;
     cout<<"\n\t\t\t\t\t\t  PHONE NUMBER :";cin>> ph_num;
     cout<<"\n\t\t\t\t\t\t  CNIC NUMBER :";cin>>cnic;
     cout<<"\n\t\t\t\t\t\t  AGE :";cin>> age;
     cout<<"\n\t\t\t\t\t\t  COURSE :";cin>> course;
     ofstream file(roll+" bio_data.txt");
     file<<"NAME :"<<name<<"\nFATHER NAME :"<<f_name<<"\nEMAIL :"<<email<<"\nRELIGION :"<<religion<<"\nPHONE NUMBER :"<<ph_num<<"\nCNIC NUMBER:"<<cnic<<"\nAGE :"<<age<<"\nCOURSE :"<<course;
     file.close();
     cout<<"PRESS ENTER TO CONTINUE.....";
     cin.get();
     cin.get();
     std_per_data();
}

void std_check_data()
{
    string roll,str;
    cout<<"\nENTER A ROLL NO OF STUDENT :";cin>>roll;
    ifstream file(roll+" bio_data.txt");
    cout<<"\n";
    while (getline(file,str))
    {
        cout<<str<<"\n";
    }

    file.close();
    cout<<"\nPRESS ENTER TO CONTINUE.......";
    cin.get();
    cin.get();
    std_per_data();
}


void adm_detail()

{
    int age;
    string  f_nam,email,cnic,ph_num,pwd,c_pwd,user_n,fav,name,f_name;
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n";
    cout<<"\t\t\t\t\t\t\t      \\--------WEL-COME-TO-ADMIN-REPOSITORY--------/\n\n ";
    cout<<"\t\t\t\t\t\t\t       \\------------ENTER-YOUR-DETAILS------------/\n\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================";
   // cin>>name;
    cout<<"\n\n\t\t\t\t\t\t     ";
    getline(cin,name);
    cout<<"\n\n\t\t\t\t\t\t    NAME : ";
    getline(cin,name);
    cout<<"\n\n\t\t\t\t\t\t    FATHER NAME : ";
    getline(cin,f_name);
    cout<<"\n\n\t\t\t\t\t\t    CNIC NO WITH(-) : ";
    cin>>cnic;
    cout<<"\n\n\t\t\t\t\t\t    AGE : ";
    cin>>age;
    cout<<"\n\n\t\t\t\t\t\t    EMAIL : ";
    cin>>email;
    cout<<"\n\n\t\t\t\t\t\t    USERNAME : ";
    cin>>user_n;
    cout<<"\n\n\t\t\t\t\t\t    PHONE NO : ";
    cin>>ph_num;
    ofstream input(user_n+".txt");
    if(!input) {
        cout <<"\nSORRY FILE IS NOT CREATED....\nPRESS ENTER TO CONTINUE....";
        cin.get();
        cin.get();
        adm_detail();
    }
    else
    {
        input<<"NAME :"<<name<<"\nFATHER NAME :"<<f_name<<"\nCNIC NO :"<<cnic<<"\nAGE :"<<age<<"\nEMAIL ADDRESS :"<<email<<"\nUSERNAME :"<<user_n<<"\nPHONE NO :"<<ph_num<<endl;
        input.close();
        cout<<"\nTHANKS FOR YOUR DETAILS...\nPRESS ENTER FOR CONTINUE...";
        cin.get();
        cin.get();
        admin();
    }
}
void student_bio()
{
    int age,choice;
    string  email,cnic,ph_num,pwd,c_pwd,user_n,fav,name,f_name,batch;
    cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n";
    cout<<"\t\t\t\t\t\t\t         \\--------WEL COME TO STUDENT REPOSITORY--------/\n\n ";
    cout<<"\t\t\t\t\t\t\t          \\-------------ENTER YOUR BIO DATA------------/\n\n\n ";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).INPUT DETAILS:";
    cout<<"\t\t\t\t\t\t  2).READ DETAILS:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      3).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            cout<<"\n\n\t\t\t\t\t\t     ";
            getline(cin,name);
            cout<<"\n\n\t\t\t\t\t\t    NAME : ";
            getline(cin,name);
            cout<<"\n\n\t\t\t\t\t\t    FATHER NAME : ";
            getline(cin,f_name);
            cout<<"\n\n\t\t\t\t\t\t    ROLL NO : ";
            cin>>user_n;
            cout<<"\n\n\t\t\t\t\t\t    CNIC NO WITH(-) : ";
            cin>>cnic;
            cout<<"\n\n\t\t\t\t\t\t    AGE : ";
            cin>>age;
            cout<<"\n\n\t\t\t\t\t\t    BATCH (EX:-BSCE) : ";
            cin>>batch;
            cout<<"\n\n\t\t\t\t\t\t    EMAIL : ";
            cin>>email;

            cout<<"\n\n\t\t\t\t\t\t    PHONE NO : ";
            cin>>ph_num;
            ofstream input(user_n+" .txt");
            if(!input) {
                cout <<"\nSORRY FILE IS NOT CREATED....\nPRESS ENTER TO CONTINUE....";
                cin.get();
                cin.get();
                student_bio();
            }
            else
            {
                input<<"NAME :"<<name<<"\nFATHER NAME :"<<f_name<<"\nROLL NO :"<<user_n<<"\nCNIC NO :"<<cnic<<"\nAGE :"<<"\nBATCH :"<<batch<<age<<"\nEMAIL ADDRESS :"<<email<<"\nPHONE NO :"<<ph_num<<endl;
                input.close();
                cout<<"\nTHANKS FOR YOUR DETAILS...\nPRESS ENTER FOR CONTINUE...";
                cin.get();
                cin.get();
                student_bio();
            }
            break;
        }
        case 2:
        {
            string user,line;
            cout<<"ENTER A USERNAME :";cin>>user;
            ifstream read(user+".txt");
            while (getline(read,line))
            {
                cout<<line<<endl;
            }
            read.close();
            cout<<"\nPRESS ENTER TO CONTINUE....";
            cin.get();
            cin.get();
            student_bio();
            break;
        }
        case 3:
        {
            student_aft();
            cin.get();
            cin.get();
            cout<<endl;
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"PLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            student_bio();
            break;
        }
    }

}
void mid_result_std()
{
    int k=0;
    string rol_no,roll,out,marks;

    ifstream file("mid_marks.txt");
    cout<<"ENTER A ROLL NO ex.(BSCE22026) :";
    cin>>rol_no;
    while (file>>roll>>marks)
    {
        if(roll==rol_no)
        {
            cout<<"\nYOUR RESULT IS :\n";
           cout<<roll<<marks;
           k++;
        }
    }
    file.close();
if(k==0)
{
    char ch;
    cout<<"\nSORRY YOUR RESULT IS NOT FOUND\n";
    cout<<"\nPRESS ENTER TO CONTINUE.....";
    cin.get();
    cin.get();
    cout<<"\nENTER Y/y FOR REUSING....";
    cin>>ch;
    if(ch=='y'||ch=='Y')
         mid_result_std();
}
}
void teach_marks()
{
    cout << "\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n";
    cout << "\t\t\t\t\t\t \\--------WEL COME TO MARKS UPDATING REPOSITORY--------/\n\n\n ";
    cout << "\t\t\t\t\t\t\t=================\t=================\t=================\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\tSELECT YOUR CHOICE !\n\n";
    cout<<"\t\t\t\t\t\t    1).QUIZ :";
    cout<<"\t\t\t\t\t\t  2).ASSIGMENT :\n\n";
    cout<<"\t\t\t\t\t\t    3).MID TERM:";
    cout<<"\t\t\t\t\t  4).FINAL TERM:\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t      5).BACK:\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int choice ;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t  ";
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            teach_quiz_marks();
            cout<<"PRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
           teach_marks();
            break;
        }
        case 2:
        {
            teach_assigment_marks();
            cout<<"\nPRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
            teach_marks();
            break;
        }
        case 3:
        {
            teach_mid_marks();
            cout<<"\nPRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
            teach_marks();
            break;
        }
        case 4:
        {
            teach_final_marks();
            cout<<"\nPRESS ENTER TO CONTINUE......";
            cin.get();
            cin.get();
            cout<<endl;
            teach_marks();
            break;
        } case 5:
        {

            cout<<endl;
           teacher();
            break;
        }
        default:
        {
            cout<<"\nINVALID CHOICE..";
            cout<<"\nPLEASE ENTER TO CONTINUE.....";
            cin.get();
            cin.get();
            cout<<endl;
            teach_marks();
            break;
        }
    }
}
void teach_mid_marks()
{
    string roll,p;
    cout<<"\nENTER A MID MARKS OF STUDENTS\n";
    ofstream file("mid_marks.txt");
    fstream file1("Student Passwords.txt",ios::in);
    while(file1>>roll>>p)
    {
        string str;
        int num;
        cout<<roll<<" :";
        cin>>num;
        file<<roll<<" :"<<num<<"\n";
    }
    file.close();
    file1.close();

}
void teach_quiz_marks()
{
    string roll,p;
    cout<<"\nENTER A QUIZ MARKS OF STUDENTS\n";
    ofstream file("quiz_marks.txt");
    fstream file1("Student Passwords.txt",ios::in);
    while(file1>>roll>>p)
    {
        string str;
        int num;
        cout<<roll<<" :";
        cin>>num;
        file<<roll<<" :"<<num<<"\n";
    }
    file.close();
    file1.close();

}
void teach_assigment_marks()
{
    string roll,p;
    cout<<"\nENTER A QUIZ MARKS OF STUDENTS\n";
    ofstream file("assigment_marks.txt");
    fstream file1("Student Passwords.txt",ios::in);
    while(file1>>roll>>p)
    {
        string str;
        int num;
        cout<<roll<<" :";
        cin>>num;
        file<<roll<<" :"<<num<<"\n";
    }
    file.close();
    file1.close();
}
void teach_final_marks()
{
    string roll,p;
    cout<<"\nENTER A QUIZ MARKS OF STUDENTS\n";
    ofstream file("final_marks.txt");
    fstream file1("Student Passwords.txt",ios::in);
    while(file1>>roll>>p)
    {
        string str;
        int num;
        cout<<roll<<" :";
        cin>>num;
        file<<roll<<" :"<<num<<"\n";
    }
    file.close();
    file1.close();
}
void final_result_std()
{
    int k=0;
    string rol_no,roll,out,marks;
    ifstream file("final_marks.txt");
    cout<<"\nENTER A ROLL NO :";
    cin>>rol_no;
    while (file>>roll>>marks)
    {
        if(roll==rol_no)
        {
            cout<<"\nYOUR RESULT IS :\n";
            cout<<roll<<" "<<marks;
            k++;
        }
    }
    file.close();
    if(k==0)
    {
        char ch;
        cout<<"\nSORRY YOUR RESULT IS NOT FOUND\n";
        cout<<"\nPRESS ENTER TO CONTINUE.....";
        cin.get();
        cin.get();
        cout<<"\nENTER Y/y FOR REUSING....";
        cin>>ch;
        if(ch=='y'||ch=='Y')
            mid_result_std();
    }
}           
void quiz_result_std()
{
    int k=0;
    string rol_no,roll,out,marks;
    ifstream file("quiz_marks.txt");
    cout<<"\nENTER A ROLL NO ex.(BSCE22026) :";
    cin>>rol_no;
    while (file>>roll>>marks)
    {
        if(roll==rol_no)
        {
            cout<<"\nYOUR RESULT IS :\n";
            cout<<roll<<marks;
            k++;
        }
    }
    file.close();
    if(k==0)
    {
        char ch;
        cout<<"\nSORRY YOUR RESULT IS NOT FOUND\n";
        cout<<"\nPRESS ENTER TO CONTINUE.....";
        cin.get();
        cin.get();
        cout<<"\nENTER Y/y FOR REUSING....";
        cin>>ch;
        if(ch=='y'||ch=='Y')
            mid_result_std();
    }
    if(k>0)
    {
    cout<<"\nPRESS ENTER TO CONTINUE.....";
    cin.get();
    cin.get();
    }
}
void assignment_result_std()
{
    int k=0;
    string rol_no,roll,out,marks;
    ifstream file("assignment_marks.txt");
    cout<<"\nENTER A ROLL NO ex.(BSCE22026) :";
    cin>>rol_no;
    while (file>>roll>>marks)
    {
        if(roll==rol_no)
        {
            cout<<"\nYOUR RESULT IS :\n";
            cout<<roll<<marks;
            k++;
        }
    }
    file.close();
    if(k==0)
    {
        char ch;
        cout<<"\nSORRY YOUR RESULT IS NOT FOUND\n";
        cout<<"\nPRESS ENTER TO CONTINUE.....";
        cin.get();
        cin.get();
        cout<<"\nENTER Y/y FOR REUSING....";
        cin>>ch;
        if(ch=='y'||ch=='Y')
            mid_result_std();
    }
    if(k>0)
    {
        cout<<"\nPRESS ENTER TO CONTINUE.....";
        cin.get();
        cin.get();
    }
}
void assign_cls()
{ cout<<"\t\t\t\t\t\t=========================--\\_/--=================--\\_/--=========================\n\n\n";
    cout<<"\t\t\t \t\t\t\t\t\\--------WEL COME TO ADMIN REPOSITORY---------/\n\n ";
    cout<<"\t\t\t \t\t\t\t\t \\------------------TEACHER------------------/\n\n ";
    cout<<"\t\t\t \t\t\t\t\t  \\---------------ASSIGN-CLASS--------------/\n\n \n";
    cout<<"\t\t\t\t\t\t\t=================\t=================\t=================\n\n\n";

    char ch;
    string user_name,batch,venue,time,day;
    cout<<"\nENTER A TEACHER USERNAME :";cin>>user_name;
    M:
    ofstream file(user_name+" time table.txt",ios::app);
    cout<<"\nENTER A BATCH :";getline(cin,batch);
    getline(cin,batch);
    cout<<"\nENTER A DAY  :";getline(cin,day);
    cout<<"\nENTER A TIME  :";getline(cin,time);
    cout<<"\nENTER A VENUE :";getline(cin,venue);
    file<<"BATCH   IS      :"<<batch<<endl;
    file<<"DAY OF CLASS IS :"<<day<<endl;
    file<<"TIME OF CLASS IS:"<<time<<endl;
    file<<"VENUE  IS       :"<<venue<<endl;
    file.close();
    cout<<"\nIF YOU WANT TO ASSIGN ONE MORE CLASS THEN ENTER Y/y :";cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto M;
    }
    cout<<"\nPRESS ENTER TO CONTINUE...";
    cin.get();
    cin.get();
    adm_tec();
}
void check_bio_data()
{

    string user,line;
    cout<<"ENTER A ROLL NO:";cin>>user;
    ifstream read(user+" bio_data.txt");
    while (getline(read,line))
    {
        cout<<line<<endl;
    }
    read.close();
    cout<<"\nPRESS ENTER TO CONTINUE....";
    cin.get();
    cin.get();
    std_per_data();
}
void quiz_res()
{
    cout<<"\t\tQUIZ RESULT IS :\n\n";
    string roll,marks;
    ifstream file("quiz_marks.txt");
    while (file>>roll>>marks)
    {
            cout<<"\t\t"<<roll<<"   "<<marks<<"\n\n\n";
    }
    file.close();

    cout<<"\nPRESS ENTER TO CONTINUE......";
    cin.get();
    cin.get();
    cout<<endl;
    student_result();
}
void assignment_res()
{
    cout<<"\t\tASSIGNMENT RESULT IS :\n\n";
    string roll,marks;
    ifstream file("assigment_marks.txt");
    while (file>>roll>>marks)
    {
            cout<<"\t\t"<<roll<<"   "<<marks<<"\n\n\n";
    }
    file.close();
    cout<<"\nPRESS ENTER TO CONTINUE......";
    cin.get();
    cin.get();
    cout<<endl;
    student_result();

}
void mid_res()
{
    cout<<"\t\tMID MARKS IS :\n\n";
    string roll,marks;
    ifstream file("mid_marks.txt");
    while (file>>roll>>marks)
    {
            cout<<"\t\t"<<roll<<"  "<<marks<<"\n\n\n";
    }
    file.close();

    cout<<"\nPRESS ENTER TO CONTINUE......";
    cin.get();
    cin.get();
    cout<<endl;
    student_result();
}
void final_res()
{
    cout<<"\t\tFINAL MARKS IS :\n\n";
    string roll,marks;
    ifstream file("final_marks.txt");
    while (file>>roll>>marks)
    {
            cout<<"\t\t"<<roll<<"   "<<marks<<"\n\n\n";
    }
    file.close();
    cout<<"\nPRESS ENTER TO CONTINUE......";
    cin.get();
    cin.get();
    cout<<endl;
    student_result();

}
void remove_std()
{
    int c=0;
    string rol,roll,pas;
cout<<"ENTER A ROLL NO  :";
cin>>rol;
ifstream file("Student Passwords.txt");
ofstream file1("temp.txt");
if(!file)
{
    cout<<"\nSORRY NOTHING IS HERE\n ";
}
while(file>>roll>>pas)
{
    c++;
    if(rol!=roll)
    {
        file1<<roll<<" "<<pas<<endl;
    }
}
if(c==0)
{
    cout<<"\nYOUR FILE IS EMPTY......\n";
}
file1.close();
file.close();
remove("Student Passwords.txt");
rename("temp.txt","Student Passwords");
cout<<"PRESS ENTER TO CONTINUE.......";
cin.get();
cin.get();
adm_stud();
}
void del_teacher()
{
    int c=0;
    string rol,roll,pas;
    cout<<"ENTER A USERNAME  :";
    cin>>rol;
    ifstream file("Teacher Passwords.txt");
    ofstream file1("temp.txt");
    if(!file)
    {
        cout<<"\nSORRY NOTHING IS HERE\n ";
    }
    while(file>>roll>>pas)
    {
        c++;
        if(rol!=roll)
        {
            file1<<roll<<" "<<pas<<endl;
        }
    }
    if(c==0)
    {
        cout<<"\nYOUR FILE IS EMPTY......\n";
    }
    file1.close();
    file.close();
    remove("Teacher Passwords.txt");
    rename("temp.txt","Teacher Passwords");
    cout<<"PRESS ENTER TO CONTINUE.......";
    cin.get();
    cin.get();
adm_tec();
}
