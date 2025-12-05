#include<bits/stdc++.h>
using namespace std;
class Game{
    public:

    int user=0,comp=0,level=0,range=0,min=0;
    void selectLevel()
    {
        do{
        cout<<"Enter level choice: ";
        cout<<"(1-EASY : 2- MEDIUM :3-DIFFICULT)";
        cin>>level;
        if(level<1 || level>3)
            cout<<"Invalid enter valid level";
        }while(level<1||level>3);

    }
    void Userchoice()
    {
        if(level==3)
        {
            do{
            range=100;min=1;
            cout<<"Enter User Choice between(1-100):";
            cin>>user; 
             if(user < 1 || user > range) {
        cout<<"Invalid guess! Please enter within range.\n";
    }
} while(user < 1 || user > range);
         
        }
        else if(level==2)
        {
           do{
            range=50;min=1;
            cout<<"Enter User Choice between(1-50):";
            cin>>user; 
             if(user < 1 || user >range) {
        cout<<"Invalid guess! Please enter within range.\n";
    }
} while(user < 1 || user > range);
           
        }
        else
        {
        do {range=10;min=1;
    cout<<"Enter your guess ("<<min<<" - "<<range<<"): ";
    cin>>user;

    if(user < 1 || user > range) {
        cout<<"Invalid guess! Please enter within range.\n";
    }
} while(user < 1 || user > range);
        }    
    }
    void cchoice()
    {
        if(level==1)
        {
            range=10;min=1;
             comp=(rand()%range)+min;
        }
        else if(level==2)
        {
            range=50;min=1;
             comp=(rand()%range)+min;
        }
        else
        {
            range=100;min=1;
             comp=(rand()%range)+min;
        }
    }
    void check()
    {
        if(user==comp)
        {
           if(level==3)cout<<"100 Points!!\nUser Won";
           else if(level==2)cout<<"50 Points!!\nUser Won";
           else cout<<"10 Points!!\nUser Won";
        }
        else
        {
             cout<<"user choice: "<<user;
            cout<<"comp choice: "<<comp;
            cout<<"\nUser lost!";
        }
    }
};
int main()
{    srand(time(0));
    char play;
    Game g;
    do{
    g.selectLevel();
    g.cchoice();
    g.Userchoice();
    g.check();
    cout<<"Do you want to play again?(Y/N) ";
    cin>>play;
    }while(play=='y' ||play=='Y');
}