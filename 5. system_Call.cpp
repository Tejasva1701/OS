#include<io.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

void copy(int s, int d)
{
	int c=0;	
	char m[50];

	while((c=read(s, m, sizeof(m))) >0)	
	{
		write(d, m, c);
	}
}

int main()
{
	char source[10];	
	char destination[10];
	int s;
	int d;
	
	printf("Enter the name of the source file: ");
	scanf("%s", source);
	printf("Enter the name of the destination file: ");
	scanf("%d", destination);
	s=open(source, 0);
	
	if(s==-1)
	{
		d=creat(destination, 1);
	}
	
	copy(s, d);
	close(s);
	close(d);
	return 0;
}
