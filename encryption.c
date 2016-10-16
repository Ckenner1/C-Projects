//collin kenner
//excercise 14.0

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int key, i, num_letters;
	char infilename[20]={},outfilename[20]={},secretmessage[100]={},encryption_codes[100]={};
	

	FILE *message;
	printf("This Program Encrypts or Decrypts a message\n");
	printf("Enter the input file name>");
	scanf("%s",& infilename);
	printf("Enter the output file name>");
	scanf("%s",&outfilename);
	printf("Enter the encryption KEY number between 1 and 32767>");
	scanf("%i",&key);
	
	srand(key);
	for(i=0; i<100; i++)
		{
		encryption_codes[i]=rand()%256;
		}
	message=fopen(infilename,"r");
	if(message==NULL)
	printf("Error opening input file. \n");
	else
	{
		i=0;
		while(!feof(message))
		fscanf(message,"%c", &secretmessage[i++]);
		num_letters=i;
	
		printf("Message read from file: \n");
		printf("%s\n", secretmessage);
	
		for(;i>0;i--)
			secretmessage[i] = encryption_codes[i]^secretmessage[i];
			
		fclose(message);
		
		message=fopen(outfilename,"w");
		if(message==NULL)
		printf("Error creating output file \n");
		else
		{
			for(i=0;i<=num_letters;i++)
			fprintf(message, "%c", secretmessage[i]);
			
			fclose(message);
		}
	printf("Encrypted message sent to file:\n");
	printf(" %s\n",secretmessage);
	}
	return(0);
}
