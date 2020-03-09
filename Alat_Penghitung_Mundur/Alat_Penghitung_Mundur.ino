#include <SPI.h>        //SPI.h must be included as DMD is written by SPI (the IDE complains otherwise)
#include <DMD.h>        //
#include <TimerOne.h>   //
#include "SystemFont5x7.h"
#include <Calibri14.h>
#include <Calibri12.h>
#include <Calibri10.h>
#include <KristenITC14.h>
#include <ArialBlack12.h>
#include <Arial_Black_16_ISO_8859_1.h>
#include <TimesNewRoman14.h>
#include <TimesNewRoman10.h>
#include <TimesNewRoman14b.h>

//Fire up the DMD library as dmd
#define DISPLAYS_ACROSS 1
#define DISPLAYS_DOWN 1
DMD dmd(DISPLAYS_ACROSS, DISPLAYS_DOWN);

void ScanDMD()
{
  dmd.scanDisplayBySPI();
}

#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

#define hijau 3
#define kuning 4
#define merah 5
#define atas A3
#define kiri A0
#define bawah A1
#define kanan A2
#define ok 2

int on = 1 ;
int off = 0;
int puluhanmnt = 0;
int satuanmnt = 7;
int puluhandtk = 0;
int satuandtk = 0;


void setup() {
  // put your setup code here, to run once:

  //initialize TimerOne's interrupt/CPU usage used to scan and refresh the display
  Timer1.initialize( 5000 );           //period in microseconds to call ScanDMD. Anything longer than 5000 (5ms) and you can see flicker.
  Timer1.attachInterrupt( ScanDMD );   //attach the Timer1 interrupt to ScanDMD which goes to dmd.scanDisplayBySPI()

  //clear/init the DMD pixels held in RAM
  dmd.clearScreen( true );   //true is normal (all pixels off), false is negative (all pixels on)


  pinMode(hijau, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(merah, OUTPUT);
  pinMode(atas, INPUT);
  pinMode(kanan, INPUT);
  pinMode(bawah, INPUT);
  pinMode(kiri, INPUT);
  pinMode(ok, INPUT);

  lcd.begin(16, 2);
  lcd.backlight();
  delay(250);

  dmd.clearScreen( true );
  dmd.selectFont(Arial_Black_16_ISO_8859_1);
  // Français, Österreich, Magyarország
  const char *MSG = "YAYASAN ISLAM NAHDLATUTH THALABAH (YASINAT)     HAFLAH AL MILAD 97 & AKHIR AS SANAH 1441 H ";
  dmd.drawMarquee(MSG, strlen(MSG), (32 * DISPLAYS_ACROSS) - 1, 0);
  long start = millis();
  long timer = start;
  int looping = 1;
  int angka = 0;
  while (looping) {
    if ((timer + 30) < millis()) {
      dmd.stepMarquee(-1, 0);
      timer = millis();
    }
    
    angka++;
    delay(50);
    int berhenti = digitalRead(ok);

    if (berhenti == 1) {
      looping = 0;
    }
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PONDOK PESANTREN");
  delay(1000);
  lcd.setCursor(4, 1);
  lcd.print("YASINAT");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("BY: ");
  delay(1000);
  lcd.setCursor(4, 1);
  lcd.print("HUT HAS 97");
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  menu();
}

void matrik() {

  dmd.clearScreen( true );
  dmd.selectFont(TimesNewRoman14b);
  dmd.drawChar(  1,  2, '0' + (puluhanmnt % 10) , GRAPHICS_NORMAL );
  dmd.drawChar(  8,  2, '0' + (satuanmnt % 10), GRAPHICS_NORMAL );
  dmd.selectFont(Calibri14);
  dmd.drawChar( 15,  1, ':', GRAPHICS_OR );
  dmd.drawChar( 16,  1, ':', GRAPHICS_OR );
  dmd.selectFont(TimesNewRoman14b);
  dmd.drawChar( 18,  2, '0' + (puluhandtk % 10), GRAPHICS_NORMAL );
  dmd.drawChar( 25,  2, '0' + (satuandtk % 10),  GRAPHICS_NORMAL );

}

void matrikhabis() {
  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("0");
  lcd.print("0");
  lcd.print(":");
  lcd.print("0");
  lcd.print("0");
  lcd.setCursor(2, 1);
  lcd.print("WAKTU HABIS");
  digitalWrite(hijau, off);
  digitalWrite(kuning, off);
  digitalWrite(merah, on);

  dmd.clearScreen( true );
  dmd.selectFont(Calibri10);
  dmd.drawChar(  0,  -1, 'W'  , GRAPHICS_NORMAL );
  dmd.drawChar(  9,  -1, 'A' , GRAPHICS_NORMAL );
  dmd.drawChar( 15,  -1, 'K', GRAPHICS_OR );
  dmd.drawChar( 20,  -1, 'T' , GRAPHICS_NORMAL );
  dmd.drawChar( 26,  -1, 'U' , GRAPHICS_NORMAL );

  dmd.drawChar(  4,  7, 'H'  , GRAPHICS_NORMAL );
  dmd.drawChar(  10,  7, 'A' , GRAPHICS_NORMAL );
  dmd.drawChar( 16,  7, 'B', GRAPHICS_OR );
  dmd.drawChar( 21,  7, 'I' , GRAPHICS_NORMAL );
  dmd.drawChar( 23,  7, 'S' , GRAPHICS_NORMAL );
}

void matrikkosong() {
  dmd.clearScreen( true );
  dmd.clearScreen( true );
  dmd.selectFont(Calibri10);
  dmd.drawChar(  0,  -1, 'W'  , GRAPHICS_NOR );
  dmd.drawChar(  9,  -1, 'A' , GRAPHICS_NOR );
  dmd.drawChar( 15,  -1, 'K', GRAPHICS_NOR );
  dmd.drawChar( 20,  -1, 'T' , GRAPHICS_NOR );
  dmd.drawChar( 26,  -1, 'U' , GRAPHICS_NOR );

  dmd.drawChar(  4,  7, 'H'  , GRAPHICS_NOR );
  dmd.drawChar(  10,  7, 'A' , GRAPHICS_NOR );
  dmd.drawChar( 16,  7, 'B', GRAPHICS_NOR );
  dmd.drawChar( 21,  7, 'I' , GRAPHICS_NOR );
  dmd.drawChar( 23,  7, 'S' , GRAPHICS_NOR );

  lcd.clear();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  digitalWrite(hijau, off);
  digitalWrite(kuning, off);
  digitalWrite(merah, off);

}

void menu() {
  matrik();
  digitalWrite(hijau, off);
  digitalWrite(kuning, off);
  digitalWrite(merah, off);
  delay(1000);
  int pilihan = 1;
  while (true) {
    pilihan += digitalRead(bawah);
    delay(50);
    pilihan -= digitalRead(atas);
    delay(50);
    if (pilihan > 2 ) {
      pilihan = 1;
    } else if (pilihan < 1) {
      pilihan = 2;
    }

    if (pilihan == 1) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" >START");
      lcd.print(" (");
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.print(")");
      lcd.setCursor(0, 1);
      lcd.print("  SETING");
      delay(10);
    } else if (pilihan == 2) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("  START");
      lcd.print(" (");
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.print(")");
      lcd.setCursor(0, 1);
      lcd.print(" >SETING");
      delay(10);
    }
    int val = digitalRead(ok);
    delay(20);
    if (val == 1 && pilihan == 1) {
      delay(100);
      mulai();
    } else if (val == 1 && pilihan == 2) {
      delay(100);
      seting();
    }
  }
}

void seting() {
  int pilihan = 4;
  while (true) {
    pilihan += digitalRead(kanan);
    delay(20);
    pilihan -= digitalRead(kiri);
    delay(20);
    if (pilihan > 4 ) {
      pilihan = 1;
    } else if (pilihan < 1) {
      pilihan = 4;
    }

    if (pilihan == 1) {
      matrik();

      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.setCursor(5, 1);
      lcd.print("^");
      puluhanmnt += digitalRead(atas);
      delay(20);
      puluhanmnt -= digitalRead(bawah);
      delay(20);
      if (puluhanmnt < 0) {
        puluhanmnt = 6;
      } else if (puluhanmnt > 6) {
        puluhanmnt = 0;
      } else if (puluhanmnt == 6) {
        satuanmnt = 0;
        puluhandtk = 0;
        satuandtk = 0;
      }
    } else if (pilihan == 2) {
      matrik();

      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.setCursor(6, 1);
      lcd.print("^");
      satuanmnt += digitalRead(atas);
      delay(20);
      satuanmnt -= digitalRead(bawah);
      delay(20);
      if (satuanmnt < 0) {
        satuanmnt = 9;
      } else if (satuanmnt > 9) {
        satuanmnt = 0;
      } else if (puluhanmnt == 6) {
        satuanmnt = 0;
        puluhandtk = 0;
        satuandtk = 0;
      }
    } else if (pilihan == 3) {
      matrik();

      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.setCursor(8, 1);
      lcd.print("^");
      puluhandtk += digitalRead(atas);
      delay(20);
      puluhandtk -= digitalRead(bawah);
      delay(20);
      if (puluhandtk < 0) {
        puluhandtk = 6;
      } else if (puluhandtk > 6) {
        puluhandtk = 0;
      } else if (puluhandtk == 6) {
        satuandtk = 0;
      }
    } else if (pilihan == 4) {
      matrik();

      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print(puluhanmnt);
      lcd.print(satuanmnt);
      lcd.print(":");
      lcd.print(puluhandtk);
      lcd.print(satuandtk);
      lcd.setCursor(9, 1);
      lcd.print("^");
      satuandtk += digitalRead(atas);
      delay(20);
      satuandtk -= digitalRead(bawah);
      delay(20);
      if (satuandtk < 0) {
        satuandtk = 9;
      } else if (satuandtk > 9) {
        satuandtk = 0;
      } else if (puluhandtk == 6) {
        satuandtk = 0;
      }
    }

    int val = digitalRead(ok);
    delay(20);
    if (val == 1) {
      delay(100);
      menu();
    }

  }
}

void mulai() {
  int mnt1 = puluhanmnt;
  int mnt2 = satuanmnt;
  int dtk1 = puluhandtk;
  int dtk2 = satuandtk;

  while ( true ) {
    if (mnt1 == 0 && mnt2 == 0 && dtk1 <= 5) {
      digitalWrite(hijau, off);
      digitalWrite(kuning, on);
      digitalWrite(merah, off);
    } else if (mnt1 == 0 && mnt2 == 1) {
      digitalWrite(hijau, off);
      digitalWrite(kuning, on);
      digitalWrite(merah, off);
    } else {
      digitalWrite(hijau, on);
      digitalWrite(kuning, off);
      digitalWrite(merah, off);
    }

    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print(mnt1);
    lcd.print(mnt2);
    lcd.print(":");
    lcd.print(dtk1);
    lcd.print(dtk2);

    dmd.clearScreen( true );
    dmd.selectFont(TimesNewRoman14b);
    dmd.drawChar(  1,  2, '0' + (mnt1 % 10) , GRAPHICS_NORMAL );
    dmd.drawChar(  8,  2, '0' + (mnt2 % 10), GRAPHICS_NORMAL );
    dmd.selectFont(Calibri14);
    dmd.drawChar( 15,  1, ':', GRAPHICS_OR );
    dmd.drawChar( 16,  1, ':', GRAPHICS_OR );
    dmd.selectFont(TimesNewRoman14b);
    dmd.drawChar( 18,  2, '0' + (dtk1 % 10), GRAPHICS_NORMAL );
    dmd.drawChar( 25,  2, '0' + (dtk2 % 10),  GRAPHICS_NORMAL );


    if (mnt1 == 0 && mnt2 == 0 && dtk1 == 0 && dtk2 == 0) {
      while (digitalRead(ok)==0) {
        matrikhabis();
        delay(500);

        matrikkosong();
        delay(200);
      }

      menu();
      
    }

    dtk2 -= 1;

    if (dtk2 < 0 ) {
      dtk2 = 9;
      dtk1 -= 1;

      if (dtk1 < 0) {
        dtk1 = 5;
        mnt2 -= 1;

        if (mnt2 < 0) {
          mnt2 = 9;
          mnt1 -= 1;
        }
      }
    }
    delay(1000);

    int berhenti = digitalRead(ok);

    if (berhenti == 1) {

      for (int i = 0; i <= 10; i++) {
        matrikhabis();

        delay(500);

        matrikkosong();
        delay(200);
      }

      menu();
    }
  }
}
