/*
*
* Author: Abdelrahman Maher
*	
*/

MEMORY 
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 512M

}

SECTIONS
{	
	.text : 
	{		
		*(.vectors*)
		*(.text*)
		*(.rodata)
			
		. = ALIGN(4);
		_e_text = . ;
	}> flash
	
	.data :
	{		
		_s_data = . ;
		*(.data)
		
		. = ALIGN(4);
		_e_data = . ;
	}> sram AT> flash
	
	
	.bss :
	{		
		_s_bss = . ;
		
		*(.bss*)
		*(.COMMON*)
		
		. = ALIGN(4);
		_e_bss = . ;

	}> sram
	

}
