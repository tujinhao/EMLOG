#include <stdio.h>
#include "log.h"

int main() {
	const int a = 123,b=321 ;

	EMLOG(LOG_WARN, "a = %d",a);

	EMLOG(LOG_INFO,"b = %d",b);
	return 0;
	//test
	

}


