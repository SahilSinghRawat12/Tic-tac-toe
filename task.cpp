#include<bits/stdc++.h>
using namespace std;
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
int chkwin();
int main()
{
   
   int player=1,i;
   int choice;
   char marks;

   do 
  {
    board();
    if(player % 2==1)
    {
      player=1;
    }

    else{
    player=2;
    }

    cout<<"Player "<<player<<" enter a number : ";
    cin>>choice;

    if(player==1)
    {
      marks='X';
    }

    else{
      marks='O';
    }

    if((choice == 1) && (arr[1]=='1'))
    {
         arr[1]=marks;
    }

    else if( (choice==2) && (arr[2]=='2'))
    {
       arr[2]=marks;
    }

     else if((choice==3) && (arr[3]=='3'))
    {
       arr[3]=marks;
    }

     else if((choice==4) && ( arr[4]=='4'))
    {
       arr[4]=marks;
    }

     else if((choice==5) && (arr[5]=='5'))
    {
       arr[5]=marks;
    }

     else if((choice==6) && (arr[6]=='6'))
    {
       arr[6]=marks;
    }

     else if((choice==7) && (arr[7]=='7'))
    {
       arr[7]=marks;
    }

     else if((choice==8) && (arr[8]=='8'))
    {
       arr[8]=marks;
    }

     else if((choice==9) && (arr[9]=='9'))
    {
       arr[9]=marks;
    }

    else{
      cout<<"INVALID MOVE";
      player--;
      cin.ignore();  // remove the invalid number from input buffer
      cin.get();     // access the character array
    }
        i=chkwin();
        player++;
   
   }
   while(i==-1);

   board();
   if(i==1)
   {
    cout<<"--> \a \n PLAYER "<<--player<<" WIN";
   }

   else{
    cout<<"--> \a GAME DRAW";   // \a is used for alarm
   }
   cin.ignore();
   cin.get();
   return 0;
   
}


void board()
{
  system("cls");   // clear screen
    cout<<"=======================================";
    cout<<"\n \t TIC-TAC-TOE"<<endl;
    cout<<"======================================="<<endl;
    cout<<"PLAYER 1--> (X) - PLAYER 2--> (0)"<<endl<<endl;

      cout<<"     |       |       "<<endl;
    cout<<"  "<<arr[1]<<"  |   "<<arr[2]<<"   |  "<<arr[3]<<endl;
    cout<<"_____|_______|_____"<<endl;
     cout<<"     |       |       "<<endl;
    cout<<"  "<<arr[4]<<"  |   "<<arr[5]<<"   |  "<<arr[6]<<endl;
    cout<<"_____|_______|_____"<<endl;
     cout<<"     |       |       "<<endl;
    cout<<"  "<<arr[7]<<"  |   "<<arr[8]<<"   |  "<<arr[9]<<endl;
   


} 


int chkwin()
{
   if(arr[1]==arr[2]  && arr[2]==arr[3])
   {
       return 1;
   }

  else if(arr[4]==arr[5]  && arr[5]==arr[6])
   {
       return 1;
   }

   else if(arr[7]==arr[8]  && arr[8]==arr[9])
   {
       return 1;
   }

   else if(arr[1]==arr[4]  && arr[4]==arr[7])
   {
       return 1;
   }

   else if(arr[2]==arr[5]  && arr[5]==arr[8])
   {
       return 1;
   }

   else if(arr[3]==arr[6]  && arr[6]==arr[9])
   {
       return 1;
   }

   else if(arr[1]==arr[5]  && arr[5]==arr[9])
   {
       return 1;
   }

   else if(arr[3]==arr[5]  && arr[5]==arr[7])
   {
       return 1;
   }

   else if(arr[1]!='1' && arr[2]!='2' && arr[3]!='3' && arr[4]!='4' && arr[5]!='5' && arr[6]!='6'
    && arr[7]!='7' && arr[8]!='8' && arr[9]!='9')
    {
      return 0;
    }

    else
    {
      return -1;
    }

   
}