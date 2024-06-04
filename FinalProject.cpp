#include <bits/stdc++.h>
using namespace std;

double str(string st){
	double d=0;
	int c=0;
	for(int i=0;i<st.size();i++)
	{
		if(st[i]=='.')
		c=i;
		else
		{
			d*=10;
			d+=st[i]-'0';
		}
    }
    for(int i=0;i<st.size()-c-1;i++)
    d/=10;
    return d;
}

class Account{
	private :
	    string name;
	    string password;
    	string Ncode;
    	string Anum;
	    string shaba;
	    double debt;
	    double balance;
    	double x;
	    double stock;
	
	public : 
    	void setname(string _name){
	    	name=_name;
    	}
    	string getname(){
	    	return name;
	    }
	
	    void setpassword(string _password){
		    password=_password;
	    }
	    string getpassword(){
		    return password;
	    }
	
	    void setNcode(string _Ncode){
		    Ncode=_Ncode;
	    }
	    string getNcode(){
	    	return Ncode;
	    }
	
	    void setAnum(string _Anum){
		    Anum=_Anum;
	    }
	    string getAnum(){
	    	return Anum;
	    }
	
	    void setshaba(string _shaba){
		    shaba=_shaba;
	    }
	    string getshaba(){
		    return shaba;
	    }
	
	    void setdebt(double _debt){
		    debt=_debt;
	    }
	    double  getdebt(){
	    	return debt;
	    }
	
	    void setbalance(double _balance){
		    balance=_balance;
	    }
	    double getbalance(){
		    return balance;
	    }
	
	    void  setx(double _x){
		    x=_x;
	    }
	    double getx(){
	    	return x;
	    }
	
	    void setstock(double _stock){
	    	stock=_stock;
	    }
	    double getstock(){
	    	return stock;
	    }
};

class Dividend{
	private :
		string symbol;
		string fullname;
		double price;
		double marketsize;
		
	public :
		void setsymbol(string _symbol){
			symbol=_symbol;
		}
		string getsymbol(){
			return symbol;
		}
		 
		void setfullname(string _fullname){
			fullname=_fullname;
		}
		string getfullname(){
			return fullname;
		}
		
		void setprice(string price){	
	    	double h;
	    	h=str(price);
		}
		double getprice(){
			return price;
		}
		
		void setmarketsize(string marketsize){
			double h1;
			h1=str(marketsize);
		}
	    double  getmarkesize(){
			return marketsize;
		}
}; 
int main(){
	Dividend t1[20];
	string s;
	double k;
	Account t[20];
    ofstream f1("Account",ios::app);
	ifstream f2("Account");
   	int x=0;    
   	while(f2>>s)
	{
    	for(int i=0;;i++)
    	{
        	t[i].setname(s);
 			
        	f2>>s;
    		t[i].setpassword(s);
			
   			f2>>s;
    		t[i].setNcode(s);
    			
   			f2>>s;
   			t[i].setAnum(s);
  			
   			f2>>s;
   			t[i].setshaba(s);
			
   			f2>>k;
   	 		t[i].setdebt(k);
			
   			f2>>k;
   			t[i].setbalance(k);
			
   			f2>>k;
   			t[i].setx(k);
			
    		f2>>k;
    		t[i].setstock(k);
			
		    x++;
			break;		
    	}
   }
   	ofstream f3("my stock",ios::app);
   	ifstream f4("my stock");
   	int x1=0;
   	while(f4>>s)
    {
    	for(int i=0;;i++)
    	{
           	t1[i].setsymbol(s);
			
        	f4>>s;
            t1[i].setfullname(s);
			
           	f4>>s;
    	   	t1[i].setprice(s);
 			
           	f4>>s;
    	   	t1[i].setmarketsize(s);
    	            	
    	   	x++;
    	   	break;
			}
	}
	
	int select=0;
	while(select!=8)
	{
		cout<<"1)sakht account"<<endl<<"2)ehraz hoviat"<<endl<<"3)bardasht ya sharj hesab"<<endl<<"4)kharid sahm"<<endl<<"5)furush sahm"<<endl<<"6)print sabad saham khod"<<endl<<"7)print list saham"<<endl;
		cout<<"enter select: ";
		cin>>select;
		
		 if(select==1)
	    {
           cout<<"enter name:";
    	   getline(cin>>ws,s);
    	   t[x].setname(s);
	   
    	   cout<<"enter password:";
    	   cin>>s;
    	   t[x].setpassword(s);
	     
    	   select=2;
    	}
    	
    	if(select==2)
    	{
    	    if(s=="")
        	{
    	    	cout<<"enter name: ";
    		    cin>>s;
    		    int y;
    		    for(int i=0;;i++)
    			{
    			   if(t[i].getname()==s)
    			   {
    			    	y=i;
    				    break;
    			   }
			
    		    }
    		    while(s!=t[y].getpassword())
    			{
    		       cout<<"enter passwoed: ";
     	           cin>>s;
		           t[y].getpassword();
    	    	}
    	    }
	        else
         	{
    		    cout<<"enter national code: "; 
    		    cin>>s;
    		    t[x].setNcode(s);
		
    		    cout<<"enter account number: ";
    		    cin>>s;
     		    t[x].setAnum(s);
  		
    	 	    cout<<"enter shaba: ";
    		    cin>>s;
    		    t[x].setshaba(s);
		
    		    cout<<"enter debt: ";
    		    cin>>k;
    		    t[x].setdebt(k);
 		
    	  	    cout<<"enter balance: ";
    		    cin>>k;
    		    t[x].setx(k);
		
    		    cout<<"enter stock: ";
    	 	    cin>>k;
    		    t[x].setstock(k);	
    	    }	
    	}
    	
    	if(select==3)
    	{
    	    double p;
    	    cout<<"enter p:";
        	cin>>p;
	
        	if(p>0)
         	{
    	    	p+=t[x].getbalance();
    		    t[x].setbalance(p);
    		    cout<<t[x].getbalance()<<endl;
    	    }
    	    else
            {
    	        p=p*(-1);
    	        p+=t[x].getdebt();
    	        t[x].setdebt(p);
    	        cout<<t[x].getdebt()<<endl;
            }	
    	}
    	
    	if(select==4)
    	{
    		cout<<"enter symbol: ";
    		cin>>s;
    		Dividend t2[500];
    		int z1;
    		for(int i=0;i<495;i++)
    		{
    			if(s==t2[i].getsymbol())
    			{
    				z1=i;
    				break;	
				}
			}
			double w;
			w=t2[z1].getprice();
    		if(w<t[x].getbalance())
    		{
    			for(int i=0;i<x+1;i++)   
			 	{
	            	f3<<t1[i].getsymbol()<<' ';
	        		f3<<t1[i].getfullname()<<' ';
                	f3<<t1[i].getprice()<<' ';
                	f3<<t1[i].getmarkesize()<<endl;
	        	}
	        	cout<<"anjam shod"<<endl;
    		    
			}
			else
			cout<<"you don't have enough money"<<endl;
		}
		
		if(select==5)
		{
			cout<<"enter symbol: ";
			cin>>s;
			
			int v;
			for(int i=0;i<20;i++)
			{
				if(s==t1[i].getsymbol())
				{
					v=i;
					break;
				}
			}
			int pp,r,r1;
			cout<<"enter marketsize: "<<endl;
			cin>>pp;
			
			r=(t1[v].getmarkesize()-pp);
			r1=(r*t1[v].getprice());
			r1+=t[x].getbalance();
			
			cout<<t[x].getbalance()<<endl;
		}
	
		if(select==6)
		{
			cout<<t1[x].getsymbol()<<'\t';
			cout<<t1[x].getfullname()<<'\t';
			cout<<t1[x].getprice()<<'\t';
			cout<<t1[x].getmarkesize()<<endl;	
		}
    	
    	if(select==7)
		{
	    	string n;
        	ifstream f("stock_market_data");
        	Dividend t2[500];
	        for(int i=0;i<495;i++)
	        {
        		string m[5];
         		int h=0;
         		int z=0;
        		getline(f,n);
 		
        		for(int j=0;j<n.length();j++)
        		{
        			if(n[j]=='!')
        			{
	    			m[h]=n.substr(z+1,j-z-1);
    				z=j;
    				h++;	
         		    }
                }
                cout<<n<<endl;
		
        		t2[i].setsymbol(m[1]);
        		t2[i].setfullname(m[2]);
        		t2[i].setmarketsize(m[4]);
        		t2[i].setprice(m[3]);	
    	    }
 		} 	
	}
	
		for(int i=0;i<x+1;i++)
   	    {
		    f1<<t[i].getname()<<' ';
         	f1<<t[i].getpassword()<<' ';
        	f1<<t[i].getNcode()<<' ';
        	f1<<t[i].getAnum()<<' ';
        	f1<<t[i].getshaba()<<' ';
        	f1<<t[i].getdebt()<<' ';
        	f1<<t[i].getbalance()<<' ';
        	f1<<t[i].getx()<<' ';
        	f1<<t[i].getstock()<<endl;	
        }	
}