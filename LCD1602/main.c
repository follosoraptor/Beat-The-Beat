//
// LCD1602 2 line by 16 character LCD demo
//
// Written by Larry Bank - 12/7/2017
// Copyright (c) 2017 BitBank Software, Inc.
// bitbank@pobox.com
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <lcd1602.h>

int main(int argc, char *argv[])
{
int rc;
	rc = lcd1602Init(1, 0x27);
	if (rc)
	{
		printf("Initialization failed; aborting...\n");
		return 0;
	}
	//_Bool testDisplay = TRUE;
	//while(testDisplay == TRUE)
	//{
		lcd1602WriteString("Excursion 2:");
		lcd1602SetCursor(0,1);
		lcd1602WriteString("Testing Display");
		sleep(3);
		lcd1602Clear();
		lcd1602SetCursor(0,0);
		lcd1602WriteString("Current Score:");
		lcd1602SetCursor(0,1);
		lcd1602WriteString("1");
		sleep(1);
		lcd1602SetCursor(0,1);
		lcd1602WriteString("3");
		sleep(1);
		lcd1602SetCursor(0,1);
		lcd1602WriteString("4");
		sleep(1);
		lcd1602SetCursor(0,1);
		lcd1602WriteString("6");
		sleep(1);
		lcd1602Clear();
		lcd1602SetCursor(0,0);		
		lcd1602WriteString("Final Score:");
		lcd1602SetCursor(0,1);
		lcd1602WriteString("6");
		//testDisplay = FALSE;		
	//}
//	lcd1602WriteString("Score: ");
//	lcd1602SetCursor(0,1);
//	lcd1602WriteString("ENTER to quit");
//	lcd1602Control(1,0,0); // backlight on, underline off, blink block on 
	getchar();
	lcd1602Shutdown();
return 0;
} /* main() */
