#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int player = 0;
    int bot = 0;
    cout<<"Rock Paper Scissor Game"<<endl;
    cout<<"1) Rock"<<endl;
    cout<<"2) Paper"<<endl;
    cout<<"3) Scissor"<<endl;
    cout<<"Player Turn : ";
    cin>>player;

    if(player==1)
    {
        cout<<"You choose Rock"<<endl;
    }
    else if(player==2)
    {
        cout<<"You choose Paper"<<endl;
    }
    else
    {
        cout<<"You choose Scissor"<<endl;
    }

    bot =rand()%3+1;
    if(bot==1)
    {
        cout<<"Bot choose Rock"<<endl;
    }
    else if(bot==2)
    {
        cout<<"Bot choose Paper"<<endl;
    }
    else
    {
        cout<<"Bot choose Scissor"<<endl;
    }
    if(player==bot)
    {
        cout<<"Match Tied"<<endl;
    }
    else if(player==1)
    {
        if(bot==2)
        {
            cout<<"You Lose!"<<endl;
        }
        if(bot==3)
        {
            cout<<"You Win!"<<endl;
        }
    }
    else if(player==2)
    {
        if(bot==1)
        {
            cout<<"You WIn!"<<endl;
        }
        if(bot==3)
        {
            cout<<"You Lose!"<<endl;
        }
    }
    else if(player==3)
    {
        if(bot==1)
        {
            cout<<"You WIn!"<<endl;
        }
        if(bot==2)
        {
            cout<<"you Lose!"<<endl;
        }
    }
    return 0;
}
