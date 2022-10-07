#include<iostream>
using namespace std;

int main()
{
    int balance = 5000, in, accountno, pin, amount;

    cout<<"ENTER LAST FOUR DIGIT OF YOUR ACCOUNT NUMBER: ";
    cin>>accountno;
    cout<<endl;
    cout<<"Enter Your Pin Number: ";
    cin>>pin;
    cout<<endl;

    int stop = 1;
    
    do{
    cout<<"Enter your transaction \n Press 1 = for Balance Inquiry \n Press 2 = for Withdrawal \n press 3 = for Fast Cash \n Press 4 = for old transction."<<endl;
    cin>>in;
    
    if(in == 1){
        cout<<"Your Accout Balace is: "<<balance<<endl;
    }
    else if(in == 2){
        cout<<"ENTER YOUR AMOUNT : ";
        cin>>amount;
        if(amount <= balance){
            cout<<"Your transaction is in procced"<<endl;
        }
        else {
            cout<<"YOU HAVE INSUUFFIENT BALANCE TO PROCEED!"<<endl;
        }
        }
    else if (in == 3){
        int fastcash;
        cout<<"OPTIONS"<<endl;
        cout<<" 1. 500 \n 2. 1000 \n 3. 10,000 \n 4. 15,000 \n 5. 20,000"<<endl;
        cout<<"ENTER YOUR TRANSACTION NO.: "<<endl;
        cin>>fastcash;

        if (fastcash == 1){
            int fstamt = 500;
            if(fstamt <= balance)
                cout<<"YOUR TRANSACTION IS IN PROCESS...."<<endl;
            else 
                cout<<"YOU DO NOT HAVE SUFFIENT BALANCE TO PROCEED!"<<endl;
        }
        else if (fastcash == 2){
            int fstamt = 1000;
            if(fstamt <= balance)
                cout<<"YOUR TRANSACTION IS IN PROCESS"<<endl;
            else 
                cout<<"YOU DO NOT HAVE SUFFIENT BALANCE TO PROCEED!"<<endl;
        }
        else if (fastcash == 3){
            int fstamt = 10000;
            if(fstamt <= balance)
                cout<<"YOUR TRANSACTION IS IN PROCESS"<<endl;
            else 
                cout<<"YOU DO NOT HAVE SUFFIENT BALANCE TO PROCEED!"<<endl;
        }
        else if (fastcash == 4){
            int fstamt = 15000;
            if(fstamt <= balance)
                cout<<"YOUR TRANSACTION IS IN PROCESS"<<endl;
            else 
                cout<<"YOU DO NOT HAVE SUFFIENT BALANCE TO PROCEED!"<<endl;
        
        }
        else if (fastcash == 5){
            int fstamt = 20000;
            if(fstamt <= balance)
                cout<<"YOUR TRANSACTION IS IN PROCESS"<<endl;
            else 
                cout<<"YOU DO NOT HAVE SUFFIENT BALANCE TO PROCEED!"<<endl;
        
        }
        else {
            cout<<"Please Enter Valid Input"<<endl;
        }
        }

    else if (in == 4){
        cout<<"YOUR ACCOUNT DONT HAVE ANY OLD TRANSACTION!"<<endl;
    }
    else if (in == 5){
        cout<<"Thank you for visit"<<endl;
    }
    else{
        cout<<"INVALID NUMBER! \n PLEASE ENTER VALID NUMBER FROM THE LIST"<<endl;
    }

    int exitf;

    cout<<endl<<"press 1 = for continue\npress 2 = for Exit."<<endl;
    cin>>exitf;
        if(exitf ==2){
            stop = 4;
        }
   
    }
    while (stop <= 2);

    return 0;
}
