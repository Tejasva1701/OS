#include <iostream>   
#include <stdlib.h>  
#include <stdio.h>  
using namespace std; 

int main()  
{  
	cout << "the kernel version is : "; 
	system("cat /proc/version");  
	
	cout << " cpu type : ";  
	system("cat /proc/cpuinfo | grep 'cpu family' | wc -l");  
	
	cout << " cpu model : " << endl;  
	system("cat /proc/cpuinfo | grep 'model name' | uniq");  
	
	return 0;  

} 
