#include<iostream>
#include<cstdlib>
#include<cstring>

void readString(char*& p){
	p=(char*)malloc(100*sizeof(char));
	fgets(p,100,stdin);
}

int main()
{
	char *p;
	readString(p);
	std::cout<<p<<std::endl;
	free(p);
	return 0;
}
