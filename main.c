#include <stdio.h>
#include <time.h>
	void GetDateTime(void);

	int main(){
	
		printf("Before the GetDateTime() function is called.\n");
		GetDateTime();
		printf("After the GatDateTime() function is called.\n");
		printf("i'm glad to be part of this journey!\n");
		return 0;

	}

	/*GetDateTime() definition */
void GetDateTime(void){

	time_t now;

	printf("Within GetDateTime().\n");
	time(&now);
	printf("Current date and time is : %s\n", asctime(localtime(&now)));

}
