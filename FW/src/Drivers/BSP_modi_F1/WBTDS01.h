#ifndef _WBTDS01_H_
#define _WBTDS01_H_

//��������ģ��֧�ֵĲ�����
//@note  δ����֤��ģ������Ҳû�и�����֧�ֵĲ������б�
typedef enum
{
	BAUDRATE_9600,
	BAUDRATE_19200,
	BAUDRATE_38400,
	BAUDRATE_43000,
	BAUDRATE_57600,
	BAUDRATE_115200
}WBTD_BAUDRATE;


//��������ģ��֧�ֵ�profile
typedef enum
{
	BT_PROFILE_HID,
	BT_PROFILE_SPP,
	BT_PROFILE_BLE
}BT_PROFILE;

void WBTD_Reset(void);
int WBTD_init(void);
int WBTD_query_version(unsigned char *ver_buffer);
int WBTD_set_name(unsigned char *name);
int WBTD_set_baudrate(WBTD_BAUDRATE baudrate);
int WBTD_set_autocon(unsigned char mode);
int WBTD_set_profile(BT_PROFILE mode);
int WBTD_set_ioskeypad(unsigned char enable);
int WBTD_hid_send(unsigned char *str,unsigned int len,unsigned int *send_len);
int WBTD_got_notify_type(void);
int WBTD_RxISRHandler(unsigned char c);
#endif