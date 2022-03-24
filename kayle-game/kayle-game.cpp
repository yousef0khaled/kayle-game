#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},no_of_choices, player_1 ,player_2 ,p1_first_turn,p1_second_turn ,p2_first_turn,p2_second_turn,num, size;
    size = sizeof(arr)/sizeof(arr[0]);
    num=0;
    for (int i=0;i<size;i++)
    {
        cout<< arr[i] <<" " ;
    }
    while (true){
    cout<<endl<<"hello player1 its your turn";
    cout<<endl<<"please enter number of choices:";
    cin >> no_of_choices;
    if (no_of_choices==1)
    {
        cout<< "please enter your number:";
        cin>> player_1;
        arr[player_1-1]=0;
                 for (int i=0 ; i<size ;i++)
                 {
                 if (arr[i]==0)
                 {
                     num+=1;
                 }
                 }
                 if (num==size)
                 {
                  cout<<"The winner is player_1";
                  break;
                 }
                 else
                 {
                     num=0;
                 }
                 for (int i=0;i<size;i++)
                 {
                     cout<< arr[i]<< " ";
                 }
    }
                 else if (no_of_choices==2)
                 {
                     cout<<"enter your first number:";
                     cin>> p1_first_turn;
                     arr[p1_first_turn-1]=0;
                     cout<<"enter your second number:";
                     cin>> p1_second_turn;
                     arr[p1_second_turn-1]=0;

                      for (int i=0;i<size;i++)
                      {
                      if (arr[i]==0)
                      {
                        num+=1;
                      }
                      }
                      if (num==size)
                      {
                      cout<<"player1 is the winner";
                        break;
                      }
                      else
                      {
                         num=0;
                      }
                      for (int i=0;i<size;i++)
                      {
                         cout<< arr[i]<< " ";
                      }
                 }
                else
                {
                  cout<<"please enter number of choices:";
                }
                cout<<endl<<"hello player 2 its your turn";
                cout<<endl<<"please enter number of choices:";
                cin>> no_of_choices;
                if (no_of_choices==1)
                {
                    cout<<"please enter a number:";
                    cin>> player_2;
                    arr[player_2-1]=0;
                     for (int i=0;i<size;i++)
                 {
                 if (arr[i]==0)
                 {
                     num+=1;
                 }
                 }
                 if (num==size)
                 {
                  cout<<"The winner is player_2";
                  break;
                 }
                 else
                 {
                     num=0;
                 }
                 for (int i=0;i<size;i++)
                 {
                     cout<< arr[i]<< " ";
                 }
                }
                 else if (no_of_choices==2)
                 {
                     cout<<"enter your first number:";
                     cin>> p2_first_turn;
                     arr[p2_first_turn-1]=0;
                     cout<<"enter your second number:";
                     cin>> p2_second_turn;
                      arr[p2_second_turn-1]=0;

                      for (int i=0;i<size;i++)
                      {
                      if (arr[i]==0)
                      {
                        num+=1;
                      }
                      }
                      if (num==size)
                      {
                      cout<<"player2 is the winner";
                        break;
                      }
                      else
                      {
                         num=0;
                      }
                      for (int i=0;i<size;i++)
                      {
                         cout<< arr[i]<< " ";

                      }
                 }
                }
                return 0;
                 }
