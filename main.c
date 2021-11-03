#include <stdio.h>
#include "log.h"
typedef struct {
	int status;
	void (*statusChange)();    
	
}T_Device;
T_Device g_Device;

void addCallbackFunc(void (*pstatusChange)(int)) {

	g_Device.statusChange = pstatusChange;

}
//int getStatus() {
//
//	return g_Device.status;
//}
void run() {


	g_Device.status = 10;
	if (g_Device.status == 10) {
		if (g_Device.statusChange != NULL) {
			g_Device.statusChange(g_Device.status);
		}
	}
}
//�û�����
void callBack(int status) {
	//EM_LOG(LOG_DEBUG, "callback start");
	printf("status = %d\n", status);
}

int main() {
	const int a = 123,b=321 ;

	//EMLOG(LOG_WARN, "a = %d",a);

	EMLOG(LOG_INFO,"a = %d",a);

	//int status = getStatus();  //��Ҫһֱ��ѯ
	addCallbackFunc(callBack);   //�ص�����
	run();
	return 0;
	

}


