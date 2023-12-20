/*
*
* Author: Abdelrahman Maher
*	
*/

MEMORY 
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20k

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
		
		. = ALIGN(4);
		_e_bss = . ;
		
		.  = . + 0x1000;
		_stack_top = . ;
	}> sram
	

}
