#include"Card.h"
#include<string>
#include<iostream>
using namespace std;

 string Card::suit1[4]={"Hearts","Diamonds","Clubs","Spades"};
 string Card::face1[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
Card::Card(int a,int b)
{
    face=a;
    suit=b;

}
void Card::toString()
{
    cout<<face1[face]<<" of "<<suit1[suit];
}
