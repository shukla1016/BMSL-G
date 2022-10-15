#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main();

static string bankName = "L&G Bank";
static string IFSC = "1233IOPPE";
long int accountno = 3251176;
long int *aad = &accountno;
long int laccountno = 7894566;
long int *ald = &laccountno;
double lr = 8.5;

class Bank{
    public:
    double balance = 0;
    string id;
    string pin;
    string name;
    string phoneNo;
    long int accountNo;
    Bank *next; 
    string add;
    string pan;
    string adhar;
};

Bank *head = NULL;

void insert_end(Bank** root, Bank* value) {
    Bank* new_node = new Bank();
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->balance = value->balance;
    new_node->id = value->id;
    new_node->pin = value->pin;
    new_node->name = value->name;
    new_node->phoneNo = value->phoneNo;
    new_node->accountNo = value->accountNo;
    new_node->add = value->add;
    new_node->pan = value->pan;
    new_node->adhar = value->adhar;
    
    if (*root == NULL) {
        *root = new_node;
        return;
    }
    
    Bank* curr = *root;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

void serialize(Bank** root) {
    ofstream file("bank.txt");
    if (!file.is_open()) {
        exit(1);
    }

    for (Bank* curr = *root; curr != NULL; curr = curr->next) {
            file << curr->balance;
            file << endl;
            file << curr->id;
            file << endl;
            file << curr->pin;
            file << endl;
            file << curr->name;
            file << endl;
            file << curr->phoneNo;
            file << endl;
            file << curr->accountNo;
            file << endl;
            file << curr->add;
            file << endl;
            file << curr->pan;
            file << endl;
            file << curr->adhar;
            file << endl;
    }
    file.close();
}

void deserialize(Bank** root) {
    ifstream file("bank.txt");
    double a;
    long int f;
    string s,b,c1,d,e,g,h,i;
    if (file.is_open()) {
        int c = 0;
        while(getline(file,s))
        {
            if(c==0)
            {
            a = stod(s);
            }
            if(c==1)
            {
            b = s;  
            }
            if(c==2)
            {
            c1 = s;
            }
            if(c==3)
            {
            d = s;
            }
            if(c==4)
            {
            e = s;
            }
            if(c==5)
            {
            f = stoi(s);
            }
            if(c==6)
            {
            g = s; 
            }
            if(c==7)
            {
            h = s;
            }
            if(c==8)
            {
            i = s;
            }
            c++;
            if(c>8)
            {
                Bank *val = new Bank;
                val->balance = a;
                val->id = b;
                val->pin = c1;
                val->name = d;
                val->phoneNo = e;
                val->accountNo = f;
                *aad = val->accountNo;
                val->add = g;
                val->pan = h;
                val->adhar = i;
                insert_end(&head,val);
                c=0;
            }
        }
    }
    char filename[] = "bank.txt";
    remove(filename);
}

    void stop()
    {
        string s;
        cout << "\n\t\t\t\t\t\t Press any key to continue......";
        cin >> s;
        return;
    }

int f =0;

class accountDetails {
    protected:
    void accountdetails(Bank **head, string id)
    {
        system("cls");
        Bank *temp = *head;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                cout << "\t\t\t\t\t\t Bank Name = " << bankName << endl;
                cout << "\t\t\t\t\t\t IFSC Code = " << IFSC << endl;
                cout << "\t\t\t\t\t\t Account Number = " << temp->accountNo << endl;
                cout << "\t\t\t\t\t\t Account Holder Name = " << temp->name << endl;
                cout << "\t\t\t\t\t\t Account Holder Id = " << temp->id << endl;
                cout << "\t\t\t\t\t\t Account Balance = " << temp->balance << endl;
                cout << "\t\t\t\t\t\t Account Holder Address = " << temp->add << endl;
                cout << "\t\t\t\t\t\t Account Holder Phone No. = " << temp->phoneNo << endl;
                cout << "\t\t\t\t\t\t Account Holder PAN = " << temp->pan << endl;
                cout << "\t\t\t\t\t\t Account Holder ADHAAR = " << temp->adhar << endl;
                cout << "\t\t\t\t\t\t For queries contact +91-9876543210" << endl; 
                stop();
                return;
            }
            temp = temp->next;
        }
    }
};

class LoanApply
{
    public:
    class Loan{
        public:
        string accountNo;
        long int laccountNo;
        int lamount;
        int interest;
        int tamount;
        int left = 0;
        int paid;
        int time;
        Loan *next;
    };

    Loan *lhead = NULL;

    void insert_end(Loan** root, Loan* value) {
        Loan* new_node = new Loan();
        if (new_node == NULL) {
            exit(1);
        }
        new_node->next = NULL;
        new_node->accountNo = value->accountNo;
        new_node->laccountNo = value->laccountNo;
        new_node->lamount = value->lamount;
        new_node->interest = value->interest;
        new_node->tamount = value->tamount;
        new_node->left = value->left;
        new_node->paid = value->paid;
        new_node->time = value->time;
        
        if (*root == NULL) {
            *root = new_node;
            return;
        }
        
        Loan* curr = *root;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new_node;
    }

    void serialize(Loan** root) {
        ofstream file("loan.txt");
        if (!file.is_open()) {
            exit(1);
        }

        for (Loan* curr = *root; curr != NULL; curr = curr->next) {
                file << curr->accountNo;
                file << endl;
                file << curr->laccountNo;
                file << endl;
                file << curr->lamount;
                file << endl;
                file << curr->interest;
                file << endl;
                file << curr->tamount;
                file << endl;
                file << curr->left;
                file << endl;
                file << curr->paid;
                file << endl;
                file << curr->time;
                file << endl;
        }
        file.close();
    }

    void deserialize(Loan** root)
    {
        ifstream file("loan.txt");
        double d;
        long int f;
        string a,s;
        int b,c1,e,g,h;
        if (file.is_open()) 
        {
            int c = 0;
            while(getline(file,s))
            {
                if(c==0)
                {
                a = s;
                }
                if(c==1)
                {
                b = stoi(s);  
                }
                if(c==2)
                {
                c1 = stoi(s);
                }
                if(c==3)
                {
                d = stod(s);
                }
                if(c==4)
                {
                e = stod(s);
                }
                if(c==5)
                {
                f = stoi(s);
                }
                if(c==6)
                {
                g = stoi(s); 
                }
                if(c==7)
                {
                h = stoi(s);
                }
                c++;
                if(c>7)
                {
                    Loan *val = new Loan;
                    val->accountNo = a;
                    val->laccountNo = b;
                    *ald = val->laccountNo;
                    val->lamount = c1;
                    val->interest = d;
                    val->tamount = e;
                    val->left = f;
                    val->paid = g;
                    val->time = h;
                    insert_end(&lhead,val);
                    c=0;
                }
            }
        }
        char filename[] = "loan.txt";
        remove(filename);
    }

    void newLoan(Bank **head, string id)
    {
        system("cls");
        Bank *temp = *head;
        int amount;
        string ac;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                amount = 10*temp->balance;
                ac = temp->id;
            }
            temp = temp->next;
        }
        Loan *new_node = new Loan();
        cout << "\t\t\t\t\t\t Enter Loan Amount == ";
        cin >> new_node->lamount;
        int taken = 0;
        Loan *ltemp = lhead;
        while(ltemp != NULL)
        {
            if(ltemp->accountNo == ac)
            {
                taken = ltemp->left;
            }
            ltemp = ltemp->next;
        }
        if(new_node->lamount > (amount-taken))
        {
            cout << "\t\t\t\t\t\t Loan Rejected :(" << endl;
            cout << "\t\t\t\t\t\t Maximum Available LIMIT is " << (amount-taken) << endl;
            stop();
            return;
        }
        cout << "\t\t\t\t\t\t Enter Loan Duration(In years) == ";
        cin >> new_node->time;
        new_node->accountNo = ac;
        new_node->paid = 0;
        (*ald) ++;
        new_node->laccountNo = *ald;
        new_node->next = NULL;
        new_node->interest = ((new_node->lamount * lr * new_node->time)/100);
        new_node->tamount = new_node->lamount + new_node->interest;
        new_node->left = new_node->tamount;
        system("cls");
        cout << "\t\t\t\t\t\t Loan Approved :)" << endl;
        cout << "\t\t\t\t\t Loan Amount  ==  " << new_node->lamount << endl;
        cout << "\t\t\t\t\t Loan Accout Number  ==  " << new_node->laccountNo << endl;
        cout << "\t\t\t\t\t Loan Duration  ==  " << new_node->time << " years." << endl;
        cout << "\t\t\t\t\t Loan Interest  ==  " << new_node->interest << endl;
        cout << "\t\t\t\t\t Loan Amount to Repay  ==  " << new_node->tamount  << endl;
        cout << "\t\t\t\t\t EMI  ==  " << (new_node->tamount/12)  << endl;
        cout << "\t\t\t\t\t Loan Amount Left  ==  " << new_node->left  << endl;
        cout << "\t\t\t\t\t Loan Amount Paid  ==  " << new_node->paid  << endl;
        stop();
        Loan *llast = lhead;
        if(lhead == NULL)
        {
            lhead = new_node;
            return;
        }
        while(llast->next != NULL)
        {
            llast = llast->next;
        } 
        llast->next = new_node;
        return;
    }

    void repayLoan(Bank **head, string id)
    {
        Bank *temp = *head;
        int amount;
        string ac;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                ac = temp->id;
            }
            temp = temp->next;
        }
        Loan *ltemp = lhead;
        while(ltemp != NULL)
        {
            if(ltemp->left == 0 && f!=0)
            {
                cout << "\t\t\t\t\t\t Loan Repayed" << endl;
                stop();
                return;
            }
            if(ltemp->accountNo == ac)
            {
                int a;
                system("cls");
                cout << "\t\t\t\t\t\t Enter Amount to Repay  ==  ";
                cin >> a;
                cout << ltemp->left << a << endl;
                if(a > ltemp->left)
                {
                    cout << "\t\t\t\t\t\t Invalid Amount" << endl;
                    stop();
                    return;
                }
                if(ltemp->left == 0 && f!=0)
                {
                    cout << "\t\t\t\t\t\t Loan Repayed" << endl;
                }
                ltemp->left = ltemp->left - a;
                ltemp->paid = ltemp->paid + a;
                cout << "\t\t\t\t\t\t Transaction Succesful :)" << endl;
                cout << "\t\t\t\t\t Loan Amount  ==  " << ltemp->lamount << endl;
                cout << "\t\t\t\t\t Loan Accout Number  ==  " << ltemp->laccountNo << endl;
                cout << "\t\t\t\t\t Loan Duration  ==  " << ltemp->time << " years." << endl;
                cout << "\t\t\t\t\t Loan Interest  ==  " << ltemp->interest << endl;
                cout << "\t\t\t\t\t Loan Amount to Repay  ==  " << ltemp->tamount  << endl;
                cout << "\t\t\t\t\t EMI  ==  " << (ltemp->tamount/12)  << endl;
                cout << "\t\t\t\t\t Loan Amount Left  ==  " << ltemp->left  << endl;
                f++;
                cout << "\t\t\t\t\t Loan Amount Paid  ==  " << ltemp->paid  << endl;
                stop();
                return;
            }
            ltemp = ltemp->next;
        }
        system("cls");
        cout << "\t\t\t\t\t You don't have any Loan :(" << endl;
        stop();
    }

    void loanDetails(Bank **head, string id)
    {
        Bank *temp = *head;
        string ac;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                ac = temp->id;
            }
            temp = temp->next;
        }
        Loan *ltemp = lhead;
        while(ltemp != NULL)
        {
            if(ltemp->accountNo == ac)
            {
                system("cls");
                cout << "\t\t\t\t\t Loan Amount  ==  " << ltemp->lamount << endl;
                cout << "\t\t\t\t\t Loan Accout Number  ==  " << ltemp->laccountNo << endl;
                cout << "\t\t\t\t\t Loan Duration  ==  " << ltemp->time << " years." << endl;
                cout << "\t\t\t\t\t Loan Interest  ==  " << ltemp->interest << endl;
                cout << "\t\t\t\t\t Loan Amount to Repay  ==  " << ltemp->tamount  << endl;
                cout << "\t\t\t\t\t EMI  ==  " << (ltemp->tamount/12)  << endl;
                cout << "\t\t\t\t\t Loan Amount Left  ==  " << ltemp->left  << endl;
                cout << "\t\t\t\t\t Loan Amount Paid  ==  " << ltemp->paid  << endl;
                stop();
                return;
            }
            ltemp = ltemp->next;
        }
        system("cls");
        cout << "\t\t\t\t\t You don't have any Loan :(" << endl;
        stop();
    }

    int c22 = 0;

    void loan(Bank **head, string id)
    {
        if (c22 == 0)
        deserialize(&lhead);
        c22++;
        Bank *temp = *head;
        int accountNo;
        double *balance;
        string name;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                accountNo = temp->accountNo;
                balance = &temp->balance;
                name = temp->name;
            }
            temp = temp->next;
        }
        int choice;
        system("cls");
        cout << "\t\t\t Welocome to Loan Department of L&G Bank. We provide following Loan related services." << endl;
        cout << "\t\t\t\t\t\t 1. Apply for new Loan." << endl;
        cout << "\t\t\t\t\t\t 2. Repay Loan." << endl;
        cout << "\t\t\t\t\t\t 3. Loan Details." << endl;
        cout << "\t\t\t\t\t\t 4. Press any key to return." << endl;
        cout << "\t\t\t\t\t\t    Enter your choice  ==  ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            newLoan(head, id);
            loan(head, id);
            break;
            case 2:
            repayLoan(head, id);
            loan(head, id);
            break;
            case 3:
            loanDetails(head, id);
            default :
            serialize(&lhead);
            return;
        }
    }
};

class Services :  private accountDetails, private LoanApply
{
    void depositMoney(Bank **head, string id)
    {
        double amount;
        Bank *temp = *head;
        cout << "\t\t\t\t\t\t Enter Money to be deposited  ==  ";
        cin >> amount;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                temp->balance += amount;
                cout << "\t\t\t\t\t\t New Balance = " << temp->balance << endl;
                stop();
                return;
            }
            temp = temp->next;
        }
    }


    void closeAccount(Bank **head, string id)
    {
        Bank *temp = *head;
        Bank *prev = NULL;
        if (temp != NULL && temp ->id == id)
        {
            *head = temp->next;
            delete temp;
            cout << "\t\t\t\t\t\t Account Deactivated" << endl;
            stop();
            main();
        }
        else
        {
            while(temp != NULL && temp ->id != id)
            {
                prev = temp;
                temp = temp->next;
            }
            if(temp == NULL)
            {
                cout << "\t\t\t\t\t\t Account Not Found" << endl;
                stop();
                main();
            }
            prev->next = temp->next;
            cout << "\t\t\t\t\t\t Account Deactivated" << endl;
            delete temp;
           stop();
            main();
        }
    }


    void withdrawMoney(Bank **head, string id)
    {
        double amount;
        Bank *temp = *head;
        cout << "\t\t\t\t\t\t Enter Money to be withdrawn  ==  ";
        cin >> amount;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                if(temp->balance < amount)
                {
                    cout << "\t\t\t\t\t\t Insufficient Funds" << endl;
                    stop();
                    return;
                }
                temp->balance -= amount;
                cout << "\t\t\t\t\t\t Money Debited = " << amount << endl;
                cout << "\t\t\t\t\t\t New Balance = " << temp->balance << endl;
                stop();
                return;
            }
            temp = temp->next;
        }
    }



    void checkBalance(Bank **head, string id)
    {
        Bank *temp = *head;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                cout << "\t\t\t\t\t\t Current Balance = " << temp->balance << endl;
                stop();
                return;
            }
            temp = temp->next;
        }
    }
    public:
    void services(Bank **head, string id){
        system("cls");
        int choice;
        cout << "\t\t\t\t\t We provide the following services." << endl;
        cout << "\t\t\t\t\t\t 1. Deposit Money" << endl;
        cout << "\t\t\t\t\t\t 2. Withdraw Money" << endl;
        cout << "\t\t\t\t\t\t 3. Check Balance" << endl;
        cout << "\t\t\t\t\t\t 4. Deactivate Account" << endl;
        cout << "\t\t\t\t\t\t 5. Log Out" << endl;
        cout << "\t\t\t\t\t\t 6. Account Details" << endl;
        Bank *temp = *head;
        int amount;
        while(temp != NULL)
        {
            if(temp->id == id)
            {
                amount = temp->balance;
            }
            temp = temp->next;
        }
        cout << "\t\t\t\t\t\t 7. Apply for Loan @8.5% p.a. , you can avail a \n \t\t\t\t\t\t pre-approved loan of " << (10*amount) << "." << endl; 
        cout << "\t\t\t\t\t\t Enter Your Choice  ==  ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                depositMoney(head,id);
                services(head,id);
                break;
            case 2:
                withdrawMoney(head,id);
                services(head,id);
                break;
            case 3:
                checkBalance(head,id);
                services(head,id);
                break;
            case 4:
                closeAccount(head,id);
                services(head,id);
                break;
            case 5:
                cout << "\t\t\t\t\t\t User Logged Out!" << endl;
                stop();
                main();
                break;
            case 6:
                accountdetails(head,id);
                services(head,id);
                break;
            case 7:
                loan(head,id);
                services(head,id);
                break;
            default:
                cout << "\t\t\t\t\t\t Enter Valid Choice  ==  ";
                services(head,id);
                break;  
        }
    }
};

class Login : private Services{
    public:
    void loginUser(Bank **head)
    {
        string id,pin;
        cout << "\t\t\t\t\t\t Enter Id ==  ";
        cin >> id;
        Bank *temp = *head;
        if(*head == NULL)
        {
            cout << "\t\t\t\t\t\t Id does not Exist! Create One." << endl;
            stop();
            return;
        }
        while(temp != NULL)
        { 
            if(temp->id == id)
            {
                cout << "\t\t\t\t\t\t Enter PIN ==  ";
                int length = 0;
                char password;
                while( length != 4)
                {
                    if (password>=48 && password<=57)
                    {
                        pin.push_back(password);
                        cout <<"*";
                        length++;
                    }
                    password = getch();
                }
                cout << endl;
                if(temp->pin == pin)
                {
                    cout << "\t\t\t\t\t\t Welcome " << temp->name << "!" << endl;
                    stop();
                    services(head,id);
                }
                else
                {
                    cout << "\t\t\t\t\t\t Wrong PIN" ;
                    stop();
                    return ;
                }
            }
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout << "\t\t\t\t\t\t Id does not Exist! Enter Correct Id or create a new one." << endl;
            stop();    
            return;
        }
    }
};

class Address{
    public:
    string houseNo;
    string area;
    string city;
    string pin;
    string add;
    Address()
    {
        houseNo = "Nil ";
        area = "Nil ";
        city = "Nil ";
        pin = "Nil ";
        add = houseNo + area + city + pin;
    }
    string address(Bank **head)
    {
        cout << "\t\t\t\t\t\t Enter House No. =  ";
        cin>>ws;
        getline(cin,houseNo);
        cout << "\t\t\t\t\t\t Enter Area =  ";
        cin>>ws;
        getline(cin,area);
        cout << "\t\t\t\t\t\t Enter City =  ";
        cin>>ws;
        getline(cin,city);
        cout << "\t\t\t\t\t\t Enter PIN Code =  ";
        cin >> pin;
        add = houseNo + ", " + area + ", " + city + ", " + pin + ". ";
        return add;
    }
};

class NewUser 
{
    public : 
    string getId(Bank **head)
    {
        string id;
        cout << "\t\t\t\t\t\t Create Your Id. (without whitespaces) ==  ";
        cin >> id;
        Bank *temp = *head;
        while(temp != NULL)
        { 
            if(temp->id == id)
            {
                cout << "\t\t\t\t I'd already exists, please use other unique ID  ==  ";
                getId(head);
            }
            temp = temp->next;
        }
        return id;
    }
    void newUserRegistration(Bank **head)
    {
        string id,pin,name,phoneNo;
        Bank *node = new Bank();
        Bank *last = *head;
        int deposit;
        cout << "\t\t\t\t\t\t Enter Your Name == ";
        cin>>ws;
        getline(cin,name);
        Address a1;
        node->add = a1.address(head);
        id = getId(head);
        cout << "\t\t\t\t\t\t Enter Phone Number == ";
        cin >> phoneNo;
        cout << "\t\t\t\t\t\t Create Your PIN. (Limited to 4 integers)  == ";
        int length = 0;
        char password;
        while( length != 4)
        {
            if (password>=48 && password<=57)
            {
                pin.push_back(password);
                cout <<"*";
                length++;
            }
            password = getch();
        }
        cout << endl;
        cout << "\t\t\t\t\t\t Enter Adhaar Card Number ==  ";
        cin >> node->adhar;
        cout << "\t\t\t\t\t\t Enter your PAN == ";
        cin >> node->pan;
        cout << "\t\t\t\t\t\t Enter initial deposit == ";
        cin >> deposit;
        node->id = id;
        node->balance = deposit;
        node->name = name;
        node->phoneNo = phoneNo;
        node->pin = pin;
        (*aad)++;
        node->accountNo = *aad;
        node->next = NULL;
        if(*head == NULL)
        {
            *head = node;
            return;
        }
        while(last->next != NULL)
        {
            last = last->next;
        } 
        last->next = node;
        return;
    }
};

int c = 0;

int main()
{
    system("cls");
    system("Color E4");
    if(c == 0)
    {
       deserialize(&head);
       c++; 
    }
    int choice;
    cout << "\n\n \t\t\t\t\t\tWelcome To L&G Bank" << endl << "\n\n \t\t\t1. New User Registeration.(To avail Loan Serivces create New Account)\n \t\t\t2. Existing User Login.\n \t\t\t3. Exit.\n\n\t\t\t\t\t\t Enter Your Choice.  == ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            NewUser user;
            user.newUserRegistration(&head);
            main();
            break;
        case 2:
        {
            Login login;
            login.loginUser(&head);
            main();
        }
            break;
        case 3:
            serialize(&head);
            exit(0);
        default:
            cout << "\t\t\t\t\t\tEnter A Valid Choice." << endl;
            stop();
            main();
            break;
    }
}