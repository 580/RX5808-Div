#ifndef __STMF4FLASH_H__
#define __STMF4FLASH_H__

#include "include.h"   

#define STM32_FLASH_BASE        0x08000000 	//STM32 FLASH����ʼ��ַ
 
#define ADDR_FLASH_SECTOR_0     ((uint32_t)0x08000000) 	//����0��ʼ��ַ, 16 Kbytes       //4     16K
#define ADDR_FLASH_SECTOR_1     ((uint32_t)0x08004000) 	//����1��ʼ��ַ, 16 Kbytes       //6     32K
#define ADDR_FLASH_SECTOR_2     ((uint32_t)0x08008000) 	//����2��ʼ��ַ, 16 Kbytes       
#define ADDR_FLASH_SECTOR_3     ((uint32_t)0x0800C000) 	//����3��ʼ��ַ, 16 Kbytes       //8     64K
#define ADDR_FLASH_SECTOR_4     ((uint32_t)0x08010000) 	//����4��ʼ��ַ, 64 Kbytes       //B    128K
#define ADDR_FLASH_SECTOR_5     ((uint32_t)0x08020000) 	//����5��ʼ��ַ, 128 Kbytes      //C    256K
#define ADDR_FLASH_SECTOR_6     ((uint32_t)0x08040000) 	//����6��ʼ��ַ, 128 Kbytes      //D    384K
#define ADDR_FLASH_SECTOR_7     ((uint32_t)0x08060000) 	//����7��ʼ��ַ, 128 Kbytes      //E    512K
#define ADDR_FLASH_SECTOR_8     ((uint32_t)0x08080000) 	//����8��ʼ��ַ, 128 Kbytes      
#define ADDR_FLASH_SECTOR_9     ((uint32_t)0x080A0000) 	//����9��ʼ��ַ, 128 Kbytes      //F    768K
#define ADDR_FLASH_SECTOR_10    ((uint32_t)0x080C0000) 	//����10��ʼ��ַ,128 Kbytes  
#define ADDR_FLASH_SECTOR_11    ((uint32_t)0x080E0000) 	//����11��ʼ��ַ,128 Kbytes      //G    1024K

uint32_t STMF4_FLASH_ReadWord(uint32_t addr);
uint16_t STMF4_FLASH_ReadHalfWord(uint16_t addr);
void STMF4_FLASH_Write_Word(uint32_t *buf,uint32_t count);
void STMF4_FLASH_Write_HalfWord(uint16_t *buf,uint32_t count)	;
void STMF4_FLASH_Read_Word(uint32_t *buf,uint32_t count);
uint32_t STMF4_FLASH_Read_One_Word(uint32_t offset);
void STMF4_FLASH_Read_HalfWord(uint16_t *buf,uint32_t count);
uint32_t STMF4_FLASH_Read_One_HalfWord(uint32_t offset);

						   
#endif

















