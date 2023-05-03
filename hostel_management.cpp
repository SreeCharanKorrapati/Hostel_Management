#include<iostream>

using namespace std;

#include<fstream>

#include<stdio.h>



class hostel_b

{

    int room_no;

    char name[30];

    char address[50];

    char phone[10];
    
    char id[20];
    
    char mailid[50];

 

    public:

   int main_menu();   

    int add();       

  int display();  

    int rooms();   

    int edit();   

    int check(int);   

    int modify(int);   

    int delete_rec(int);   

};


class hostel_g

{

    int room_no;

    char name[30];

    char address[50];

    char phone[10];
    
    char id[20];
    
    char mailid[50];

 

    public:

   int main_menu();   

    int add();       

  int display();  

    int rooms();   

    int edit();   

    int check(int);   

    int modify(int);   

    int delete_rec(int);   

};



int hostel_b::main_menu()

{

      

    int choice=0;



    while(choice!=5)

    {       

        cout<<"\n\t\t\t\t*****";

        cout<<"\n\t\t\t\t* MAIN MENU *";

        cout<<"\n\t\t\t\t*****";

        cout<<"\n\n\n\t\t\t1.Book A Room";

        cout<<"\n\t\t\t2.Show student Record";

        cout<<"\n\t\t\t3.Show Rooms Allotted";

        cout<<"\n\t\t\t4.Edit Record";

        cout<<"\n\t\t\t5.Exit";

        cout<<"\n\n\t\t\tEnter Your Choice: ";

        cin>>choice;

       

        switch(choice)

        {

            case 1: add();

                    break;

            case 2: display();

                    break;

            case 3: rooms();

                    break;

            case 4: edit();

                    break;

            case 5: break;

            default:

                    {

                        cout<<"\n\n\t\t\tWrong choice!!!";

                        cout<<"\n\t\t\tPress any key to continue!!";

                        return 0;

                       system("pause");

                    }

        }

    }

}

int hostel_g::main_menu()

{

      

    int choice=0;



    while(choice!=5)

    {       

        cout<<"\n\t\t\t\t*****";

        cout<<"\n\t\t\t\t* MAIN MENU *";

        cout<<"\n\t\t\t\t*****";

        cout<<"\n\n\n\t\t\t1.Book A Room";

        cout<<"\n\t\t\t2.Show student Record";

        cout<<"\n\t\t\t3.Show Rooms Allotted";

        cout<<"\n\t\t\t4.Edit Record";

        cout<<"\n\t\t\t5.Exit";

        cout<<"\n\n\t\t\tEnter Your Choice: ";

        cin>>choice;

       

        switch(choice)

        {

            case 1: add();

                    break;

            case 2: display();

                    break;

            case 3: rooms();

                    break;

            case 4: edit();

                    break;

            case 5: break;

            default:

                    {

                        cout<<"\n\n\t\t\tWrong choice!!!";

                        cout<<"\n\t\t\tPress any key to continue!!";

                        return 0;

                       system("pause");

                    }

        }

    }

}



int hostel_b::add()

{ 

    int r,flag;

    ofstream fout("Record.txt",ios::app);

   

    cout<<"\n Enter student Detalis";

    cout<<"\n ********";

    cout<<"\n\n Room no: ";

    cin>>r;

    flag=check(r); 

   

    if(flag)

        cout<<"\n Sorry..!!!Room is already booked";

    else

    {

        room_no=r;

        cout<<"\n Name:\t ";

        cin>>name;

        cout<<"\n Address:\t ";

        cin>>address;

        cout<<"\n Phone No:\t ";

        cin>>phone;
        
        cout<<"\n Student ID:\t";
        
        cin>>id;
        
        cout<<"\n Student Mail ID:\t";
        
        cin>>mailid;

              cout<<endl;

        fout.write((char*)this,sizeof(*this));

        cout<<"\n Room is booked!!!";
        cout<<"\n Please pay the room fees in payment portal for final booking!!!!";
        cout<<"\n Bed and other elements will be allocated after fee payment";

    }

   

    cout<<"\n Press any key to continue!!";

  system("pause");

    fout.close();

    return 0;

}

int hostel_g::add()

{ 

    int r,flag;

    ofstream fout("Record.txt",ios::app);

   

    cout<<"\n Enter student Detalis";

    cout<<"\n ********";

    cout<<"\n\n Room no: ";

    cin>>r;

    flag=check(r); 

   

    if(flag)

        cout<<"\n Sorry..!!!Room is already booked";

    else

    {

        room_no=r;

        cout<<"\n Name:\t ";

        cin>>name;

        cout<<"\n Address:\t ";

        cin>>address;

        cout<<"\n Phone No:\t ";

        cin>>phone;
        
        cout<<"\n Student ID:\t";
        
        cin>>id;
        
        cout<<"\n Student Mail ID:\t";
        
        cin>>mailid;

              cout<<endl;

        fout.write((char*)this,sizeof(*this));

        cout<<"\n Room is booked!!!";
        cout<<"\n Please pay the room fees in payment portal for final booking!!!!";
        cout<<"\n Bed and other elements will be allocated after fee payment";

    }

   

    cout<<"\n Press any key to continue!!";

  system("pause");

    fout.close();

    return 0;

}



int hostel_b::display()

{

  

    ifstream fin("Record.txt",ios::in); 

    int r;

    cout<<"\n Enter room no: ";

    cin>>r;

   

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

       

           if(room_no = r)

                 {

            cout<<"\n Student Details";

            cout<<"\n ******";

            cout<<"\n\n Room no: "<<room_no;

            cout<<"\n Name: "<<name;

            cout<<"\n Address: "<<address;

            cout<<"\n Phone no: "<<phone;
            
            cout<<"\n ID : "<<id;
            
            cout<<"\n Student Mail ID: "<<mailid;
           

              }

             

  

       else{

        cout<<"\n Sorry Room no. not found or vacant!!";

       

              cout<<"\n\n Press any key to continue!!";}

    system("pause");

    fin.close();

    return 0;

              }}

int hostel_g::display()

{

  

    ifstream fin("Record.txt",ios::in); 

    int r;

    cout<<"\n Enter room no: ";

    cin>>r;

   

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

       

           if(room_no = r)

                 {

            cout<<"\n Student Details";

            cout<<"\n ******";

            cout<<"\n\n Room no: "<<room_no;

            cout<<"\n Name: "<<name;

            cout<<"\n Address: "<<address;

            cout<<"\n Phone no: "<<phone;
            
            cout<<"\n ID : "<<id;
            
            cout<<"\n Student Mail ID: "<<mailid;
           

              }

             

  

       else{

        cout<<"\n Sorry Room no. not found or vacant!!";

       

              cout<<"\n\n Press any key to continue!!";}

    system("pause");

    fin.close();

    return 0;

              }}



int hostel_b::rooms()

{

 

    ifstream fin("Record.txt",ios::in);

    cout<<"\n\t\t\tList Of Rooms Allotted";

    cout<<"\n\t\t\t*********";

    cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\t\tId.\t\tMail Id.\n";

 

       while(!fin.eof())

    {



        fin.read((char*)this,sizeof(*this));

        cout<<"\n\n "<<room_no<<"\t\t"<<name;

        cout<<"\t\t"<<address<<"\t\t"<<phone;
        
        cout<<"\t\t"<<id<<"\t\t"<<mailid;;

             

       }



    cout<<"\n\n\n\t\t\tPress any key to continue!!";

       system("pause");

    fin.close();

    return 0;

}

int hostel_g::rooms()

{

 

    ifstream fin("Record.txt",ios::in);

    cout<<"\n\t\t\tList Of Rooms Allotted";

    cout<<"\n\t\t\t*********";

    cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\t\tId.\t\tMail Id.\n";

 

       while(!fin.eof())

    {



        fin.read((char*)this,sizeof(*this));

        cout<<"\n\n "<<room_no<<"\t\t"<<name;

        cout<<"\t\t"<<address<<"\t\t"<<phone;
        
        cout<<"\t\t"<<id<<"\t\t"<<mailid;;

             

       }



    cout<<"\n\n\n\t\t\tPress any key to continue!!";

       system("pause");

    fin.close();

    return 0;

}



int hostel_b::edit()

{

  

    int choice,r;

    

    cout<<"\n EDIT MENU";

    cout<<"\n ***";

    cout<<"\n\n 1.Modify Student Record";

    cout<<"\n 2.Delete Student Record";

   

    cout<<"\n Enter your choice: ";

    cin>>choice;

   

       cout<<"\n Enter room no: ";

    cin>>r;

   

   

    switch(choice)

    {

        case 1: modify(r);

                break;

        case 2: delete_rec(r);

                break;

        default: cout<<"\n Wrong Choice!!";

    }

      

    cout<<"\n Press any key to continue!!!";

    return 0;

  system("pause");

}



int hostel_b::check(int r)

{

    int flag=0;

    ifstream fin("Record.txt",ios::in);

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

        if(room_no==r)

        {

            flag=1;

                break;

        }

    }

   

    fin.close();

    return(flag);

}

int hostel_g::edit()

{

  

    int choice,r;

    

    cout<<"\n EDIT MENU";

    cout<<"\n ***";

    cout<<"\n\n 1.Modify Student Record";

    cout<<"\n 2.Delete Student Record";

   

    cout<<"\n Enter your choice: ";

    cin>>choice;

   

       cout<<"\n Enter room no: ";

    cin>>r;

   

   

    switch(choice)

    {

        case 1: modify(r);

                break;

        case 2: delete_rec(r);

                break;

        default: cout<<"\n Wrong Choice!!";

    }

      

    cout<<"\n Press any key to continue!!!";

    return 0;

  system("pause");

}



int hostel_g::check(int r)

{

    int flag=0;

    ifstream fin("Record.txt",ios::in);

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

        if(room_no==r)

        {

            flag=1;

                break;

        }

    }

   

    fin.close();

    return(flag);

}



int hostel_b::modify(int r)

{

    long pos , flag;

    fstream file("Record.txt",ios::in|ios::out|ios::binary);

    flag=0;

    while(!file.eof())

       {

         pos=file.tellg(); 

        file.read((char*)this,sizeof(*this));

        if(room_no==r)

              {

            cout<<"\n Enter New Details";

            cout<<"\n *******";

            cout<<"\n Name: ";

            cin>>name;

            cout<<" Address: ";

            cin>>address;

            cout<<" Phone no: ";

            cin>>phone;

            file.seekg(pos);

           

            file.write((char*)this,sizeof(*this));

            cout<<"\n Record is modified!!";

               flag=1;

            break;

              }}

   

    if(flag==0)

        

                     cout<<"\n Sorry Room no. not found or vacant!!";

      

              file.close();

              return 0;

       }
       
       
int hostel_g::modify(int r)

{

    long pos , flag;

    fstream file("Record.txt",ios::in|ios::out|ios::binary);

    flag=0;

    while(!file.eof())

       {

         pos=file.tellg(); 

        file.read((char*)this,sizeof(*this));

        if(room_no==r)

              {

            cout<<"\n Enter New Details";

            cout<<"\n *******";

            cout<<"\n Name: ";

            cin>>name;

            cout<<" Address: ";

            cin>>address;

            cout<<" Phone no: ";

            cin>>phone;

            file.seekg(pos);

           

            file.write((char*)this,sizeof(*this));

            cout<<"\n Record is modified!!";

               flag=1;

            break;

              }}

   

    if(flag==0)

        

                     cout<<"\n Sorry Room no. not found or vacant!!";

      

              file.close();

              return 0;

       }



int hostel_b::delete_rec(int r)

{

    int flag=0;

    char ch;

    ifstream fin("Record.txt",ios::in);

    ofstream fout("temp.txt",ios::out);

   

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

        if(room_no==r)

        {

            cout<<"\n Name: "<<name;

            cout<<"\n Address: "<<address;

            cout<<"\n Pone No: "<<phone;

            cout<<"\n\n Do you want to delete this record(y/n): ";

            cin>>ch;

           

            if(ch=='n')

            fout.write((char*)this,sizeof(*this));

           

            flag=1;

        }

        else

            fout.write((char*)this,sizeof(*this));

    }

   

    fin.close();

    fout.close();

   

    if(flag==0)

        cout<<"\n Sorry room no. not found or vacant!!";

    else

    {

        remove("Record.txt");

        rename("temp.txt","Record.txt");

        return 0;

    }

}

int hostel_g::delete_rec(int r)

{

    int flag=0;

    char ch;

    ifstream fin("Record.txt",ios::in);

    ofstream fout("temp.txt",ios::out);

   

    while(!fin.eof())

    {

        fin.read((char*)this,sizeof(*this));

        if(room_no==r)

        {

            cout<<"\n Name: "<<name;

            cout<<"\n Address: "<<address;

            cout<<"\n Pone No: "<<phone;

            cout<<"\n\n Do you want to delete this record(y/n): ";

            cin>>ch;

           

            if(ch=='n')

            fout.write((char*)this,sizeof(*this));

           

            flag=1;

        }

        else

            fout.write((char*)this,sizeof(*this));

    }

   

    fin.close();

    fout.close();

   

    if(flag==0)

        cout<<"\n Sorry room no. not found or vacant!!";

    else

    {

        remove("Record.txt");

        rename("temp.txt","Record.txt");

        return 0;

    }

}



int main()

{
    


    hostel_b h;
    hostel_g i;

   

   

    cout<<"\n\t\t\t**********";

    cout<<"\n\t\t\t* SRM HOSTEL MANAGEMENT PROJECT *";

    cout<<"\n\t\t\t**********";
    
    
    cout<<"\n\t\t\t1.Boys Hostel";
    cout<<"\n\t\t\t2.Girls Hostel";
    
    cout<<"\n\t\t\tEnter your choice: ";
    int n;
    cin>>n;
    switch(n)
    {
        case(1):
        
        h.main_menu();
        break;
        
        case(2):
        
        i.main_menu();
        break;
    }
    


   

    cout<<"\n\n\n\n\n\t\t\t\tPress any key to continue!!";

    system("pause");

    
    
}