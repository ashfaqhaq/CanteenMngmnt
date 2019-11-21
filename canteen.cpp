#include<iostream>
#include<fstream>
#include <sstream>
#include <stdlib.h>
#include<windows.h>
using namespace std;
	int sm=0,sr=0,sd=0,si=0,su=0;
	int maggi_int,upma_int,rice_int,idli_int,dosa_int;// global declaration.
class canteen
{
	public :
		
	int n,m=0,r=0,d=0,i=0,u=0,k,a,l1,z1,z2,t1=3;
    string s1;
    string s2="canteen";
	canteen()
	{   		
		cout<<"		press 1 to place order "<<endl;
		cout<<"		press 2 to login as owner :";
		cin>>n;//n stores owner or order details.
		
     
		switch(n)
		{
			case 1 : order();
			         break;
			         
			case 2 : z1 :
			         cout<<"		Enter login id :";
			         cin>>l1;
			         if(l1==1608)
			         {
			         	z2 :
			         	cout<<"		Enter Password : ";
			         	cin>>s1;
			         	if(s1 == s2)
			         	{
			               owner();
			            }
			            else
			            {
			               --t1;
			         	    cout<< "			Invalid ID  !!"<<endl;
			         	    if(t1==0)
			         	   {
			         	     	exit(1);
						   }
					    	cout<<"			"<<t1<<" Tries are left"<<endl;
			             	goto z2;    	
						}
			         }
			         else
			         {
			         	--t1;
			         	cout<< "			Invalid ID !!"<<endl;
			         	if(t1==0)
			         	{
			         		exit(1);
						}
						cout<<"				"<<t1<<" Tries are left"<<endl;
			         	goto z1;
					 }
			         break;
			default :cout <<"			Enter valid input  !"<<endl;		           
		}
		
        
    		string str_dosa,str_idli,str_maggi,str_rice,str_upma;
           ifstream in("stock.txt");
           if(!in) 
		   {
              cout << "			Cannot open input file.\n";
               exit(1);
            }
             if(!in.eof())
             {
				getline(in, str_maggi,'\n');
	
				getline(in, str_rice,'\n');
    			getline(in, str_dosa,'\n');
   				getline(in, str_idli,'\n' );
   				getline(in, str_upma,'\n');

      			 // getline(in, address, '\n');
       			// getline(in, phone, '\n');
                //Student newStudent(id, name, address, phone);
        	    //Once the four variables are stored, it'll continue on with
       			 // the file, and will continue making students until it reaches the end of the file.
            }  	

             //cout<<str_maggi;
 
  
        std::size_t pos = str_maggi.find("#");
        std::string maggi_quant = str_maggi.substr (pos+1);
  	
        std::size_t pos1 = str_dosa.find('#');
        std::string dosa_quant = str_dosa.substr (pos1+1);

        std::size_t pos2 = str_rice.find('#');
        std::string rice_quant = str_rice.substr (pos2+1);

       std::size_t pos3 = str_idli.find('#');
       std::string idli_quant = str_idli.substr (pos3+1);

       std::size_t pos4 = str_upma.find("#");
      std::string upma_quant = str_upma.substr (pos4+1);
      //std::cout  << ' ' << str3 << '\n';

       int dosa_int = atoi(dosa_quant.c_str()); //converting string to int
       int upma_int = atoi(upma_quant.c_str());
       int idli_int = atoi(idli_quant.c_str());
       int maggi_int = atoi(maggi_quant.c_str());	
       int rice_int = atoi(rice_quant.c_str());
		
	
   
}
	void order()
	{
		while(1)
		{
			cout<<"		 Menu "<<endl;
			cout<<"			Enter 1 for maggie 30 rs  \n			Enter 2 for rice 40 rs  \n			Enter 3 for dosa 20 rs \n			Enter 4 for idly 15 rs \n			Enter 5 for upma 25 rs \n			Enter 6  to generate the bill \n			Enter 7 to finalize the order \n			Enter 8 to go-to home page:";
			cin>>k;//store the item detailsfrom above;

			switch(k)
			{
				case 1 : l1 :
				          cout<<"		 Would you like to increase the quantity in meal :\n		1 for yes \n		2 for no : ";
			             cin>>a;//a stores the to increase the order or not;
			             if(a==1)
			             {
				            cout<<"		 Enter quantity: ";
			                 cin>>sm;//s stores the quantity of meal;
			            }
			            else
			            {
			              	if(a==2)
			            	{
				            	sm=1;
				            }
				            else
				            {
				             	cout<<"			Enter valid input  :"<<endl;
				             	goto l1;
				            }
			            }
			            if(maggi_int-sm<0)
			            {
			            	cout<<"				Sorry for the inconvenience. out of stock "<<endl;
			            	break;
						}
				        m=sm*30;//claculate maggie cost;;
				        break;
				case 2 : l2 :
				         cout<<"		 Would you like to increase the quantity in meal :\n		1 for yes \n		2 for no : ";
			             cin>>a;//a stores the to increase the order or not;
		                 if(a==1)
						{
							cout<<"		 Enter quantity: ";
							cin>>sr;//s stores the quantity of meal;
						}
						else
						{
								if(a==2)
								{
									sr=1;
								}
								else
								{
									cout<<" 			Enter valid input  :"<<endl;
									goto l2;
								}
						}
						if(rice_int-sr<0)
			            {
			            	cout<<"				Sorry for the inconvenience. out of stock "<<endl;
			            	break;
						}
			             r=sr*40;
				         break;
				case 3 : l3 :
				        cout<<" 		Would you like to increase the quantity in meal :\n		1 for yes \n		2 for no : ";
			             cin>>a;//a stores the to increase the order or not;
		                 if(a==1)
						{
							cout<<"	    Enter quantity: ";
							cin>>sd;//s stores the quantity of meal;
						}
						else
						{
								if(a==2)
								{
									sd=1;
								}
								else
								{
									cout<<" Enter valid input  :"<<endl;
									 goto l3;
								}
						}
						if(dosa_int-sd<0)
			            {
			            	cout<<"				Sorry for the inconvenience. out of stock "<<endl;
			            	break;
						}
				          d=sd*20;
				          break;
				case 4 : l4 :
				          cout<<" 		Would you like to increase the quantity in meal :\n		1 for yes \n		2 for no : ";
			             cin>>a;//a stores the to increase the order or not;
		                 if(a==1)
						{
							cout<<"		Enter quantity: ";
							cin>>si;//s stores the quantity of meal;
						}
						else
						{
								if(a==2)
								{
									si=1;
								}
								else
								{
									cout<<" Enter valid input  : "<<endl;
									goto l4;
								}
						}
						if(idli_int-si<0)
			            {
			            	cout<<"				Sorry for the inconvenience. out of stock "<<endl;
			            	break;
						}
						i=si*15;
				          break;
				case 5 : l5:
				        cout<<"			Would you like to increase the quantity in meal :\n		1 for yes \n		2 for no : ";
			             cin>>a;//a stores the to increase the order or not;
		                 if(a==1)
						{
							cout<<"		Enter quantity:"<<endl;
							cin>>su;//s stores the quantity of meal;
						}
						else
						{
								if(a==2)
								{
									su=1;
								}
								else
								{
									cout<<"Enter valid input  :"<<endl;
									goto l5;
								}
						}
						if(upma_int-su<0)
			            {
			            	cout<<"				Sorry for the inconvenience. out of stock "<<endl;
			            	break;
						}
				         u=su*25;
				         break;
				case 6 : cout<<" 			yours bill is: "<<endl;
				         bill();
				         cout<<endl;
				         break;
				case 7 : exit(1);
				
   				case 8 : 
				         canteen() ;
				         break;

				 default :cout<<"Enter valid input  "<<endl;
			}
		}
	}
	void bill()
    {
    	ofstream obj("abc.txt");
    	if(m!=0)
    	{
    		cout<<"		 	Maggie "<<sm<<" plates total :"<<m<<endl;
    		obj<<" Maggie "<<sm<<" plates total :"<<m<<endl;
		}
			if(r!=0)
			{
				cout<<" 	Rice "<<sr<<" plates total :"<<r<<endl;
				obj<<" Rice "<<sr<<" plates total :"<<r<<endl;
			}
				if(d!=0)
				{
					cout<<" 	Dosa "<<sd<<" plates total :"<<d<<endl;
					obj<<" Dosa "<<sd<<" plates total :"<<d<<endl;
				}
					if(i!=0)
					{
						cout<<" 	Idly "<<si<<" plates total :"<<i<<endl;
						obj<<" Idly "<<si<<" plates total :"<<i<<endl;
					}
						if(u!=0)
						{
							cout<<" 	Upma "<<su<<" plates total :"<<u<< endl;
							obj<<" Upma "<<su<<" plates total :"<<u<< endl;

						}
						if(u==0&&i==0&&d==0&&r==0&&m==0)
						{
							cout<<" No item is selected"<<endl;
							obj<< " No item is selected"<<endl;
						}
						cout<<" 				Total bill = "<<m+r+d+i+u<<endl;

    }
    int owner()
        {
    		string str_dosa,str_idli,str_maggi,str_rice,str_upma;
           ifstream in("stock.txt");
           if(!in) 
		   {
              cout << "Cannot open input file.\n";
               return 1;
            }
             if(!in.eof())
             {
				getline(in, str_maggi,'\n');
	
				getline(in, str_rice,'\n');
    			getline(in, str_dosa,'\n');
   				getline(in, str_idli,'\n' );
   				getline(in, str_upma,'\n');

      			 // getline(in, address, '\n');
       			// getline(in, phone, '\n');
                //Student newStudent(id, name, address, phone);
        	    //Once the four variables are stored, it'll continue on with
       			 // the file, and will continue making students until it reaches the end of the file.
            }  	

             //cout<<str_maggi;
 
  
        std::size_t pos = str_maggi.find("#");
        std::string maggi_quant = str_maggi.substr (pos+1);
  	
        std::size_t pos1 = str_dosa.find('#');
        std::string dosa_quant = str_dosa.substr (pos1+1);

        std::size_t pos2 = str_rice.find('#');
        std::string rice_quant = str_rice.substr (pos2+1);

       std::size_t pos3 = str_idli.find('#');
       std::string idli_quant = str_idli.substr (pos3+1);

       std::size_t pos4 = str_upma.find("#");
      std::string upma_quant = str_upma.substr (pos4+1);
      //std::cout  << ' ' << str3 << '\n';

       int dosa_int = atoi(dosa_quant.c_str()); //converting string to int
       int upma_int = atoi(upma_quant.c_str());
       int idli_int = atoi(idli_quant.c_str());
       int maggi_int = atoi(maggi_quant.c_str());	
       int rice_int = atoi(rice_quant.c_str());
       maggi_int-=sm;
      rice_int-=sr;
      dosa_int-=sd;
      idli_int-=si;
      upma_int-=su;
    cout<<"stock left"<<endl;
       cout<<"maggi = "<< maggi_int<<endl<<"rice = "<<rice_int<<endl<<"Dosa = "<<dosa_int<<"\n"<<"idly = "<<idli_int<<"\n"<<"upma = "<<upma_int<<endl;
      
  
     in.close();



        //overwriting the values just before the program exits
       ofstream myfile;
       myfile.open ("stock.txt");
       myfile <<"maggi #"<<maggi_int<<"\n";
       myfile <<"rice #"<<rice_int<<"\n";
       myfile <<"dosa #"<<dosa_int<<"\n";
       myfile <<"idli #"<<idli_int<<"\n";
 

      myfile <<"upma #"<<upma_int;
      myfile.close();
   return 1;
	}
    

};

int main()
{
	system("color 0A");
	canteen p;
	
}

