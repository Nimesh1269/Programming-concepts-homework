/*
	IM/2019/073
	Nimesh Heshan
	Homework 06
*/

#include<iostream>
using namespace std;

int main(){
	
	int pass;

//if the password is 1111 process will terminated
	do{
	
		cout<<".......WELCOME......."<<endl;
		cout<<"====================="<<endl;
	//products prices, we assume that products are not running out of stock
		int prA=50, prB=20, prC=30,prD=35;
	
		int n; //selecting products
		int price; //price of the product
	
	//Enter coins...
		int coinRs1,coinRs2,coinRs5,coinRs10;
	//count of coins.....	
		int C1=100,C2=100,C5=100,C10=100;
	//number of coins in the overflow bin
		int ovFl10=0,ovFl5=0,ovFl2=0,ovFl1=0;
	//balance coins...	
		int B1,B2,B5,B10;
		int EnteredValue;
		int balance=0;
	
		cout<<"Select the product"<<endl;
		cout<<"=================="<<endl;
		cout<<"Enter 1 for product A "<<endl;
		cout<<"Enter 2 for product B "<<endl;
		cout<<"Enter 3 for product C "<<endl;
		cout<<"Enter 4 for product D "<<endl;
	
		cout<<endl;
	
		cout<<"Enter your Product :";
		cin>>n;
		cout<<"\n";
		
//Enter valid nomber to select your desired product..............
    	while(n<1 || n>4){
    		cout<<"Invlid input "<<endl;
    		cout<<"Enter Product number :";
	   		cin>>n;
			cout<<"\n";
		}
		if(n==1){
			cout<<"Price of A :"<<prA;
			price=prA;
		}
		if(n==2){
			cout<<"Price of B :"<<prB;
			price=prB;
		}
		if(n==3){
			cout<<"Price of C:"<<prC;
			price=prC;
		}
		if(n==4){
			cout<<"Price of D :"<<prD;
			price=prD;
	
		}
		cout<<endl;

	 	EnteredValue=0;
	 
		cout<<"Enter the payment"<<endl;
		cout<<"-----------------"<<endl;
		cout<<"\n";
		
//Enter a valid amount of coins..
		while(price>EnteredValue){

			cout<<"number of coins of rs.1 :";
			cin>>coinRs1;
			C1+=coinRs1;
	
			cout<<"number of coins of rs.2 :";
			cin>>coinRs2;
			C2+=coinRs2;
	
			cout<<"number of coins of rs.5 :";
			cin>>coinRs5;
			C5+=coinRs5;
		
			cout<<"number of coins of rs.10 :";
			cin>>coinRs10;
			C10+=coinRs10;
	
  	    	EnteredValue+=coinRs1*1+coinRs2*2+coinRs5*5+coinRs10*10;
  			cout<<endl;
   			if(price>=EnteredValue){
    			cout<<"Insufficiet payment.. re-enter the amount "<<endl;
			}
		}

//Count the balance and return the balance in coins...    	
    	balance=EnteredValue-price;
   		cout<<"\n";
   	
	   	cout<<"Your Balance is :"<<balance<<endl;
		cout<<"\n";
		
   	//remaining coins
        int ex;
        
    	B10=balance/10;
   		if(B10<=C10){
   			balance%=10;
   			cout<<"10 coins:"<<B10<<endl;
   			C10-=B10;
		}else{
			B10=C10;
			ex=C10*10;
			balance-=ex;
   			cout<<"10 coins:"<<B10<<endl;
   			C10-=B10;
		}	
		
       	B5=balance/5;
    	if(B5<=C5){
    		balance%=5;
    		cout<<"5 coins:"<<B5<<endl;
    		C5-=B5;
		}else{
			B5=C5;
			ex=C10*5;
			balance-=ex;
   			cout<<"5 coins :"<<B5<<endl;
   			C5-=B5;
		}	
		
		
    	B2=balance/2;	
    	if(B2<=C2){ 	
    		balance%=2;
    		cout<<"2 coins :"<<B2<<endl;
    		C2-=B2;
		}else{
			B2=C2;
			ex=C10*2;
			balance-=ex;
   			cout<<"2 coins:"<<B2<<endl;
   			C2-=B2;
		}	
		
		
    	B1=balance/1;	
        if(B1<=C1){
    		cout<<"1 coins :"<<B1<<endl;
    		C1-=B1;
		}else{
			B1=C1;
			ex=C1*1;
			balance-=ex;
   			cout<<"1 coins :"<<B1<<endl;
   			C1-=B1;
		}	
		cout<<"\n";
   		cout<<"\n";
   	
	   C10 -= B10 ;
	   C5 -= B5 ;
	   C2 -= B2 ;
	   C1 -= B1 ;	
	//put the excess coins in reserves to overflow bins
		if (C10>120){
			ovFl10 += (C10 - 100);
			C10 =100;
		}
		if (C5>120){
			ovFl5 += (C5 - 100);
			C5 =100;
		}
		if (C2>120){
			ovFl2 += (C2 - 100);
			C2 =100;
		}
		if (C1>120){
			ovFl1 += (C1 - 100);
			C1 =100;
		}
		
		if(ovFl1>0){
			cout<<"Include "<<ovFl1<<" coins into the rs1 overflow bin"<<endl;
		}
		if(ovFl2>0){
			cout<<"Include "<<ovFl2<<" coins into the rs2 overflow bin"<<endl;
		}
		if(ovFl5>0){
			cout<<"Include "<<ovFl5<<" coins into the rs5 overflow bin"<<endl;
		}
		if(ovFl10>0){
			cout<<"Include "<<ovFl10<<" coins into the rs10 overflow bin"<<endl;
		}	

	cout<<"\n";
	cout<<"Thank you...come again";
	cout<<"\n";

//End of the proccess and new customer has to enter 0 to continue his process.
	cout<<"\n";
	cout<<"author --> enter the password to terminate  "<<endl<<"customer --> please enter 0 to continue  "<<endl;
	cout<<endl<<"Enter password : ";
	cin>>pass;
   	cout<<"\n";
 		
 
 }
 while(pass!=1111);
 	return 0;
}	
