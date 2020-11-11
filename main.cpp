#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/drawing.h>
#include <allegro5/allegro_windows.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro.h>
               int matris[5][10]={(0,0,0,0,0,0,0,0,0,0),(0,0,0,0,0,0,0,0,0,0),(0,0,0,0,0,0,0,0,0,0),(0,0,0,0,0,0,0,0,0,0),(0,0,0,0,0,0,0,0,0,0)};
               char in[2],out[2];
               char a[2],b[2],c[2],d[2],e[2];
               int x1=-1,y1=-1,z1=-1,t1=-1,a1=-1,b1=-1,c1=-1,d1=-1,e1=-1;
               int x,y,z,t,a2=1,b2=1,c2=1,d2=1,e2=1;
void atama3(int as1, int ay1,int as2, int ay2, int as3, int ay3,int as4,int ay4){

            if(ay1==1){
                if(as1==-1){
                    matris[0][0]=1;
                }
                if(0<=as1){
                    matris[0][0]=0;
                    matris[0][9]-=as1;
                }
            }
            if(ay1==0){
                if(as1==-1){
                    matris[0][0]=-1;
                }
                if(0<=as1){
                    matris[0][0]=0;
                    matris[0][9]+=as1;
                }
            }
            if(ay2==0){
                if(as2==-1){
                    matris[0][1]=-1;
                }
                if(0<=as2){
                    matris[0][1]=0;
                    matris[0][9]+=as2;
                }
            }
            if(ay2==1){
                if(as2==-1){
                    matris[0][1]=1;
                }
                if(0<=as2){
                    matris[0][1]=0;
                    matris[0][9]-=as2;
                }
            }
            if(ay3==1){
                if(as3==-1){
                    matris[0][2]=1;
                }
                if(0<=as3){
                    matris[0][2]=0;
                    matris[0][9]-=as3;
                }
            }
            if(ay3==0){
                if(as3==-1){
                    matris[0][2]=-1;
                }
                if(0<=as3){
                    matris[0][2]=0;
                    matris[0][9]+=as3;
                }
            }
            if(ay4==1){
                if(as4==-1){
                    matris[0][3]=1;
                }
                if(0<=as4){
                    matris[0][2]=0;
                    matris[0][9]-=as4;
                }
            }
            if(ay4==0){
                if(as4==-1){
                    matris[0][3]=-1;
                }
                if(0<=as4){
                    matris[0][2]=0;
                    matris[0][9]+=as4;
                }
            }
}
void GaussJordan(int harita){
    if(harita==1){
        int matris_1[5][9];
        int i,j,k,control=0,row=5,column=9,count_1=0,ctrl_1=0;
        for(i=0;i<5;i++){
            for(j=0;j<8;j++){
                matris_1[i][j]=matris[i][j];

            }
        }
        matris_1[0][8]=matris[0][9];
        matris_1[1][8]=matris[1][9];
        matris_1[2][8]=matris[2][9];
        matris_1[3][8]=matris[3][9];
        matris_1[4][8]=matris[4][9];
    for(i=0;i<5;i++){
        for(j=0;j<9;j++){
            printf("%5d",matris_1[i][j]);

    }
    printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<=9;j++){
            if(matris[i][j]==-1){
                count_1++;
            }
            if(count_1==4){
                printf("Yollarda mantik hatasi var bu yuzden denklem olusturulamiyor.");
                ctrl_1=1;
                break;

            }

        }
        if(count_1==4) break;
        count_1=0;
    }
    if(ctrl_1==0){
    for(i=0;i<row;i++)
    {
        if(column<=control)
            break;
        int m = i;
        while(matris_1[m][control]==0)
        {
            m++;
            if(m==row)
            {
                m=i;
                control++;
                if(column == control)
                {
                    control--;
                    break;
                }
            }
        }
        for(j=0;j<column;j++)
        {
        int tmp = matris_1[i][j];
            matris_1[i][j] = matris_1[m][j];
            matris_1[m][j] = tmp;

        }

        int control2 = matris_1[i][control];
        if(control2 != 0)
        {
            for(j=0;j<column;j++)
                matris_1[i][j] /= control2;

        }

        int control3;
        for(j=0;j<row;j++)
        {
            if(j != i)
            {
                control3 = matris_1[j][control];
                for(k = 0;k<column;k++)
                    matris_1[j][k] -= (control3 * matris_1[i][k]);

            }
        }

        control++;
        printf("\n\n");
        printf("%d. Adim\n",i+1);
        for(int u=0;u<5;u++)
    {
        for(int q=0;q<9;q++)
        {
            printf("%5d",matris_1[u][q]);
        }
        printf("\n");
    }
    }
    printf("\n\nMatrisin Sonucu\n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%5d",matris[i][j]);
        }
        printf("\n");
    }
    }
    printf("\n");
    printf("x:%d  y:%d  z:%d  t:%d  a:%d  b:%d  c:%d  d:%d",x1,y1,z1,t1,a1,b1,c1,d1);
    }
    if(harita==2){
        int i,j,k,control=0,row=5,column=10,ctrl_1=0,count_1=0;
     for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("%5d",matris[i][j]);

    }
    printf("\n");
     }
    for(i=0;i<5;i++){
        for(j=0;j<=9;j++){
            if(matris[i][j]==-1){
                count_1++;
            }
            if(count_1==4){
                printf("Yollarda mantik hatasi var bu yuzden denklem olusturulamiyor.");
                ctrl_1=1;
                break;

            }

        }
        if(count_1==4) break;
        count_1=0;
    }
    if(ctrl_1==0){
    for(i=0;i<row;i++)
    {
        if(column<=control)
            break;
        int m = i;
        while(matris[m][control]==0)
        {
            m++;
            if(m==row)
            {
                m=i;
                control++;
                if(column == control)
                {
                    control--;
                    break;
                }
            }
        }
        for(j=0;j<column;j++)
        {
            int tmp = matris[i][j];
            matris[i][j] = matris[m][j];
            matris[m][j] = tmp;

        }

        int control2 = matris[i][control];
        if(control2 != 0)
        {
            for(j=0;j<column;j++)
                matris[i][j] /= control2;

        }

        int control3;
        for(j=0;j<row;j++)
        {
            if(j != i)
            {
                control3 = matris[j][control];
                for(k = 0;k<column;k++)
                    matris[j][k] -= (control3 * matris[i][k]);

            }
        }

        control++;
        printf("\n\n");
        printf("%d. Adim\n",i+1);
        for(int u=0;u<5;u++)
    {
        for(int q=0;q<10;q++)
        {
            printf("%5d",matris[u][q]);
        }
        printf("\n");
    }
    }
    printf("\n\nMatrisin Sonucu\n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%5d",matris[i][j]);
        }
        printf("\n");
    }
    }
    printf("\n");
    printf("x:%d  y:%d  z:%d  t:%d  a:%d  b:%d  c:%d  d:%d  e:%d",x1,y1,z1,t1,a1,b1,c1,d1,e1);
    }
}
void atama1(int index1, int as1, int ay1,int index2, int as2, int ay2, int index3, int as3, int ay3,int index4,int as4,int ay4, int denkNum){
     if(ay1==1){
        if(0<=as1){
            matris[denkNum][index1]=0;
            matris[denkNum][9]+=as1;
        }
        if(as1==-1){
            matris[denkNum][index1]=-1;
        }
     }
     if(ay1==0){
        if(0<=as1){
            matris[denkNum][index1]=0;
            matris[denkNum][9]-=as1;
                    }
        if(as1==-1){
            matris[denkNum][index1]=1;
        }
     }
     if(ay2==0){
        if(0<=as2){
            matris[denkNum][index2]=0;
            matris[denkNum][9]+=as2;
        }
        if(as2==-1){
            matris[denkNum][index2]=-1;
        }
     }
     if(ay2==1){
        if(0<=as2){
            matris[denkNum][index2]=0;
            matris[denkNum][9]-=as2;
                    }

        if(as2==-1){
                matris[denkNum][index2]=1;
        }
     }
     if(ay3==1){
        if(0<=as3){
            matris[denkNum][index3]=0;
            matris[denkNum][9]+=as3;
        }
        if(as3==-1){
            matris[denkNum][index3]=-1;
        }
     }
     if(ay3==0){
        if(0<=as3){
            matris[denkNum][index3]=0;
            matris[denkNum][9]-=as3;
                    }
        if(as3==-1){
            matris[denkNum][index3]=1;
        }
     }
     if(ay4==1){
        if(0<=as4){
            matris[denkNum][index4]=0;
            matris[denkNum][9]+=as4;
        }
        if(as4==-1){
            matris[denkNum][index4]=-1;
        }
     }
     if(ay4==0){
        if(0<=as4){
            matris[denkNum][index4]=0;
            matris[denkNum][9]-=as4;
                    }
        if(as4==-1){
            matris[denkNum][index4]=1;
        }
     }
    if(ay1==1){
        if(ay2==0){
            if(ay3==1){
                if(ay4==1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][index4]=-1;
                                    matris[denkNum][9]=0;
                }
            }
        }
    }
    if(ay1==0){
        if(ay2==1){
            if(ay3==0){
                if(ay4==0){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][index4]=-1;
                                    matris[denkNum][9]=0;
                }
            }
        }
    }

}
void atama2(int index1, int as1, int ay1,int index2, int as2, int ay2, int index3, int as3, int ay3,int index4,int as4,int ay4, int denkNum){
     if(ay1==1){
        if(0<=as1){
            matris[denkNum][index1]=0;
            matris[denkNum][9]+=as1;
        }
        if(as1==-1){
            matris[denkNum][index1]=-1;
        }
     }
     if(ay1==0){
        if(0<=as1){
            matris[denkNum][index1]=0;
            matris[denkNum][9]-=as1;
                    }
        if(as1==-1){
            matris[denkNum][index1]=1;
        }
     }
     if(ay2==0){
        if(0<=as2){
            matris[denkNum][index2]=0;
            matris[denkNum][9]+=as2;
        }
        if(as2==-1){
            matris[denkNum][index2]=-1;
        }
     }
     if(ay2==1){
        if(0<=as2){
            matris[denkNum][index2]=0;
            matris[denkNum][9]-=as2;
                    }

        if(as2==-1){
                matris[denkNum][index2]=1;
        }
     }
     if(ay3==1){
        if(0<=as3){
            matris[denkNum][index3]=0;
            matris[denkNum][9]+=as3;
        }
        if(as3==-1){
            matris[denkNum][index3]=-1;
        }
     }
     if(ay3==0){
        if(0<=as3){
            matris[denkNum][index3]=0;
            matris[denkNum][9]-=as3;
                    }
        if(as3==-1){
            matris[denkNum][index3]=1;
        }
     }
     if(ay4==0){
        if(0<=as4){
            matris[denkNum][index4]=0;
            matris[denkNum][9]+=as4;
        }
        if(as4==-1){
            matris[denkNum][index4]=-1;
        }
     }
     if(ay4==1){
        if(0<=as4){
            matris[denkNum][index4]=0;
            matris[denkNum][9]-=as4;
                    }
        if(as4==-1){
            matris[denkNum][index4]=1;
        }
     }
    if(ay1==1){
        if(ay2==0){
            if(ay3==1){
                if(ay4==0){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][index4]=-1;
                                    matris[denkNum][9]=0;
                }
            }
        }
    }
    if(ay1==0){
        if(ay2==1){
            if(ay3==0){
                if(ay4==1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][index4]=-1;
                                    matris[denkNum][9]=0;
                }
            }
        }
    }

}
void atama(int index1, int as1, int ay1,int index2, int as2, int ay2, int index3, int as3, int ay3, int denkNum){
            if(ay1==0){
                if(ay2==0){
                    if(ay3==0){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as2-as3);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as1+as3);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as2-as1);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                    if(ay3==1){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as2+as3);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as1-as3);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as1-as2);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                }
                if(ay2==1){
                    if(ay3==0){
                  // denklem oluşturalmıyor.mantık hatası var.
                    }
                    if(ay3==1){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as3-as2);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as3-as1);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as1+as2);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                }
            }
            if(ay1==1){
                if(ay2==0){
                    if(ay3==0){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as3-as2);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as3-as1);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as1+as2);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                    if(ay3==1){
                    // denklem oluşmuyor mantık hatası bir girişten araç giremiyoryor.
                    }
                }
                if(ay2==1){
                    if(ay3==0){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as2+as3);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as1-as3);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as1-as2);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                    if(ay3==1){
                        if(as1==-1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=-1;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=0;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=-1;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=as3;
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=as2;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=1;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as2-as3);
                                }
                            }
                        }
                        if(0<=as1){
                            if(as2==-1){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=-1;
                                    matris[denkNum][9]=as1;
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=1;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=(as1+as3);
                                }
                            }
                            if(0<=as2){
                                if(as3==-1){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=1;
                                    matris[denkNum][9]=(as2-as1);
                                }
                                if(0<=as3){
                                    matris[denkNum][index1]=0;
                                    matris[denkNum][index2]=0;
                                    matris[denkNum][index3]=0;
                                    matris[denkNum][9]=0;
                                }
                            }

                        }
                    }
                }
            }


}
void in_out(char *g,char *o){
    char dest[4]={'x','y','z','t'};
    int i=0;
    for(i=0;i<4;i++){
        if(dest[i]=='x'){
            if(g[1]=='x'||g[0]=='x'){

                if(x1==-1){
                    matris[0][0]=1;
                }
                if(0<=x1){
                    matris[0][0]=0;
                    matris[0][9]+=x1;
                }
            }
            if(o[1]=='x'||o[0]=='x'){
                x=0;
               if(x1==-1) matris[0][0]=-1;
                 if(0<=x1){
                    matris[0][0]=0;
                    matris[0][9]-=x1;
                }
            }
        }
        if(dest[i]=='y'){
            if(g[1]=='y'||g[0]=='y'){
                y=1;
                if(y1==-1)matris[0][1]=1;
                 if(0<=y1){
                    matris[0][1]=0;
                    matris[0][9]+=y1;
                }
            }
            if(o[1]=='y'||o[0]=='y'){
                y=0;
                if(y1==-1)matris[0][1]=-1;
                 if(0<=y1){
                    matris[0][1]=0;
                    matris[0][9]=matris[0][9]-y1;
                }
            }
        }
         if(dest[i]=='z'){
            if(g[1]=='z'||g[0]=='z'){
                z=1;
                if(z1==-1)matris[0][2]=1;
                 if(0<=z1){
                    matris[0][2]=0;
                    matris[0][9]+=z1;
                }
            }
            if(o[1]=='z'||o[0]=='z'){
                z=0;
                if(z1==-1)matris[0][2]=-1;
                 if(0<=z1){
                    matris[0][2]=0;
                    matris[0][9]-=z1;
                }
            }
        }
         if(dest[i]=='t'){
            if(g[1]=='t'||g[0]=='t'){
                t=1;
                if(t1==-1)matris[0][3]=1;
                 if(0<=t1){
                    matris[0][3]=0;
                    matris[0][9]+=t1;
                }
            }
            if(o[1]=='t'||o[0]=='t'){
                t=0;
                if(t1==-1)matris[0][3]=-1;
                 if(0<=t1){
                    matris[0][3]=0;
                    matris[0][9]-=t1;
                }

            }
        }
            if(x==1){
                if(x1==-1){
                    matris[0][0]=1;
                }
                if(x1!=-1){
                    matris[0][0]=0;
                    matris[0][9]+=x1;
                }
            }
    }



}
void Map_1(){
al_init_font_addon();
al_init_ttf_addon();
ALLEGRO_FONT *font = al_load_ttf_font("Oswald-Bold.ttf",50,0 );
                al_clear_to_color(al_map_rgb(255,255,255));
                al_draw_circle(500,550,200,al_map_rgb(0,0,0),100);
                al_draw_line(200,500,200,600,al_map_rgb(0,0,0),200);
                al_draw_line(800,500,800,600,al_map_rgb(0,0,0),200);
                al_draw_line(445,250,555,250,al_map_rgb(0,0,0),200);
                al_draw_line(445,850,555,850,al_map_rgb(0,0,0),200);

                al_draw_text(font, al_map_rgb(255,0,0), 400/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "t");
                al_draw_text(font, al_map_rgb(255,0,0), 700/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "a");
                al_draw_text(font, al_map_rgb(255,0,0), 700/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "c");
                al_draw_text(font, al_map_rgb(255,0,0), 1000/2, (3250/4),ALLEGRO_ALIGN_CENTRE, "z");
                al_draw_text(font, al_map_rgb(255,0,0), 1000/2, (880/4),ALLEGRO_ALIGN_CENTRE, "x");
                al_draw_text(font, al_map_rgb(255,0,0), 1600/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "y");
                al_draw_text(font, al_map_rgb(255,0,0), 1300/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "b");
                al_draw_text(font, al_map_rgb(255,0,0), 1300/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "d");
                al_flip_display();
                al_rest(0);

                char in[2],out[2];
                char a[2],b[2],c[2],d[2];
                int x1=-1,y1=-1,z1=-1,t1=-1,a1=-1,b1=-1,c1=-1,d1=-1;
                int ctrl_1=1,i=0,sayac=0;

               while(i<2){
                printf("Giris yolu icin x,y,z,t yollarindan birini seciniz: ");
                scanf("%s",&in[i]);
                fflush(stdin);
                if(in[i]!='x'&& in[i]!='y' && in[i]!='z' && in[i]!='t'){
                    ctrl_1=0;
                    while(ctrl_1==0){
                          printf("Yanlis deger girdiniz lutfen x,y,z,t yollarindan birini seciniz: ");
                          scanf("%s",&in[i]);
                          fflush(stdin);
                          if(in[i]=='x'||in[i]=='y'||in[i]=='z'||in[i]=='t'){
                            ctrl_1=1;
                          }
                    }
                }
                i++;
        }

        if(in[1]==in[0]){
            printf("Girdiginiz bir degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz:");
            scanf("%s",&in[1]);
            fflush(stdin);
            if(in[i]!='x'&& in[i]!='y' && in[i]!='z' && in[i]!='t'&&in[1]==in[0]){
                ctrl_1=0;
                while(ctrl_1==0){
                    printf("Girdiginiz bir degeri tekrar girdiniz veya yanlis bir deger girdiniz. Lutfen kontrol edip tekrar deneyiniz:");
                    scanf("%s",&in[1]);
                    fflush(stdin);
                    if(in[1]!=in[0]){
                            if(in[1]=='x'||in[1]=='y'||in[1]=='z'||in[1]=='t')ctrl_1=1;
                }
            }
        }

    }

    int j=0;
    char p[4]={'x','y','z','t'};
    for(j=0;j<2;j++){
        for(i=0;i<4;i++){
            if(p[i]!=in[0]&&p[i]!=in[1]){
                out[j]=p[i];
                j++;
            }
        }
    }
    if(in[1]=='t'||in[0]=='t'){
        al_draw_triangle(130,426,130,428,131,427,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(130,426,130,428,131,427,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(130,426,130,428,131,427,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(130,426,130,428,131,427,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(130,426,130,428,131,427,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='t'||out[0]=='t'){
        al_draw_triangle(130,427,131,428,131,426,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(130,427,131,428,131,426,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(130,427,131,428,131,426,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(130,427,131,428,131,426,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(130,427,131,428,131,426,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='y'||out[0]=='y'){
        al_draw_triangle(830,426,830,428,831,427,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(830,426,830,428,831,427,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(830,426,830,428,831,427,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(830,426,830,428,831,427,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(830,426,830,428,831,427,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }

       if(in[1]=='y'||in[0]=='y'){
        al_draw_triangle(830,427,831,428,831,426,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(830,427,831,428,831,426,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(830,427,831,428,831,426,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(830,427,831,428,831,426,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(830,427,831,428,831,426,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='x'||out[0]=='x'){
        al_draw_triangle(595,141,597,141,596,140,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(595,141,597,141,596,140,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(595,141,597,141,596,140,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(595,141,597,141,596,140,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(595,141,597,141,596,140,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
    if(in[1]=='x'||in[0]=='x'){
        al_draw_triangle(596,141,595,140,597,140,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(596,141,595,140,597,140,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(596,141,595,140,597,140,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(596,141,595,140,597,140,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(596,141,595,140,597,140,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(in[1]=='z'||in[0]=='z'){
        al_draw_triangle(595,941,597,941,596,940,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(595,941,597,941,596,940,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(595,941,597,941,596,940,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(595,941,597,941,596,940,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(595,941,597,941,596,940,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
    if(out[1]=='z'||out[0]=='z'){
        al_draw_triangle(596,941,595,940,597,940,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(596,941,595,940,597,940,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(596,941,595,940,597,940,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(596,941,595,940,597,940,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(596,941,595,940,597,940,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        char road;
        printf("%c ve %c yollari otomatik olarak cikis atanmistir.\n",out[0],out[1]);
        i=0;

        while(i<4){
        printf("Yon bilgisi girmek icin a,b,c,d caddelerinden birini seciniz: ");
        scanf("%c",&road);
        fflush(stdin);
        if(road!='a'&&road!='b'&&road!='c'&&road!='d'){
            while(sayac==0){
                printf("Yanlis deger girdiniz.Lutfen sadece a,b,c,d caddelerinden birini seciniz: ");
                scanf("%c",&road);
                fflush(stdin);
                if(road=='a'||road=='b'||road=='c'||road=='d'){
                sayac=1;
                }
            }
        }
        if(road=='a'){
        fflush(stdin);
        printf("Baslangic noktasi(x,t): ");
        scanf("%c",&a[0]);
        fflush(stdin);
        if(a[0]!='x'&&a[0]!='t'){
            sayac=0;
        while(sayac==0){
            printf("a caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece x,t yollarindan birini seciniz: ");
            scanf("%c",&a[0]);
            fflush(stdin);
            if(a[0]=='x'||a[0]=='t'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&a[1]);
        fflush(stdin);
        if(a[1]==a[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
        if(a[1]!='x'||a[1]!='t'||a[1]==a[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
            if(a[1]!=a[0]){
                if(a[1]=='x'||a[1]=='t'){
                sayac=1;
               }
             }
           }
         }
        }
        if(a[1]!='x'&&a[1]!='t'){
            sayac=0;
        while(sayac==0){
            printf("a caddesi icin yanlis yon sectiniz.Lutfen sadece x,t yollarindan birini seciniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
            if(a[1]!=a[0]){
            if(a[1]=='x'||a[1]=='t'){
                sayac=1;
            }
            }
        }
        }
        }
        if(road=='b'){
        fflush(stdin);
        printf("Baslangic noktasi(x,y): ");
        scanf("%c",&b[0]);
        fflush(stdin);
        if(b[0]!='x'&&b[0]!='y'){
            sayac=0;
        while(sayac==0){
            printf("b caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece x,y yollarindan birini seciniz: ");
            scanf("%c",&b[0]);
            fflush(stdin);
            if(b[0]=='x'||b[0]=='y'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&b[1]);
        fflush(stdin);
        if(b[1]==b[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
        if(b[1]!='x'||b[1]!='y'||b[1]==b[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
            if(b[1]!=b[0]){
                if(b[1]=='x'||b[1]=='y'){
                sayac=1;
                }
            }
        }
        }
        }
        if(b[1]!='x'&&b[1]!='y'){
            sayac=0;
        while(sayac==0){
            printf("b caddesi icin yanlis yon sectiniz.Lutfen sadece x,y yollarindan birini seciniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
            if(b[1]!=b[0]){
            if(b[1]=='x'||b[1]=='y'){
                sayac=1;
            }
            }
        }
        }
        }

        if(road=='c'){
        fflush(stdin);
        printf("Baslangic noktasi(z,t): ");
        scanf("%c",&c[0]);
        fflush(stdin);
        if(c[0]!='z'&&c[0]!='t'){
            sayac=0;
        while(sayac==0){
            printf("c caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece z,t yollarindan birini seciniz: ");
            scanf("%c",&c[0]);
            fflush(stdin);
            if(c[0]=='z'||c[0]=='t'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&c[1]);
        fflush(stdin);
        if(c[1]==c[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
        if(c[1]!='z'||c[1]!='t'||c[1]==c[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
            if(c[1]!=c[0]){
                if(c[1]=='z'||c[1]=='t'){
                sayac=1;
                }
            }
        }
        }
        }
        if(c[1]!='z'&&c[1]!='t'){
            sayac=0;
        while(sayac==0){
            printf("c caddesi icin yanlis yon sectiniz.Lutfen sadece z,t yollarindan birini seciniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
            if(c[1]!=c[0]){
            if(c[1]=='z'||c[1]=='t'){
                sayac=1;
            }
            }
        }
        }
        }

        if(road=='d'){
        fflush(stdin);
        printf("Baslangic noktasi(z,y): ");
        scanf("%c",&d[0]);
        fflush(stdin);
        if(d[0]!='z'&&d[0]!='y'){
            sayac=0;
        while(sayac==0){
            printf("d caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&d[0]);
            fflush(stdin);
            if(d[0]=='z'||d[0]=='y'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&d[1]);
        fflush(stdin);
        if(d[1]==d[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
        if(d[1]!='z'||d[1]!='y'||d[1]==d[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
            if(d[1]!=d[0]){
                if(d[1]=='z'||d[1]=='y'){
                sayac=1;
                }
            }
        }
        }
        }
        if(d[1]!='z'&&d[1]!='y'){
            sayac=0;
        while(sayac==0){
            printf("d caddesi icin yanlis yon sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
            if(d[1]!=d[0]){
            if(d[1]=='z'||d[1]=='y'){
                sayac=1;
            }
            }
        }
        }
        }
        i++;
        }
        if(a[0]=='t'){
            if(a[1]=='x')a2=0;
        }
        if(b[0]=='x'){
            if(b[1]=='y')b2=0;
        }
        if(c[0]=='z'){
           if(c[1]=='t')c2=0;
        }
        if(d[0]=='y'){
           if(d[1]=='z')d2=0;
        }
        in_out(in,out);

        i=0;
        int ctrl_2;
        char density;
        printf("Yollar icin deger girmek ister misiniz?Deger girmek istiyorsanyz 1' girmek istemiyorsaniz 0' basiniz. ");
        scanf("%d",&ctrl_2);
        fflush(stdin);
        while(ctrl_2==1){
        fflush(stdin);
        printf("Lutfen arac yogunlugunu girmek istediginiz yolu seciniz: ");
        scanf("%c",&density);
        fflush(stdin);
        if(density!='x'&&density!='y'&&density!='z'&&density!='t'&&density!='a'&&density!='b'&&density!='c'&&density!='d' ){
            ctrl_1=0;
            while(ctrl_1==0){
                  printf("Yanlis deger girdiniz.Lutfen x,y,z,t,a,b,c,d yollarindan birini seciniz: ");
                  scanf("%c",&density);
                  fflush(stdin);
                  if(density=='x'||density=='y'||density=='z'||density=='t'||density=='a'||density=='b'||density=='c'||density=='d' ){
                     ctrl_1=1;
                  }
            }
        }
        if(density=='a'){
            printf("Lutfen a yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&a1);
            fflush(stdin);
            if(a1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&a1);
                if(a1>=0){
                ctrl_1=1;
                }
            }
            }
        }

        if(density=='b'){
            printf("Lutfen b yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&b1);

            fflush(stdin);
            if(b1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&b1);
                if(b1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='c'){
            printf("Lutfen c yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&c1);
            fflush(stdin);
            if(c1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&c1);
                if(c1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='d'){
            printf("Lutfen d yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&d1);
            fflush(stdin);
            if(d1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&d1);
                if(d1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='x'){
            printf("Lutfen x yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&x1);
            fflush(stdin);
            if(x1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&x1);
                if(x1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='y'){
            printf("Lutfen y yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&y1);
            fflush(stdin);
            if(y1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&y1);
                if(y1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='z'){
            printf("Lutfen z yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&z1);
            fflush(stdin);
            if(z1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&z1);
                if(z1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='t'){
            printf("Lutfen t yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&t1);
            fflush(stdin);
            if(t1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&t1);
                if(t1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        printf("Başka bir yol icin deger girmek ister misiniz.Girek istiyorsaniz 1, girmek istemiyorsaniz 0'a basiniz.");
        scanf("%d",&ctrl_2);
        }
         in_out(in,out);
         atama3(x1,x,y1,y,z1,z,t1,t);
         atama(0,x1,x,4,a1,a2,5,b1,b2,1);
         atama(1,y1,y,5,b1,b2,7,d1,d2,2);
         atama(2,z1,z,7,d1,d2,6,c1,c2,3);
         atama(3,t1,t,6,c1,c2,4,a1,a2,4);
         GaussJordan(1);
        }
void Map_2(){
al_init_font_addon();
al_init_ttf_addon();
ALLEGRO_FONT *font = al_load_ttf_font("Oswald-Bold.ttf",50,0 );
                al_clear_to_color(al_map_rgb(255,255,255));
                al_draw_circle(1500,550,200,al_map_rgb(0,0,0),100);
                al_draw_line(1200,500,1200,600,al_map_rgb(0,0,0),200);
                al_draw_line(1800,500,1800,600,al_map_rgb(0,0,0),200);
                al_draw_line(1445,250,1555,250,al_map_rgb(0,0,0),200);
                al_draw_line(1445,850,1555,850,al_map_rgb(0,0,0),200);
                al_draw_line(1500,500,1500,600,al_map_rgb(0,0,0),400);

                al_draw_text(font, al_map_rgb(255,0,0), 2400/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "t");
                al_draw_text(font, al_map_rgb(255,0,0), 2700/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "a");
                al_draw_text(font, al_map_rgb(255,0,0), 2700/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "c");
                al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (3250/4),ALLEGRO_ALIGN_CENTRE, "z");
                al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (880/4),ALLEGRO_ALIGN_CENTRE, "x");
                al_draw_text(font, al_map_rgb(255,0,0), 3600/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "y");
                al_draw_text(font, al_map_rgb(255,0,0), 3300/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "b");
                al_draw_text(font, al_map_rgb(255,0,0), 3300/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "d");
                al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "e");

                al_flip_display();
                al_rest(0);

                char in[2],out[2];
                char a[2],b[2],c[2],d[2],e[2];
                int x1=-1,y1=-1,z1=-1,t1=-1,a1=-1,b1=-1,c1=-1,d1=-1,e1=-1;
                int ctrl_1=1,i=0,sayac=0;
                while(i<2){
                printf("Giris yolu icin x,y,z,t yollarindan birini seciniz: ");
                scanf("%s",&in[i]);
                fflush(stdin);
                if(in[i]!='x'&& in[i]!='y' && in[i]!='z' && in[i]!='t'){
                    ctrl_1=0;
                    while(ctrl_1==0){
                          printf("Yanlis deger girdiniz lutfen x,y,z,t yollarindan birini seciniz: ");
                          scanf("%s",&in[i]);
                          fflush(stdin);
                          if(in[i]=='x'||in[i]=='y'||in[i]=='z'||in[i]=='t'){
                            ctrl_1=1;
                          }
                    }

                }
                i++;
        }
        if(in[1]==in[0]){
            printf("Girdiginiz bir degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%s",&in[1]);
            fflush(stdin);
            if(in[i]!='x'&& in[i]!='y' && in[i]!='z' && in[i]!='t'&&in[1]==in[0]){
                ctrl_1=0;
                while(ctrl_1==0){
                    printf("Girdiginiz bir degeri tekrar girdiniz veya yanlis bir deger girdiniz. Lutfen kontrol edip tekrar deneyiniz: ");
                    scanf("%s",&in[1]);
                    fflush(stdin);
                    if(in[1]!=in[0]){
                    if(in[1]=='x'||in[1]=='y'||in[1]=='z'||in[1]=='t')ctrl_1=1;
                }
            }
        }
    }
    int j=0;
    char p[5]={'x','y','z','t','e'};
    for(j=0;j<2;j++){
        for(i=0;i<4;i++){
            if(p[i]!=in[0]&&p[i]!=in[1]){
                out[j]=p[i];
                j++;
            }
        }
    }
        if(in[1]=='t'||in[0]=='t'){
        al_draw_triangle(1170,426,1170,428,1171,427,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1170,426,1170,428,1171,427,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1170,426,1170,428,1171,427,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1170,426,1170,428,1171,427,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1170,426,1170,428,1171,427,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='t'||out[0]=='t'){
        al_draw_triangle(1170,427,1171,428,1171,426,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1170,427,1171,428,1171,426,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1170,427,1171,428,1171,426,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1170,427,1171,428,1171,426,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1170,427,1171,428,1171,426,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='y'||out[0]=='y'){
        al_draw_triangle(1870,426,1870,428,1871,427,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1870,426,1870,428,1871,427,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1870,426,1870,428,1871,427,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1870,426,1870,428,1871,427,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1870,426,1870,428,1871,427,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }

       if(in[1]=='y'||in[0]=='y'){
        al_draw_triangle(1870,427,1871,428,1871,426,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1870,427,1871,428,1871,426,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1870,427,1871,428,1871,426,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1870,427,1871,428,1871,426,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1870,427,1871,428,1871,426,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(out[1]=='x'||out[0]=='x'){
        al_draw_triangle(1635,141,1637,141,1636,140,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1635,141,1637,141,1636,140,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1635,141,1637,141,1636,140,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1635,141,1637,141,1636,140,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1635,141,1637,141,1636,140,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
    if(in[1]=='x'||in[0]=='x'){
        al_draw_triangle(1636,141,1635,140,1637,140,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1636,141,1635,140,1637,140,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1636,141,1635,140,1637,140,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1636,141,1635,140,1637,140,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1636,141,1635,140,1637,140,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
        if(in[1]=='z'||in[0]=='z'){
        al_draw_triangle(1635,941,1637,941,1636,940,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1635,941,1637,941,1636,940,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1635,941,1637,941,1636,940,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1635,941,1637,941,1636,940,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1635,941,1637,941,1636,940,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
    if(out[1]=='z'||out[0]=='z'){
        al_draw_triangle(1636,941,1635,940,1637,940,al_map_rgb(80,80,80),25);
        al_rest(0);
        al_flip_display();
         al_draw_triangle(1636,941,1635,940,1637,940,al_map_rgb(255,255,255),25);
        al_rest(0.25);
        al_flip_display();
         al_draw_triangle(1636,941,1635,940,1637,940,al_map_rgb(80,80,80),25);
        al_rest(0.5);
        al_flip_display();
         al_draw_triangle(1636,941,1635,940,1637,940,al_map_rgb(255,255,255),25);
        al_rest(0.75);
        al_flip_display();
         al_draw_triangle(1636,941,1635,940,1637,940,al_map_rgb(80,80,80),25);
        al_rest(1);
        al_flip_display();
    }
    char road;
        printf("%c ve %c yollari otomatik olarak cikis atanmistir.\n",out[0],out[1]);
        i=0;
        while(i<5){
        printf("Yon bilgisi girmek icin a,b,c,d,e caddelerinden birini seciniz: ");
        scanf("%c",&road);
        fflush(stdin);
        if(road!='a'&&road!='b'&&road!='c'&&road!='d'&&road!='e'){
            while(sayac==0){
                printf("Yanlis deger girdiniz.Lutfen sadece a,b,c,d,e caddelerinden birini seciniz: ");
                scanf("%c",&road);
                fflush(stdin);
                if(road=='a'||road=='b'||road=='c'||road=='d'||road=='e'){
                sayac=1;
                }
            }
        }
        if(road=='a'){
        fflush(stdin);
        printf("Baslangic noktasi(x,t): ");
        scanf("%c",&a[0]);
        fflush(stdin);
        if(a[0]!='x'&&a[0]!='t'){
            sayac=0;
        while(sayac==0){
            printf("a caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece x,t yollarindan birini seciniz: ");
            scanf("%c",&a[0]);
            fflush(stdin);
            if(a[0]=='x'||a[0]=='t'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&a[1]);
        fflush(stdin);
        if(a[1]==a[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
        if(a[1]!='x'||a[1]!='t'||a[1]==a[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
            if(a[1]!=a[0]){
                if(a[1]=='x'||a[1]=='t'){
                sayac=1;
                }
            }
        }
        }
        }
        if(a[1]!='x'&&a[1]!='t'){
            sayac=0;
        while(sayac==0){
            printf("a caddesi icin yanlis yon sectiniz.Lutfen sadece x,t yollarindan birini seciniz: ");
            scanf("%c",&a[1]);
            fflush(stdin);
            if(a[1]!=a[0]){
            if(a[1]=='x'||a[1]=='t'){
                sayac=1;
            }
            }
        }
        }
        }
        if(road=='b'){
        fflush(stdin);
        printf("Baslangic noktasi(x,y): ");
        scanf("%c",&b[0]);
        fflush(stdin);
        if(b[0]!='x'&&b[0]!='y'){
            sayac=0;
        while(sayac==0){
            printf("b caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece x,y yollarindan birini seciniz: ");
            scanf("%c",&b[0]);
            fflush(stdin);
            if(b[0]=='x'||b[0]=='y'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&b[1]);
        fflush(stdin);
        if(b[1]==b[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
        if(b[1]!='x'||b[1]!='y'||b[1]==b[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
            if(b[1]!=b[0]){
                if(b[1]=='x'||b[1]=='y'){
                sayac=1;
                }
            }
        }
        }
        }
        if(b[1]!='x'&&b[1]!='y'){
            sayac=0;
        while(sayac==0){
            printf("b caddesi icin yanlis yon sectiniz.Lutfen sadece x,y yollarindan birini seciniz: ");
            scanf("%c",&b[1]);
            fflush(stdin);
            if(b[1]!=b[0]){
            if(b[1]=='x'||b[1]=='y'){
                sayac=1;
            }
            }
        }
        }
        }
        if(road=='c'){
        fflush(stdin);
        printf("Baslangic noktasi(z,t): ");
        scanf("%c",&c[0]);
        fflush(stdin);
        if(c[0]!='z'&&c[0]!='t'){
            sayac=0;
        while(sayac==0){
            printf("c caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece z,t yollarindan birini seciniz: ");
            scanf("%c",&c[0]);
            fflush(stdin);
            if(c[0]=='z'||c[0]=='t'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&c[1]);
        fflush(stdin);
        if(c[1]==c[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
        if(c[1]!='z'||c[1]!='t'||c[1]==c[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
            if(c[1]!=c[0]){
                if(c[1]=='z'||c[1]=='t'){
                sayac=1;
                }
            }
        }
        }
        }
        if(c[1]!='z'&&c[1]!='t'){
            sayac=0;
        while(sayac==0){
            printf("c caddesi icin yanlis yon sectiniz.Lutfen sadece z,t yollarindan birini seciniz: ");
            scanf("%c",&c[1]);
            fflush(stdin);
            if(c[1]!=c[0]){
            if(c[1]=='z'||c[1]=='t'){
                sayac=1;
            }
            }
        }
        }
        }

        if(road=='d'){
        fflush(stdin);
        printf("Baslangic noktasi(z,y): ");
        scanf("%c",&d[0]);
        fflush(stdin);
        if(d[0]!='z'&&d[0]!='y'){
            sayac=0;
        while(sayac==0){
            printf("d caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&d[0]);
            fflush(stdin);
            if(d[0]=='z'||d[0]=='y'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&d[1]);
        fflush(stdin);
        if(d[1]==d[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
        if(d[1]!='z'||d[1]!='y'||d[1]==d[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
            if(d[1]!=d[0]){
                if(d[1]=='z'||d[1]=='y'){
                sayac=1;
                }
            }
        }
        }
        }
        if(d[1]!='z'&&d[1]!='y'){
            sayac=0;
        while(sayac==0){
            printf("d caddesi icin yanlis yon sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&d[1]);
            fflush(stdin);
            if(d[1]!=d[0]){
            if(d[1]=='z'||d[1]=='y'){
                sayac=1;
            }
            }
        }
        }
        }
        if(road=='e'){
        fflush(stdin);
        printf("Baslangic noktasi(t,y): ");
        scanf("%c",&e[0]);
        fflush(stdin);
        if(e[0]!='t'&&e[0]!='y'){
            sayac=0;
        while(sayac==0){
            printf("e caddesi icin yanlis baslangic noktasi sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&e[0]);
            fflush(stdin);
            if(e[0]=='t'||e[0]=='y'){
                sayac=1;
            }
        }
        }
        printf("Yonu:");
        scanf("%c",&e[1]);
        fflush(stdin);
        if(e[1]==e[0]){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&e[1]);
            fflush(stdin);
        if(e[1]!='t'||e[1]!='y'||e[1]==e[0]){
            sayac=0;
        while(sayac==0){
            printf("Baslangic icin girdiginiz degeri tekrar girdiniz veya yanlis bir deger girdiniz.Lutfen kontrol edip tekrar deneyiniz: ");
            scanf("%c",&e[1]);
            fflush(stdin);
            if(e[1]!=e[0]){
                if(e[1]=='t'||e[1]=='y'){
                sayac=1;
                }
            }
        }
        }
        }
        if(e[1]!='t'&&e[1]!='y'){
            sayac=0;
        while(sayac==0){
            printf("e caddesi icin yanlis yon sectiniz.Lutfen sadece z,y yollarindan birini seciniz: ");
            scanf("%c",&e[1]);
            fflush(stdin);
            if(e[1]!=e[0]){
            if(e[1]=='t'||e[1]=='y'){
                sayac=1;
            }
            }
        }
        }
        }
        i++;
        }
        if(a[0]=='t'){
            if(a[1]=='x')a2=0;
        }
        if(b[0]=='x'){
            if(b[1]=='y')b2=0;
        }
        if(c[0]=='z'){
           if(c[1]=='t')c2=0;
        }
        if(d[0]=='y'){
           if(d[1]=='z')d2=0;
        }
         if(e[0]=='t'){
           if(e[1]=='y')e2=0;
        }
        in_out(in,out);
        i=0;
        int ctrl_2;
        char density;
        printf("Yollar icin deger girmek ister misiniz?Deger girmek istiyorsanyz 1' girmek istemiyorsaniz 0' basiniz. ");
        scanf("%d",&ctrl_2);
        fflush(stdin);
        while(ctrl_2==1){
        fflush(stdin);
        printf("Lutfen arac yogunlugunu girmek istediginiz yolu seciniz: ");
        scanf("%c",&density);
        fflush(stdin);
        if(density!='x'&&density!='y'&&density!='z'&&density!='t'&&density!='a'&&density!='b'&&density!='c'&&density!='d'&&density!='e'){
            ctrl_1=0;
            while(ctrl_1==0){
                  printf("Yanlis deger girdiniz.Lutfen x,y,z,t,a,b,c,d,e yollarindan birini seciniz: ");
                  scanf("%c",&density);
                  fflush(stdin);
                  if(density=='x'||density=='y'||density=='z'||density=='t'||density=='a'||density=='b'||density=='c'||density=='d'||density=='e' ){
                     ctrl_1=1;
                  }
            }
        }
        if(density=='a'){
            printf("Lutfen a yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&a1);
            fflush(stdin);
            if(a1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&a1);
                if(a1>=0){
                ctrl_1=1;
                }
            }
            }
        }

        if(density=='b'){
            printf("Lutfen b yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&b1);

            fflush(stdin);
            if(b1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&b1);
                if(b1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='c'){
            printf("Lutfen c yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&c1);
            fflush(stdin);
            if(c1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&c1);
                if(c1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='d'){
            printf("Lutfen d yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&d1);
            fflush(stdin);
            if(d1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&d1);
                if(d1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='x'){
            printf("Lutfen x yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&x1);
            fflush(stdin);
            if(x1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&x1);
                if(x1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='y'){
            printf("Lutfen y yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&y1);
            fflush(stdin);
            if(y1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&y1);
                if(y1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='z'){
            printf("Lutfen z yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&z1);
            fflush(stdin);
            if(z1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&z1);
                if(z1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        if(density=='t'){
            printf("Lutfen t yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&t1);
            fflush(stdin);
            if(t1<0){
            ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&t1);
                if(t1>=0){
                ctrl_1=1;
                }
            }
            }
        }
         if(density=='e'){
            printf("Lutfen e yolu icin arac yogunlugunu giriniz: ");
            scanf("%d",&e1);
            fflush(stdin);
            if(e1<0){
                    ctrl_1=0;
            while(ctrl_1==0){
                printf("0'dan kucuk deger girdiniz.Lutfen 0 veya 0'dan buyuk bir deger giriniz: ");
                scanf("%d",&e1);
                if(e1>=0){
                ctrl_1=1;
                }
            }
            }
        }
        printf("Başka bir yol icin deger girmek ister misiniz.Girek istiyorsaniz 1, girmek istemiyorsaniz 0'a basiniz.");
        scanf("%d",&ctrl_2);
        }
        in_out(in,out);
        atama3(x1,x,y1,y,z1,z,t1,t);
        atama(0,x1,x,4,a1,a2,5,b1,b2,1);
        atama2(1,y1,y,5,b1,b2,7,d1,d2,8,e1,e2,2);
        atama1(3,t1,t,6,c1,c2,4,a1,a2,8,e1,e2,4);
        atama(2,z1,z,7,d1,d2,6,c1,c2,3);
        GaussJordan(2);
    }
int main(){
ALLEGRO_DISPLAY  *display = NULL;
al_init();
al_init_primitives_addon();
al_init_font_addon();
al_init_ttf_addon();

    display = al_create_display(1980, 1080);

    al_clear_to_color(al_map_rgb(250,250,250));

    al_draw_circle(500,550,200,al_map_rgb(0,0,0),100);
    al_draw_line(200,500,200,600,al_map_rgb(0,0,0),200);
    al_draw_line(800,500,800,600,al_map_rgb(0,0,0),200);
    al_draw_line(445,250,555,250,al_map_rgb(0,0,0),200);
    al_draw_line(445,850,555,850,al_map_rgb(0,0,0),200);

    al_draw_circle(1500,550,200,al_map_rgb(0,0,0),100);
    al_draw_line(1200,500,1200,600,al_map_rgb(0,0,0),200);
    al_draw_line(1800,500,1800,600,al_map_rgb(0,0,0),200);
    al_draw_line(1445,250,1555,250,al_map_rgb(0,0,0),200);
    al_draw_line(1445,850,1555,850,al_map_rgb(0,0,0),200);
    al_draw_line(1500,500,1500,600,al_map_rgb(0,0,0),400);



    ALLEGRO_FONT *font = al_load_ttf_font("Oswald-Bold.ttf",50,0 );

    al_draw_text(font, al_map_rgb(255,0,0), 400/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "t");
    al_draw_text(font, al_map_rgb(255,0,0), 700/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "a");
    al_draw_text(font, al_map_rgb(255,0,0), 700/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "c");
    al_draw_text(font, al_map_rgb(255,0,0), 1000/2, (3250/4),ALLEGRO_ALIGN_CENTRE, "z");
    al_draw_text(font, al_map_rgb(255,0,0), 1000/2, (880/4),ALLEGRO_ALIGN_CENTRE, "x");
    al_draw_text(font, al_map_rgb(255,0,0), 1600/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "y");
    al_draw_text(font, al_map_rgb(255,0,0), 1300/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "b");
    al_draw_text(font, al_map_rgb(255,0,0), 1300/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "d");



    al_draw_text(font, al_map_rgb(255,0,0), 2400/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "t");
    al_draw_text(font, al_map_rgb(255,0,0), 2700/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "a");
    al_draw_text(font, al_map_rgb(255,0,0), 2700/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "c");
    al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (3250/4),ALLEGRO_ALIGN_CENTRE, "z");
    al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (880/4),ALLEGRO_ALIGN_CENTRE, "x");
    al_draw_text(font, al_map_rgb(255,0,0), 3600/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "y");
    al_draw_text(font, al_map_rgb(255,0,0), 3300/2, (1500/4),ALLEGRO_ALIGN_CENTRE, "b");
    al_draw_text(font, al_map_rgb(255,0,0), 3300/2, (2570/4),ALLEGRO_ALIGN_CENTRE, "d");
    al_draw_text(font, al_map_rgb(255,0,0), 3000/2, (2070/4),ALLEGRO_ALIGN_CENTRE, "e");
    al_flip_display();

    printf("soldaki harita icin 1'e basiniz,sagdaki harita icin 2'e basiniz: ");
    int choose;
    int ctrl=0;
    scanf("%d",&choose);
    fflush(stdin);
    while(ctrl==0){
    if(choose==1){
    Map_1();
    ctrl=1;
    }
    if(choose==2){
    Map_2();
    ctrl=1;
    }
    if(choose!=1&&choose!=2){
        printf("Yanlis bir deger girdiniz lutfen kontrol edip tekrar deger giriniz: ");
        scanf("%d",&choose);
        fflush(stdin);
        if(choose==1&&choose==2) ctrl=1;
    }
    }



    al_flip_display();

    al_set_app_name("The Traffic Flow");
    while(1){}
    al_destroy_display(display);
    return 0;
}
