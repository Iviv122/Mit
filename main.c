#include <stdio.h>

int main()
{
	int c;

	char filename[45]; // file name 
	
	printf("Add file name (max. 40 symbols) \n");
	c = getchar(); 
	
	int i=0 ; // while loop

	while(c != EOF && i < 40 && c != '\n'){ // fill in file name
	filename[i] = c;
	c = getchar();
	i++;
	}

	filename[i++] = '.';
	filename[i++] = 't';
	filename[i++] = 'x';
	filename[i++] = 't';
	filename[i] = '\0';

	putchar('\n');
	printf("you can start writing\n");


    // open the file for writing
    FILE *fp = fopen(filename, "w"); 
    if (fp == NULL) // check
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
	c = getchar();
	while(c != EOF){
	fputc(c, fp);
	c = getchar();
	}
    // close the file
    fclose(fp);

    return 0;
}
