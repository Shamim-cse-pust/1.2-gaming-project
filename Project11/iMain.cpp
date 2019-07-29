#include<iostream>
#include "iGraphics.h"
using namespace std;
int mposx, mposy;
bool musicOn = true;
char x[20] = { "IMG\\frontx.bmp" };
char a[20][10000] = { "IMG\\Start.bmp", "IMG\\About.bmp", "IMG\\help.bmp", "IMG\\front.bmp", "IMG\\shamim.bmp", "IMG\\mijan.bmp", "IMG\\santo.bmp", "IMG\\soundon.bmp", "IMG\\soundoff.bmp", "IMG\\back.bmp", "IMG\\Exit.bmp", "IMG\\helpcar.bmp", "IMG\\loading.bmp", "IMG\\startcar.bmp", "IMG\\GameOver.bmp", "IMG\\continue.bmp", "IMG\\home.bmp", "IMG\\restart.bmp" };
char aa[20][1000] = { "IMG\\side1.bmp", "IMG\\side2.bmp", "IMG\\race_car.bmp", "IMG\\race_car1.bmp", "IMG\\race_car2.bmp", "IMG\\race_car3.bmp", "IMG\\side3.bmp", "IMG\\agun.bmp", "IMG\\game5.bmp", "IMG\\race_car4.bmp", "IMG\\side11.bmp", "IMG\\side12.bmp", "IMG\\side13.bmp" };
int bb = 700,cc=400,dd=100,ee=300,ff=200,gg=100,hh=0;
char xx[100],yy[100],aaa[100],xxx[100],yyy[100];
int v =0;
int y = 15;
int r = 0, g = 0, b = 0, score = 0,sc,sd=0;
int i, c = 0, gameState = 10;
int l = 560, m = 280, n = 0;
int d = 320,e=740,f=320;
int j = 450, h = 740, k = 0, p = 0, q = 550, s = 740, t = 0, w = 740, u = 650, vv = 1,z=5,kk=5,fb=0,fc=5;
int bbb = 0,ccc=5,ddd=0,eee=0,fff=0;
/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here
	iClear();
	//home page
	if (gameState == -1){ 
		iShowBMP(0, 0, x);
		for (i = 0; i < 3; i++)
		{
			iShowBMP(400+i*120, 10, a[i]);
		}
		iShowBMP(400 + i * 120, 10, a[10]);
		l = 560, m = 280, n = 0;
		d = 320, e = 740, f = 320;
		j = 450, h = 740, k = 0, p = 0, q = 550, s = 740, t = 0, w = 740, u = 650,ccc=5,fc=5,fff=0;
		xx[0] = '0';
		xx[1] = '\0';
		yy[0] = '5';
		yy[1] = '\0';
		aaa[0] = '0';
		aaa[1] = '\0';
		yyy[0] = '5';
		yyy[1] = '\0';
	}
	//loading page
	else if (gameState == 10){
		iShowBMP(0, 0, a[12]);
		iSetColor(255, 0, 0);
		iFilledRectangle(100, 50, v, y);
		iSetColor(255, 255, 0);
		iRectangle(100, 50, 800, y);
		iSetColor(255, 255, 255);
		iText(100, 20, "L  O  A  D  I  N  G ....", GLUT_BITMAP_TIMES_ROMAN_24);
		xxx[0] = '0';
		xxx[1] = '\0';
	}
	//about us page
	else if (gameState == 0)
	{
		iShowBMP(0, 0, a[3]);
		iShowBMP(10, 70, a[9]);
		iShowBMP(20, 380, a[4]);
		//iShowBMP(360, 380, a[5]);
	//	iShowBMP(700, 380, a[6]);
		iSetColor(255, 0, 255);
		iText(400, 650, "**  D V E L O P E D   B Y  : ** ",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iText(10, 340, "NAME : MD SHAMIM MIAH", GLUT_BITMAP_HELVETICA_18);
		iText(10, 310, "ROLL : 180128", GLUT_BITMAP_HELVETICA_18);
		/*iSetColor(0, 255, 0);
		iText(360, 340, "NAME : MIJANUR RAHMAN", GLUT_BITMAP_HELVETICA_18);
		iText(360, 310, "ROLL : 180127", GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 255);
		iText(700 - 20, 340, "NAME : MAHABUBUL ALOM SANTO", GLUT_BITMAP_HELVETICA_18);
		iText(700 - 20, 310, "ROLL : 180129", GLUT_BITMAP_HELVETICA_18);*/

	}
	//exit page
	else if (gameState == 1)
	{
		exit(0);
	}
	//control page
	else if (gameState == 2)
	{
		iShowBMP(0, 0, a[11]);
		iSetColor(255, 0, 0);
		iText(470, 500, "** CONTROL GAME **", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 255, 0);
		iText(400, 450, "1. PRESS LEFT BUTTON TO MOVE LEFT", GLUT_BITMAP_HELVETICA_18);
		iText(400, 420, "2. PRESS RIGHT BUTTON TO MOVE RIGHT", GLUT_BITMAP_HELVETICA_18);
		iText(400, 390, "3. PRESS UP BUTTON TO SPEED INCREASE", GLUT_BITMAP_HELVETICA_18);
		iText(400, 360, "4. PRESS DOWN BUTTON TO  SPEED DECREASE", GLUT_BITMAP_HELVETICA_18);
		iText(400, 330, "5. PRESS SPACE BUTTON TO PAUSE GAME ", GLUT_BITMAP_HELVETICA_18);
		iShowBMP(10, 70, a[9]);
	}
	//start page
	else if (gameState == 3)
	{
		iShowBMP(0, 0, a[13]);
		iSetColor(112,128, 144);
		iFilledRectangle(270, 0, 460, 700);
		iSetColor(255, 69, 0);
		iFilledRectangle(220, 0, 50, 700);
		iSetColor(255, 69, 0);
		iFilledRectangle(730, 0, 50, 700);
		iSetColor(255, 255, 255);
		iFilledRectangle(410, l, 20,140);
		iFilledRectangle(570, l, 20, 140);
		iFilledRectangle(410, m, 20, 140);
		iFilledRectangle(570, m, 20, 140);
		iFilledRectangle(410, n, 20, 140);
		iFilledRectangle(570, n, 20, 140);
		iShowBMP2(d, 0, aa[4],0);
		iShowBMP2(f, e, aa[3], 0);
		iShowBMP2(j, h, aa[5], 0);
		iShowBMP2(q, s, aa[3], 0);
		iShowBMP2(u, w, aa[3], 0);

		iSetColor(188, 143, 143);
		iFilledRectangle(0, 0, 220, 700);
		iFilledRectangle(780, 0, 220, 700);
		iShowBMP2(50, bb, aa[0],0);
		iShowBMP2(800, dd, aa[10], 0);
		iShowBMP2(50, cc , aa[1], 0);
		iShowBMP2(800, bb, aa[11], 0);
		iShowBMP2(50, dd, aa[6], 0);
		iShowBMP2(800, cc, aa[12], 0);


		if ((score >= 20) && (score % 20 == 0))
		{
			z++;
			kk++;
			score++;
		}
		if (((q >= d || q + 45 >= d) && (q <= d + 50)) && ((s >= 0) && (s <= 60)))
		{
			vv = 0;
			ddd = 1;
			eee = 1;
			iShowBMP2(d, 65, aa[7], 0);
			if (eee == 1 && fff == 0)
			{
				PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
				fff = 1;
			}
		}
		if (((j >= d || j + 45 >= d) && (j <= d + 40)) && ((h >= 0) && (h <= 60)))
		{
			ddd = 1;
			vv = 0;
			eee = 1;
			iShowBMP2(d, 65, aa[7], 0);
			if (eee == 1 && fff == 0)
			{
				PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
				fff = 1;
			}
		}
		if (((f >= d || f + 45 >= d) && (f <= d + 50)) && ((e >= 0) && (e <= 60)))
		{
			vv = 0;
			ddd = 1;
			eee = 1;
			iShowBMP2(d, 65, aa[7], 0);
			if (eee == 1 && fff == 0)
			{
				PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
				fff = 1;
			}
		}
		if (((u >= d || u + 45 >= d) && (u <= d + 50)) && ((w >= 0) && (w <= 60)))
		{
			vv = 0;
			ddd = 1;
			eee = 1;
			iShowBMP2(d, 65, aa[7], 0);
			if (eee == 1&&fff==0)
			{
				PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
				iShowBMP2(d, 40, aa[7], 0);
				fff = 1;
			}
		}
		iSetColor(255, 0, 0);
		iSetColor(0, 128, 0);
		iText(20, 650, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120, 650, xx, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(20, 600, "SPEED : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120, 600, yy, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(20, 550, "DISTANCE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(150, 550, aaa, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(190, 550, "KM ", GLUT_BITMAP_HELVETICA_18);
		iText(20, 500, "HIGH SPEED : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(180, 500, yyy, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(20, 450, "HIGH SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(180, 450, xxx, GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP(10, 70, a[9]);


		
	}
	//restart page
	else if (gameState == 4)
	{
		iShowBMP(0, 0, a[14]);
		for (i = 0; i < 3; i++)
			iShowBMP(400, 10, a[17]);
		iShowBMP(400 + 120, 10, a[16]);
		iShowBMP(400 + 120 + 120, 10, a[10]);
		iSetColor(255, 255, 255);
		iText(200, 600, "G A M E   S C O R E  :  ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(460, 600, xx, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 550, "DISTANCE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(340, 550, aaa, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(370, 550, "KM ", GLUT_BITMAP_HELVETICA_18);
		iText(200, 500, "HIGH SPEED : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(380, 500, yyy, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 450, "HIGH SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(380, 450, xxx, GLUT_BITMAP_TIMES_ROMAN_24);
		l = 560, m = 280, n = 0;
		d = 320, e = 740, f = 320;
		j = 450, h = 740, k = 0, p = 0, q = 550, s = 740, t = 0, w = 740, u = 650;
		z = 5,kk=5,ccc=5;
		bbb = 0,eee=0,fff=0;
		PlaySound(0, 0, 0);
		c = 1;
			
	}
	//continue page
	else if (gameState == 5)
	{
		iShowBMP(0, 0, aa[8]);
		iShowBMP(400, 10, a[15]);
		iShowBMP(400 + 120, 10, a[16]);
		iShowBMP(400 + 120+120, 10, a[10]);
	}
	if (c == 0)
	{
		iShowBMP(10, 10, a[8]);
	}
	else if (c == 1)
	{
		iShowBMP(10, 10, a[7]);
	}
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if (gameState == -1)
		{
			if (mx >= 520 && mx <= 620 && my >= 10 && my <= 60)
			{
				gameState = 0;
			}
			else if (mx >= 760 && mx <= 860 && my >= 10 && my <= 60)
			{
				gameState = 1;
			}
			else if (mx >= 640 && mx <= 740 && my >= 10 && my <= 60)
			{
				gameState = 2;
			}
			else if (mx >= 400 && mx <= 500 && my >= 10 && my <= 60)
			{
				gameState = 3;
				vv = 1;
			}

		}
		else if (gameState == 5)
		{
		 if (mx >= 400 && mx <= 500 && my >= 10 && my <= 60)
		{
			gameState = 3;
			vv = 1;
		}
		 else if (mx >= 520 && mx <= 620 && my >= 10 && my <= 60)
		 {
			 gameState = -1;
		 }
		 else if (mx >= 640 && mx <= 740 && my >= 10 && my <= 60)
		 {
			 gameState = 1;
		 }
		}
		else if (gameState == 4)
		{
			if (mx >= 400 && mx <= 500 && my >= 10 && my <= 60)
			{
				vv = 1;
				
				gameState = 3;
				musicOn = true;
				PlaySound("Music\\shamim.wav", NULL, SND_LOOP | SND_ASYNC);
				c = 0;
				score = 0;
				xx[0] = '0';
				xx[1] = '\0';
				yy[0] = '5';
				yy[1] = '\0';
				aaa[0] = '0';
				aaa[1] = '\0';
				yyy[0] = '5';
				yyy[1] = '\0';
				fc = 5;
			}
			else if (mx >= 520 && mx <= 620 && my >= 10 && my <= 60)
			{
				gameState = -1;
			}
			else if (mx >= 640 && mx <= 740 && my >= 10 && my <= 60)
			{
				gameState = 1;
			}
		}
		else if (gameState == 0 || gameState == 2 )
		{
			if (mx >= 10 && mx <= 60 && my >= 70 && my <= 130)
			{
				gameState = -1;
			}
		}
		else if (gameState == 3)
		{
			if (mx >= 10 && mx <= 60 && my >= 70 && my <= 130)
			{
				gameState = 5;
			}
		}
		if (gameState == -1)
		{
			if (mx >= 890 && mx <= 990 && my >= 200 - 70 && my <= 250 - 70)
			{
				gameState = 0;
			}
		}
		if (musicOn == true)
		{
			if (mx >= 10 && mx <= 35 && my >= 10 && my <= 35){
				musicOn = false;
				PlaySound(0, 0, 0);
				c = 1;
			}

		}
		else if (musicOn == false)
		{
			if (mx >= 10 && mx <= 35 && my >= 10 && my <= 35){
				musicOn = true;
				PlaySound("Music\\shamim.wav", NULL, SND_LOOP | SND_ASYNC);
				c = 0;
			}
		}

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		

	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	mposx = mx;
	mposy = my;
	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		if (gameState == 3){
			if (ddd == 0){
			if (vv == 1)
			{
				vv = 0;
			}
			else if (vv == 0)
			{
				vv = 1;
			}
			}
		}
	}
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{

	}


	if (key == GLUT_KEY_UP)
	{
		if (vv == 1){
			if (gameState == 3){
				z++;
			}
		}
	}
	if (key == GLUT_KEY_DOWN)
	{
		if (vv == 1){
			if (z > kk && gameState == 3)
				z--;
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		if (vv == 1){
			if (d >= 285 && ddd == 0)
			{
				d = d - 20;
			}
		}
	}
	if (key == GLUT_KEY_RIGHT)
	{
		if (vv == 1){
			if (d <= 660 && ddd == 0)
			{
				d = d + 20;
			}
		}
	}
	if (key == GLUT_KEY_HOME)
	{
		
	}
	if (key == GLUT_KEY_INSERT)
	{
		if (gameState == 3)
		{
			if (bbb == 0){
				bbb = 1;
				PlaySound("Music\\horn.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			else
			{
				bbb = 0;
				PlaySound(0, 0, 0);
				if (musicOn == true){
					musicOn = true;
					PlaySound("Music\\shamim.wav", NULL, SND_LOOP | SND_ASYNC);
					c = 0;
				}
			}

		}
		
	}
	//place your codes for other keys here
}

void loading()
{
	if (v >= 800){
		iPauseTimer(0);
		gameState = -1;
	}
	else
	{
		v = v + 5;
	}

}
void roadline()
{
	if (vv == 1){
		if (l <= -176)
		{
			l = 700;
		}
		else l = l - z;
		if (m <= -176)
		{
			m = 700;
		}
		else m = m - z;
		if (n <= -176)
		{
			n = 700;
		}
		else n = n - z;
	}
}
void carmove()
{
	if (vv == 1){
		if (e <= -60)
		{
			score++;
			e = 700;
			f = rand() % 680;
			if (f <= 270)
			{
				f = f + 270;
			}
		}
		else{
			if (gameState == 3)
				e = e - z-1;
			if (e <= 500)
			{
				k = 1;
			}
			if (e <= 350)
			{
				p = 1;
			}
			if (e <= 150)
			{
				t = 1;
			}

		}
		if (k == 1)
		{
			if (h <= -60)
			{
				h = 700;
				j = rand() % 680;
				if (j <= 270)
				{
					j = j + 270;
				}
				score++;
			}
			else{
				if (gameState == 3)
					h = h - z-1;
			}
		}
		if (p == 1)
		{
			if (s <= -60)
			{
				score++;
				s = 700;
				q = rand() % 680;
				if (q <= 270)
				{
					q = q + 270;
				}
			}
			else{
				if (gameState == 3)
					s = s - z-1;
			}
		}
		if (t == 1)
		{
			if (w <= -60)
			{
				w = 700;
				u = rand() % 680;
				if (u <= 270)
				{
					u = u + 270;
				}
				score++;
			}
			else{
				if (gameState == 3)
					w = w - z-1;
			}
			sc = score;
			sd = 0;
				while (sc != 0)
				{
					xx[sd] = (sc % 10) + 48;
					sc = sc / 10;
					sd++;
				}
				for (i = 0; i < sd / 2; i++)
				{
					int sp;
					sp = xx[i];
					xx[i] = xx[sd - 1 - i];
					xx[sd - 1 - i] = sp;
				}
				xx[sd] = '\0';

				
				


				int zd = 0;
				int zz;
				zz = z;
				while (zz != 0)
				{
					yy[zd] = (zz % 10) + 48;
					zz = zz / 10;
					zd++;
				}
				for (i = 0; i < zd / 2; i++)
				{
					int sp;
					sp = yy[i];
					yy[i] = yy[zd - 1 - i];
					yy[zd - 1 - i] = sp;
				}
				yy[zd] = '\0';

				int ad = 0;
				int az;
				az = score/5;
				while (az != 0)
				{
					aaa[ad] = (az % 10) + 48;
					az = az / 10;
					ad++;
				}
				for (i = 0; i < ad / 2; i++)
				{
					int sp;
					sp = aaa[i];
					aaa[i] = aaa[zd - 1 - i];
					aaa[zd - 1 - i] = sp;
				}
				aaa[ad] = '\0';
				if (ad==0)
				{
					aaa[0] = '0';
					aaa[1] = '\0';
				}
				if (sd == 0)
				{
					xx[0] = '0';
					xx[1] = '\0';
				}
				if (zd == 0)
				{
					yy[0] = '5';
					yy[1] = '\0';
				}
				if (fb <= score)
				{
					fb = score;
					for (i = 0; xx[i] != '\0'; i++)
					{
						xxx[i] = xx[i];
					}
				}

				if (fc <= z)
				{
					fc = z;
					for (i = 0; yy[i] != '\0'; i++)
					{
						yyy[i] = yy[i];
					}
				}
				
				if (z == 5&&z==fc)
				{
					yyy[0] = '5';
					yyy[1] = '\0';
				}


		}

	}
}
void crush()
{
	if (ddd == 1){
		if (ccc >= 800)
		{
			iPauseTimer(0);
			gameState = 4;
			ddd = 0;
			eee = 0;
			PlaySound(0, 0, 0);
		}
		else{
			ccc = ccc + 4;
			//if (eee==1)
			//PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}

}
void side()
{
	if (gameState == 3 && vv == 1){
		if (bb <= -100)
		{
			bb = 800;
		}
		else
			bb = bb - z;
		if (cc <= -100)
		{
			cc = 800;
		}
		else
			cc = cc - z;
		if (dd <= -100)
		{
			dd = 800;
		}
		else
			dd = dd - z;
	}
}
int main()
{
		iSetTimer(1, loading);
		iSetTimer(1, roadline);
		iSetTimer(1, carmove);
		iSetTimer(1, side);
		iSetTimer(1, crush);
	if (musicOn)
		PlaySound("Music\\shamim.wav", NULL, SND_LOOP | SND_ASYNC);
	if (bbb==1)
		PlaySound("Music\\horn.wav", NULL, SND_LOOP | SND_ASYNC);
	if (eee==1)
		PlaySound("Music\\car_crush.wav", NULL, SND_LOOP | SND_ASYNC);
	//place your own initialization codes here.
	iInitialize(1000, 700, "car raching");
	return 0;

}