#ifndef  _DEFEEPROM_H_
#define  _DEFEEPROM_H_
#if 0
#define EEPROMBUF_PARASIGN			0	

#define EEPROMBUF_PARADSP_SVX		1024
#define EEPROMBUF_PARADSP_SVY		2048
#define EEPROMBUF_PARADSP_SVZ		3072
#define EEPROMBUF_PARADSP_SVIV		4096
#define EEPROMBUF_PARADSP_SVV		5120
#define EEPROMBUF_PARADSP_SVVI		6144
#define EEPROMBUF_PARADSP_SVVII		7168
#define EEPROMBUF_PARADSP_SVS		8192

#define EEPROMBUF_PARAARM_CFG		9216
#define EEPROMBUF_PARAARM_CTRL		10240
#define EEPROMBUF_PARAARM_IO			11264
#define EEPROMBUF_PARAARM_TOOL		12288
#define EEPROMBUF_PARAARM_ATC		13312

#define EEPROMBUF_PARAPP_MODE1		14336
#define EEPROMBUF_PARAPP_MODE2		15360
#define EEPROMBUF_PARAPP_MODE3		16384
#define EEPROMBUF_PARAPP_MODE4		17408
#define EEPROMBUF_PARAPP_MODE5		18432
#define EEPROMBUF_PARAPP_MODE6		19456

#define EEPROMBUF_PARACOORD			20480

#define EEPROMBUF_PARAMACRO			27648

#define EEPROMBUF_PARAOFFSET			44032
#define EEPROMBUF_PARAOFFSET_G54		44032
#define EEPROMBUF_PARAOFFSET_G55		48128
#define EEPROMBUF_PARAOFFSET_G56		52224
#define EEPROMBUF_PARAOFFSET_G57		56320
#define EEPROMBUF_PARAOFFSET_G58		60416
#define EEPROMBUF_PARAOFFSET_G59		64512

#define EEPROMBUF_PARALINEAR			68608
#define EEPROMBUF_PARALINEAR_X		68608
#define EEPROMBUF_PARALINEAR_Y		70656
#define EEPROMBUF_PARALINEAR_Z		72704
#define EEPROMBUF_PARALINEAR_IV		74752
#define EEPROMBUF_PARALINEAR_V		76800
#define EEPROMBUF_PARALINEAR_VI		78848
#define EEPROMBUF_PARALINEAR_VII		80896

#define EEPROMBUF_PARATOOL_LIB		82944
#define EEPROMBUF_PARATOOL_POS		83968
#define EEPROMBUF_PARATOOL_ANGLE	84992
#define EEPROMBUF_PARATOOL_LIFE		86016
#define EEPROMBUF_PARATOOL_LEN		90112
#define EEPROMBUF_PARATOOL_RAD		95232

#define EEPROMBUF_PARAALM				100352

#define EEPROMBUF_PARARUN			102400

#define EEPROMBUF_PARACODE			110592

#define EEPROMBUF_PARAKEY				112640

#define EEPROMBUF_PARAGRAPH			114688

#define EEPROMBUF_PARANET				114800

#define EEPROMIDS_PARASIGN			1024	

#define EEPROMIDS_PARADSP_SERVO_AXIS1		256
#define EEPROMIDS_PARADSP_SERVO_AXIS2		256
#define EEPROMIDS_PARADSP_SERVO_AXIS3		256
#define EEPROMIDS_PARADSP_SERVO_AXIS4		256
#define EEPROMIDS_PARADSP_SERVO_AXIS5		256
#define EEPROMIDS_PARADSP_SERVO_AXIS6		256
#define EEPROMIDS_PARADSP_SERVO_AXIS7		256
#define EEPROMIDS_PARADSP_SERVO_AXIS8		256
#define EEPROMIDS_PARADSP_SERVO_AXIS9		256
#define EEPROMIDS_PARADSP_SERVO_AXIS10		256
#define EEPROMIDS_PARADSP_SERVO_AXIS11		256
#define EEPROMIDS_PARADSP_SERVO_AXIS12		256
#define EEPROMIDS_PARADSP_SERVO_AXIS13		256
#define EEPROMIDS_PARADSP_SERVO_AXIS14		256
#define EEPROMIDS_PARADSP_SERVO_AXIS15		256
#define EEPROMIDS_PARADSP_SERVO_AXIS16		256
#define EEPROMIDS_PARADSP_SERVO_AXIS17		256
#define EEPROMIDS_PARADSP_SERVO_AXIS18		256
#define EEPROMIDS_PARADSP_SERVO_AXIS19		256
#define EEPROMIDS_PARADSP_SERVO_AXIS20		256
#define EEPROMIDS_PARADSP_SERVO_AXIS21		256
#define EEPROMIDS_PARADSP_SERVO_AXIS22		256
#define EEPROMIDS_PARADSP_SERVO_AXIS23		256




#define EEPROMIDS_PARAARM_CFG		256
#define EEPROMIDS_PARAARM_CTRL		256
#define EEPROMIDS_PARAARM_IO		256
#define EEPROMIDS_PARAARM_TOOL		256
#define EEPROMIDS_PARAARM_ATC		256

#define EEPROMIDS_PARAPP_MODE1		256
#define EEPROMIDS_PARAPP_MODE2		256
#define EEPROMIDS_PARAPP_MODE3		256
#define EEPROMIDS_PARAPP_MODE4		256
#define EEPROMIDS_PARAPP_MODE5		256
#define EEPROMIDS_PARAPP_MODE6		256

#define EEPROMIDS_PARACOORD			1792

#define EEPROMIDS_PARAMACRO			4096

#define EEPROMIDS_PARAOFFSET			256
#define EEPROMIDS_PARAOFFSET_G54		256
#define EEPROMIDS_PARAOFFSET_G55		256
#define EEPROMIDS_PARAOFFSET_G56		256
#define EEPROMIDS_PARAOFFSET_G57		256
#define EEPROMIDS_PARAOFFSET_G58		256
#define EEPROMIDS_PARAOFFSET_G59		256

#define EEPROMIDS_PARALINEAR			256
#define EEPROMIDS_PARALINEAR_X		256
#define EEPROMIDS_PARALINEAR_Y		256
#define EEPROMIDS_PARALINEAR_Z		256
#define EEPROMIDS_PARALINEAR_IV		256
#define EEPROMIDS_PARALINEAR_V		256
#define EEPROMIDS_PARALINEAR_VI		256
#define EEPROMIDS_PARALINEAR_VII		256

#define EEPROMIDS_PARATOOL_LIB		256
#define EEPROMIDS_PARATOOL_POS		256
#define EEPROMIDS_PARATOOL_ANGLE		256
#define EEPROMIDS_PARATOOL_LIFE		256
#define EEPROMIDS_PARATOOL_LEN		256
#define EEPROMIDS_PARATOOL_RAD		256

#define EEPROMIDS_PARAALM			256

#define EEPROMIDS_PARARUN			128

#define EEPROMIDS_PARACODE			2048

#define EEPROMIDS_PARAKEY			256

#define EEPROMIDS_PARAGRAPH			5

#define EEPROMIDS_PARANET				6
typedef struct
{
	INT8U Sign[EEPROMIDS_PARASIGN];
	
	INT32S DspServoAxis1[EEPROMIDS_PARADSP_SERVO_AXIS1];
	INT32S DspServoAxis2[EEPROMIDS_PARADSP_SERVO_AXIS2];
	INT32S DspServoAxis3[EEPROMIDS_PARADSP_SERVO_AXIS3];
	INT32S DspServoAxis4[EEPROMIDS_PARADSP_SERVO_AXIS4];
	INT32S DspServoAxis5[EEPROMIDS_PARADSP_SERVO_AXIS5];
	INT32S DspServoAxis6[EEPROMIDS_PARADSP_SERVO_AXIS6];
	INT32S DspServoAxis7[EEPROMIDS_PARADSP_SERVO_AXIS7];
	INT32S DspServoAxis8[EEPROMIDS_PARADSP_SERVO_AXIS8];
	INT32S DspServoAxis9[EEPROMIDS_PARADSP_SERVO_AXIS9];
	INT32S DspServoAxis10[EEPROMIDS_PARADSP_SERVO_AXIS10];
	INT32S DspServoAxis11[EEPROMIDS_PARADSP_SERVO_AXIS11];
	INT32S DspServoAxis12[EEPROMIDS_PARADSP_SERVO_AXIS12];
	INT32S DspServoAxis13[EEPROMIDS_PARADSP_SERVO_AXIS13];
	INT32S DspServoAxis14[EEPROMIDS_PARADSP_SERVO_AXIS14];
	INT32S DspServoAxis15[EEPROMIDS_PARADSP_SERVO_AXIS15];
	INT32S DspServoAxis16[EEPROMIDS_PARADSP_SERVO_AXIS16];
	INT32S DspServoAxis17[EEPROMIDS_PARADSP_SERVO_AXIS17];
	INT32S DspServoAxis18[EEPROMIDS_PARADSP_SERVO_AXIS18];
	INT32S DspServoAxis19[EEPROMIDS_PARADSP_SERVO_AXIS19];
	INT32S DspServoAxis20[EEPROMIDS_PARADSP_SERVO_AXIS20];
	INT32S DspServoAxis21[EEPROMIDS_PARADSP_SERVO_AXIS21];
	INT32S DspServoAxis22[EEPROMIDS_PARADSP_SERVO_AXIS22];
	INT32S DspServoAxis23[EEPROMIDS_PARADSP_SERVO_AXIS23];


	INT32S ArmCFG[EEPROMIDS_PARAARM_CFG];
	INT32S ArmCTRL[EEPROMIDS_PARAARM_CTRL];
	INT32S ArmIO[EEPROMIDS_PARAARM_IO];
	INT32S ArmTOOL[EEPROMIDS_PARAARM_TOOL];
	INT32S ArmATC[EEPROMIDS_PARAARM_ATC];

	INT32S PPMode1[EEPROMIDS_PARAPP_MODE1];
	INT32S PPMode2[EEPROMIDS_PARAPP_MODE2];
	INT32S PPMode3[EEPROMIDS_PARAPP_MODE3];
	INT32S PPMode4[EEPROMIDS_PARAPP_MODE4];
	INT32S PPMode5[EEPROMIDS_PARAPP_MODE5];
	INT32S PPMode6[EEPROMIDS_PARAPP_MODE6];
	
	INT32S Coord[EEPROMIDS_PARACOORD];
	
	INT32S Macro[EEPROMIDS_PARAMACRO];

	INT32S OffsetG54[EEPROMIDS_PARAOFFSET_G54*4];
	INT32S OffsetG55[EEPROMIDS_PARAOFFSET_G55*4];
	INT32S OffsetG56[EEPROMIDS_PARAOFFSET_G56*4];
	INT32S OffsetG57[EEPROMIDS_PARAOFFSET_G57*4];
	INT32S OffsetG58[EEPROMIDS_PARAOFFSET_G58*4];
	INT32S OffsetG59[EEPROMIDS_PARAOFFSET_G59*4];
	
	INT32S LinearX[EEPROMIDS_PARALINEAR_X*2];
	INT32S LinearY[EEPROMIDS_PARALINEAR_Y*2];
	INT32S LinearZ[EEPROMIDS_PARALINEAR_Z*2];
	INT32S LinearIV[EEPROMIDS_PARALINEAR_IV*2];
	INT32S LinearV[EEPROMIDS_PARALINEAR_V*2];
	INT32S LinearVI[EEPROMIDS_PARALINEAR_VI*2];
	INT32S LinearVII[EEPROMIDS_PARALINEAR_VII*2];

	INT32S ToolLib[EEPROMIDS_PARATOOL_LIB];
	INT32S ToolPos[EEPROMIDS_PARATOOL_POS];
	INT32S ToolAngle[EEPROMIDS_PARATOOL_ANGLE];
	INT32S ToolLife[EEPROMIDS_PARATOOL_LIFE*4];
	INT32S ToolLen[EEPROMIDS_PARATOOL_LEN*5];
	INT32S ToolRad[EEPROMIDS_PARATOOL_RAD*5];

	INT8U Alarm[EEPROMIDS_PARAALM*8];
	INT8U Run[EEPROMIDS_PARARUN*64];
	INT8U Code[EEPROMIDS_PARACODE];
	INT8U Key[EEPROMIDS_PARAKEY*8];

	INT32S Graph[EEPROMIDS_PARAGRAPH];
	INT8U Net[EEPROMIDS_PARANET];
	
}tsEepromParaBuf;
#endif

#define EEPROMIDS_PARASIGN			1024			//INT8U		len=256
#define EEPROMIDS_PARAARM_CFG		256			//INT32S		len=256
#define EEPROMIDS_PARAARM_CTRL		512			//INT32S		len=512
#define EEPROMIDS_PARACOORD			2048			//INT32S		len=2048
#define EEPROMIDS_PARAMACRO			2048			//INT32S		len=2048
#define EEPROMIDS_PARAALM				8192			//INT8U		len=2048
#define EEPROMIDS_PARARUN				8192			//INT8U		len=2048
#define EEPROMIDS_PARACODE			8192			//INT8U		len=2048

#if 0
#define EEPROMBUF_PARASIGN			0	
#define EEPROMBUF_PARAARM_CFG		1024
#define EEPROMBUF_PARAARM_CTRL		2048
#define EEPROMBUF_PARACOORD			3072
#define EEPROMBUF_PARAMACRO			11264
#define EEPROMBUF_PARAALM			19456
#define EEPROMBUF_PARARUN			27648
#define EEPROMBUF_PARACODE			35840
//44032
#endif

#define EEPROMBUF_PARASIGN			0	
#define EEPROMBUF_PARAARM_CFG		(EEPROMBUF_PARASIGN+EEPROMIDS_PARASIGN/4)
#define EEPROMBUF_PARAARM_CTRL		(EEPROMBUF_PARAARM_CFG+EEPROMIDS_PARAARM_CFG)
#define EEPROMBUF_PARACOORD			(EEPROMBUF_PARAARM_CTRL+EEPROMIDS_PARAARM_CTRL)
#define EEPROMBUF_PARAMACRO			(EEPROMBUF_PARACOORD+EEPROMIDS_PARACOORD)
#define EEPROMBUF_PARAALM				(EEPROMBUF_PARAMACRO+EEPROMIDS_PARAMACRO)
#define EEPROMBUF_PARARUN				(EEPROMBUF_PARAALM+EEPROMIDS_PARAALM/4)
#define EEPROMBUF_PARACODE			(EEPROMBUF_PARARUN+EEPROMIDS_PARARUN/4)
//	(EEPROMBUF_PARACODE+EEPROMIDS_PARACODE/4)


typedef struct
{
	INT8U Sign[EEPROMIDS_PARASIGN];	
	INT32S ArmCFG[EEPROMIDS_PARAARM_CFG];
	INT32S ArmCTRL[EEPROMIDS_PARAARM_CTRL];
	INT32S Coord[EEPROMIDS_PARACOORD];
	INT32S Macro[EEPROMIDS_PARAMACRO];
	INT8U Alarm[EEPROMIDS_PARAALM];
	INT8U Run[EEPROMIDS_PARARUN];
	INT8U Code[EEPROMIDS_PARACODE];	
}tsEepromParaBuf;

#endif