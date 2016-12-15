#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void log1(int i)
{
	FILE* f;
	char data[22];
	char* k;

	f=fopen("historique.txt","a");
	time_t crt=time(NULL);
	strftime(data,sizeof(data),"%d/%m/%y %H:%M:%S;",localtime(&crt));
	fprintf(f,"%s",data);

	int choix = rand()%3;

	switch(choix)
	{
        case 0:
		k = "EXIASAVER1_PBM/ex1.pbm";
		fprintf(f," 0; %s\n",k);
            break;
        case 1:
		k = "EXIASAVER1_PBM/ex2.pbm";
		fprintf(f," 0; %s\n",k);
            break;
        case 2:
            k = "EXIASAVER1_PBM/ex3.pbm";
		fprintf(f," 0; %s\n",k);
            break;
	}
	
	fclose(f);
}

void log2(int i,int j,int l)
{
    FILE* f;
    char data[22];

    f=fopen("historique.txt","a");

    time_t crt=time(NULL);

    strftime(data,sizeof(data),"%d/%m/%y %H:%M:%S;",localtime(&crt));
    fprintf(f,"%s",data);

    switch (i)
    {
	case 1:
	    fprintf(f," 1; %dx%d\n",i,j);
	    break;
	case 2:
	    fprintf(f," 2; %dx%d\n",i,j);
	    break;
	default:
	    break;
    }
    fclose(f);
}
