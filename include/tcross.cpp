#include "rename.cpp"

void tcross(){
  int q=0; //End-loop variable.
    do{
      #include "tcross.h"
      consoleInit(NULL);
      #include "headerb.cpp"
      dir = opendir("/atmosphere/titles");
      if(dir==NULL){
        printf("Failed to open /atmosphere/titles.\n");
      }
      else{          //Print the folders.
        while ((ent = readdir(dir)) != NULL){
        printf("\x1b[%i;2HID%i: %s\n",m++,++t, ent->d_name);
        }
        closedir(dir);
        dir = opendir("/atmosphere/titles");
        i=0;
        while ((ent = readdir(dir)) != NULL)
          {
          i++;
          strcpy(titles[i],ent->d_name);   //Fill the array with the name of the folders.
          }
        }
        closedir(dir);
        ejecutar=false;
        k=1;
        m=4;
          do{
            hidScanInput(); //Input of keys.
            u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

            if (kDown & KEY_B){ejecutar=true;k=0;q=1;}
            if (kDown & KEY_A){ejecutar=true;}
            if (kDown & KEY_DUP && (k>1)){--k;}
            if (kDown & KEY_DDOWN && (k<t)){++k;}
            if (kDown & KEY_DUP && (m>4)){printf("\x1b[%i;0H ",m--);}
            if (kDown & KEY_DDOWN && (m<t+3)){printf("\x1b[%i;0H ",m++);}
            if (kDown & KEY_LSTICK_UP && (k>1)){--k;}
            if (kDown & KEY_LSTICK_DOWN && (k<t)){++k;}
            if (kDown & KEY_LSTICK_UP && (m>4)){printf("\x1b[%i;0H ",m--);}
            if (kDown & KEY_LSTICK_DOWN && (m<t+3)){printf("\x1b[%i;0H ",m++);}

            switch (k){            //Print the cursor "+" at position "k".
              case 1:printf("\x1b[4;0H+\n"); break;
              case 2:printf("\x1b[5;0H+\n"); break;
              case 3:printf("\x1b[6;0H+\n"); break;
              case 4:printf("\x1b[7;0H+\n"); break;
              case 5:printf("\x1b[8;0H+\n"); break;
              case 6:printf("\x1b[9;0H+\n"); break;
              case 7:printf("\x1b[10;0H+\n"); break;
              case 8:printf("\x1b[11;0H+\n"); break;
              case 9:printf("\x1b[12;0H+\n"); break;
              case 10:printf("\x1b[13;0H+\n"); break;
              case 11:printf("\x1b[14;0H+\n"); break;
              case 12:printf("\x1b[15;0H+\n"); break;
              case 13:printf("\x1b[16;0H+\n"); break;
              case 14:printf("\x1b[17;0H+\n"); break;
              case 15:printf("\x1b[18;0H+\n"); break;
              case 16:printf("\x1b[19;0H+\n"); break;
              case 17:printf("\x1b[20;0H+\n"); break;
              case 18:printf("\x1b[21;0H+\n"); break;
              case 19:printf("\x1b[22;0H+\n"); break;
              case 20:printf("\x1b[23;0H+\n"); break;
              case 21:printf("\x1b[24;0H+\n"); break;
              case 22:printf("\x1b[25;0H+\n"); break;
              case 23:printf("\x1b[26;0H+\n"); break;
              case 24:printf("\x1b[27;0H+\n"); break;
              case 25:printf("\x1b[28;0H+\n"); break;
              case 26:printf("\x1b[29;0H+\n"); break;
              case 27:printf("\x1b[30;0H+\n"); break;
              case 28:printf("\x1b[31;0H+\n"); break;
              case 29:printf("\x1b[32;0H+\n"); break;
              case 30:printf("\x1b[33;0H+\n"); break;
              case 31:printf("\x1b[34;0H+\n"); break;
              case 32:printf("\x1b[35;0H+\n"); break;
              case 33:printf("\x1b[36;0H+\n"); break;
              case 34:printf("\x1b[37;0H+\n"); break;
              case 35:printf("\x1b[38;0H+\n"); break;
              case 36:printf("\x1b[39;0H+\n"); break;
              case 37:printf("\x1b[40;0H+\n"); break;
              case 38:printf("\x1b[41;0H+\n"); break;
              case 39:printf("\x1b[42;0H+\n"); break;
              case 40:printf("\x1b[43;0H+\n"); break;
              case 41:printf("\x1b[44;0H+\n"); break;
              case 42:printf("\x1b[45;0H+\n"); break;
            }
            }while(ejecutar==false);
            switch (k){
              case 1:{
                rename(titles,k);
              break;}
              case 2:{
                rename(titles,k);
              break;}
              case 3:{
                rename(titles,k);
              break;}
              case 4:{
                rename(titles,k);
              break;}
              case 5:{
                rename(titles,k);
              break;}
              case 6:{
                rename(titles,k);
              break;}
              case 7:{
                rename(titles,k);
              break;}
              case 8:{
                rename(titles,k);
              break;}
              case 9:{
                rename(titles,k);
              break;}
              case 10:{
                rename(titles,k);
              break;}
              case 11:{
                rename(titles,k);
              break;}
              case 12:{
                rename(titles,k);
              break;}
              case 13:{
                rename(titles,k);
              break;}
              case 14:{
                rename(titles,k);
              break;}
              case 15:{
                rename(titles,k);
              break;}
              case 16:{
                rename(titles,k);
              break;}
              case 17:{
                rename(titles,k);
              break;}
              case 18:{
                rename(titles,k);
              break;}
              case 19:{
                rename(titles,k);
              break;}
              case 20:{
                rename(titles,k);
              break;}
              case 21:{
                rename(titles,k);
              break;}
              case 22:{
                rename(titles,k);
              break;}
              case 23:{
                rename(titles,k);
              break;}
              case 24:{
                rename(titles,k);
              break;}
              case 25:{
                rename(titles,k);
              break;}
              case 26:{
                rename(titles,k);
              break;}
              case 27:{
                rename(titles,k);
              break;}
              case 28:{
                rename(titles,k);
              break;}
              case 29:{
                rename(titles,k);
              break;}
              case 30:{
                rename(titles,k);
              break;}
              case 31:{
                rename(titles,k);
              break;}
              case 32:{
                rename(titles,k);
              break;}
              case 33:{
                rename(titles,k);
              break;}
              case 34:{
                rename(titles,k);
              break;}
              case 35:{
                rename(titles,k);
              break;}
              case 36:{
                rename(titles,k);
              break;}
              case 37:{
                rename(titles,k);
              break;}
              case 38:{
                rename(titles,k);
              break;}
              case 39:{
                rename(titles,k);
              break;}
              case 40:{
                rename(titles,k);
              break;}
              case 41:{
                rename(titles,k);
              break;}
              case 42:{
                rename(titles,k);
              break;}
            }
            consoleInit(NULL);
          }while (q==0);
}
