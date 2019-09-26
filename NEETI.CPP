#include<iostream.h>
int main()
{
int c=0;
int r=0;
int b=0;
int u_input;
int amount=0, count=0;
//menu
cout<<"press 1 for rikhshaw"<<endl;
cout<<"press 2 for car"<<endl;
cout<<"press 3 for bus"<<endl;
cout<<"press 4 to show the record"<<endl;
cout<<"press 5 to delete the record"<<endl;
cin>>u_input;
{
if (u_input==1)
{
if (count<=50)
{
r= r+1;
amount = amount +100;
count = count+1;
}
else
cout<<"no more cars,parking is full"<<endl;
}
else if (u_input ==2)
{
if (count<=50)
{
c=c+1;
amount= amount +200;
count = count +	1;
}
else
cout<<"parking is full"<<endl;
}
else if (u_input==3)
{
if (count <=50)
{
b=b+1;
amount = amount + 300;
count = count +1;
}
else
cout<<"parking is full "<<endl;
}
else if (u_input ==4)
{
if (count <=50)
{
cout<<"the total amount "<<amount;
cout<<"the total number of vhicles parked="<<count<<endl;
cout<<"the total number of rickshaw parked ="<<r<<endl;
cout<<"the total number of car parked ="<<c<<endl;
cout<<"the total number of buses ="<<b<<endl;
}
else
cout<<"parking is full"<<endl;
}
else if (u_input==5)
{
if (count <=50)
{
amount = 0;
count = 0;
r=0;
c=0;
b=0;
cout<<"record deleted"<<endl;
}
else
cout<<"invalid  number"<<endl;
}
}
return 0;
}