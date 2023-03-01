#include <iostream>  
using namespace std;
  
int main()  
{  
	  char *names[5] = {"john",  
	                    "Peter",  
	                    "Marco",  
	                    "Devin",  
	                    "Ronan"};  
	for(int i=0;i<5;i++)  
	    {  
	        //print the names on consule
	        std::cout << names[i] << std::endl;  
	    }  
	    return 0;  
	}  
	
