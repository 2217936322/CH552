
#define INTERRUPT_TouchKey   0   //����Key�жϷ�ʽ


#define		L_WIN 					0X08
#define 	L_ALT 					0X04
#define		L_SHIFT					0X02
#define 	L_CTL					0X01
#define 	R_WIN 					0X80
#define 	R_ALT 					0X40
#define 	R_SHIFT					0X20
#define 	R_CTL					0X10
#define 	SPACE					0X2C
#define		ENTER					0X28

#define MOUSE 0


/*******************************************************************************
* Function Name  : TouchKeyQueryCylSet(UINT8 cyl)
* Description    : ����������ѯ��������
* Input          : UINT8 cyl ʱ������                  								
                   1   2ms
                   0   1ms									 
* Output         : None 
* Return         : None
*******************************************************************************/
void TouchKeyQueryCylSet1Or2ms(UINT8 cyl);

/*******************************************************************************
* Function Name  : TouchKeyChanelSelect(UINT8 ch)
* Description    : ��������ͨ��ѡ��
* Input          : UINT8 ch ����ͨ��
* Output         : None
* Return         : �ɹ� SUCCESS
                   ʧ�� FAIL
*******************************************************************************/
UINT8 TouchKeyChanelSelect(UINT8 ch);

