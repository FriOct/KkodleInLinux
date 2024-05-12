#include <ncursesw/curses.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include <stdlib.h>
#include "drawlib.h"


//ㄱ
void printR(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    refresh();
}

//ㄴ
void printS(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}

//ㄷ
void printE(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full
    ,Full,Full,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}

//ㄹ
void printF(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    
    refresh();
}

//ㅁ
void printA(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full
    ,Full,Full,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full
    ,Full,Full,Full,Full,Full,LeftHalf);
    
    refresh();
}

//ㅂ
void printQ(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Quadrantllr,LowerHalf,LowerHalf,LowerHalf,LowerHalf
    ,LowerHalf,Quadrantrlr,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Quadrantlrl,UpperHalf,UpperHalf,UpperHalf,UpperHalf
    ,UpperHalf,Quadrantlrr,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    
    refresh();
}

//ㅅ
void printT(int x, int y){
    move(x+1,y+1);
    printw("    %s%s%s",Quadrantlr,Full,Quadrantll);
    move(x+2,y+1);
    printw("   %s%s%s%s%s",Quadrantlr,Full,UpperHalf,Full,Quadrantll);
    move(x+3,y+1);
    printw("  %s%s%s %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    move(x+4,y+1);
    printw(" %s%s%s   %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll );
    move(x+5,y+1);
    printw("%s%s%s     %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    refresh();
}

//ㅇ
void printD(int x, int y){
    move(x+1,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",Quadrantlr,Quadrantrlr,Full,Full,Full,Full,Full,Quadrantllr,Quadrantll);
    move(x+2,y+1);
    printw("%s%s%s%s%s %s%s%s%s%s",RightHalf,Full,Full,Quadrantlrl,Quadrantul,Quadrantur,Quadrantlrr,Full,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s%s%s %s%s%s%s%s",RightHalf,Full,Full,Quadrantllr,Quadrantll,Quadrantlr,Quadrantrlr,Full,Full,LeftHalf);
    move(x+5,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",Quadrantur,Quadrantlrr,Full,Full,Full,Full,Full,Quadrantlrl,Quadrantul);

    refresh();
}

//ㅈ
void printW(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantlr,LowerHalf,LowerHalf
    ,LowerHalf,LowerHalf,LowerHalf,LowerHalf,LowerHalf
    ,LowerHalf,LowerHalf,Quadrantll);
    move(x+2,y+1);
    printw("   %s%s%s%s%s",Quadrantlr,Full,UpperHalf,Full,Quadrantll);
    move(x+3,y+1);
    printw("  %s%s%s %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    move(x+4,y+1);
    printw(" %s%s%s   %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll );
    move(x+5,y+1);
    printw("%s%s%s     %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    
    refresh();
}

//ㅊ
void printC(int x, int y){
    move(x+1,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantur,UpperHalf
    ,UpperHalf,Quadrantlrr,Full,UpperHalf,Full,Quadrantlrl
    ,UpperHalf,UpperHalf,Quadrantul);
    move(x+3,y+1);
    printw("  %s%s%s %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    move(x+4,y+1);
    printw(" %s%s%s   %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll );
    move(x+5,y+1);
    printw("%s%s%s     %s%s%s",Quadrantlr,Full,Quadrantul,Quadrantur,Full,Quadrantll);
    refresh();
}

//ㅋ
void printZ(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantlr,LowerHalf,LowerHalf,LowerHalf,LowerHalf,LowerHalf,LowerHalf
    ,LowerHalf,Quadrantrlr,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantur,UpperHalf,UpperHalf,UpperHalf,UpperHalf,UpperHalf,UpperHalf
    ,UpperHalf,Quadrantlrr,Full,LeftHalf);
    move(x+5,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    refresh();
}

//ㅌ
void printX(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}

//ㅍ
void printV(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+2,y+1);
    printw("  %s%s   %s%s",Full,Full,Full,Full);
    move(x+3,y+1);
    printw("  %s%s   %s%s",Full,Full,Full,Full);
    move(x+4,y+1);
    printw("  %s%s   %s%s",Full,Full,Full,Full);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);

    refresh();
}

//ㅎ
void printG(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantlr,LowerHalf
    ,LowerHalf,LowerHalf,Full,Full,Full,LowerHalf
    ,LowerHalf,LowerHalf,Quadrantll);
    move(x+2,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",Quadrantur,UpperHalf,UpperHalf
    ,UpperHalf,UpperHalf,UpperHalf,UpperHalf,UpperHalf,UpperHalf
    ,UpperHalf,Quadrantul);
    move(x+3,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",Quadrantlr,Quadrantrlr,Full,Full,Full,Full,Full,Quadrantllr,Quadrantll);
    move(x+4,y+1);
    printw("%s%s%s     %s%s%s",RightHalf,Full,Full,Full,Full,LeftHalf);
    move(x+5,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",Quadrantur,Quadrantlrr,Full,Full,Full,Full,Full,Quadrantlrl,Quadrantul);
    
    refresh();
}


//ㅏ
void printK(int x, int y){

    move(x+1,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    refresh();

}
//ㅓ
void printJ(int x, int y){

    move(x+1,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("  %s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    move(x+4,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    refresh();
}
//ㅗ
void printH(int x, int y){
    move(x+1,y+1);
    printw("",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}
//ㅜ
void printN(int x, int y){
    move(x+2,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    printw("",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+6,y+1);
    refresh();
}
//ㅡ
void printM(int x, int y){
    move(x+1,y+1);
    printw("",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("");
    move(x+3,y+1);
    printw("");
    move(x+4,y+1);
    printw("");
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}
//ㅣ
void printL(int x, int y){

    move(x+1,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("    %s%s%s",RightHalf,Full,LeftHalf);
    refresh();

}

//ㅑ
void printI(int x, int y){

    move(x+1,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,LeftHalf);
    move(x+3,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s",RightHalf,Full,LeftHalf);
    refresh();

}

//ㅕ
void printU(int x, int y){

    move(x+1,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,LeftHalf);
    move(x+3,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw(" %s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,LeftHalf);
    move(x+5,y+1);
    printw("        %s%s%s",RightHalf,Full,LeftHalf);
    refresh();

}

//ㅛ
void printY(int x, int y){
    move(x+1,y+1);
    printw("",RightHalf,Full,LeftHalf);
    move(x+2,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
    refresh();
}
//ㅠ
void printB(int x, int y){
    move(x+1,y+1);
    printw("%s%s%s%s%s%s%s%s%s%s%s",RightHalf,Full,Full,Full,Full,Full,Full
    ,Full,Full,Full,LeftHalf);
   
    move(x+2,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+3,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+4,y+1);
    printw("  %s%s%s %s%s%s",RightHalf,Full,LeftHalf,RightHalf,Full,LeftHalf);
    move(x+5,y+1);
    printw("",RightHalf,Full,LeftHalf);
    refresh();
}


void printMainBackground(){
    clear();
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            move(2+i*7,6+13*j);
            printw("%s%s%s%s%s%s%s%s%s%s%s%s%s", u8"\u250F", u8"\u2501", u8"\u2501", u8"\u2501" , 
            u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", 
            u8"\u2501", u8"\u2501", u8"\u2513"); // 특정 단어 출력
            
            for(int k=1;k<=5;k++){
                move(2+i*7+k,6+13*j);
                printw("%s           %s", u8"\u2503", u8"\u2503"); // 특정 단어 출력
            }
            move(2+i*7+6,6+13*j);
            printw("%s%s%s%s%s%s%s%s%s%s%s%s%s", u8"\u2517", u8"\u2501", u8"\u2501", u8"\u2501" , 
            u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", u8"\u2501", 
            u8"\u2501", u8"\u2501", u8"\u251B"); // 특정 단어 출력
        }
    }
    refresh();
}

void deleteWord(int round,int index){
    for(int i=1;i<=5;i++){
        move(2+round*7+i,6+13*index+1);
        printw("           ");
    }
    refresh();
}

Word inputWord(char c){
    
    switch(c){
        case 'r': case 'R': return R;
        case 's': case 'S': return S;
        case 'e': case 'E': return E;
        case 'f': case 'F': return F;
        case 'a': case 'A': return A;
        case 'q': case 'Q': return Q;
        case 't': case 'T': return T;
        case 'd': case 'D': return D;
        case 'w': case 'W': return W;
        case 'c': case 'C': return C;
        case 'z': case 'Z': return Z;
        case 'x': case 'X': return X;
        case 'v': case 'V': return V;
        case 'g': case 'G': return G;
        case 'k': case 'K': return K;
        case 'i': case 'I': return I;
        case 'j': case 'J': return J;
        case 'u': case 'U': return U;
        case 'h': case 'H': return H;
        case 'y': case 'Y': return Y;
        case 'n': case 'N': return N;
        case 'b': case 'B': return B;
        case 'm': case 'M': return M;
        case 'l': case 'L': return L;
        default: return 0;
    }
    
}

void printWord(Word w, int round, int index){
    switch (w)
    {
        case R: printR(2+round*7,6+13*index); break;    //ㄱ
        case S: printS(2+round*7,6+13*index); break;    //ㄴ
        case E: printE(2+round*7,6+13*index); break;    //ㄷ
        case F: printF(2+round*7,6+13*index); break;    //ㄹ
        case A: printA(2+round*7,6+13*index); break;    //ㅁ
        case Q: printQ(2+round*7,6+13*index); break;    //ㅂ
        case T: printT(2+round*7,6+13*index); break;    //ㅛ
        case D: printD(2+round*7,6+13*index); break;    //ㅇ
        case W: printW(2+round*7,6+13*index); break;    //ㅈ
        case C: printC(2+round*7,6+13*index); break;    //ㅊ
        case Z: printZ(2+round*7,6+13*index); break;   //ㅋ
        case X: printX(2+round*7,6+13*index); break;   //ㅌ
        case V: printV(2+round*7,6+13*index); break;   //ㅍ
        case G: printG(2+round*7,6+13*index); break;   //ㅎ
        case K: printK(2+round*7,6+13*index); break;   //ㅏ
        case J: printK(2+round*7,6+13*index); break;   //ㅓ
        case H: printH(2+round*7,6+13*index); break;   //ㅗ
        case N: printN(2+round*7,6+13*index); break;   //ㅜ
        case M: printM(2+round*7,6+13*index); break;   //ㅡ
        case L: printL(2+round*7,6+13*index); break;   //ㅣ
        case I: printI(2+round*7,6+13*index); break;   //ㅑ
        case U: printU(2+round*7,6+13*index); break;   //ㅕ
        case Y: printY(2+round*7,6+13*index); break;   //ㅛ
        case B: printB(2+round*7,6+13*index); break;   //ㅠ
        default: break;
    }
}

void changeColor(Color check[], Word input[], int round){
    for(int i=0;i<6;i++){
        if(check[i]==GREEN){
            attron(COLOR_PAIR(GREEN)); // 색상 적용
            printWord(input[i],round,i);
            attroff(COLOR_PAIR(GREEN)); // 원상복귀
        }
        else if(check[i]==YELLOW){
            attron(COLOR_PAIR(YELLOW)); // 색상 적용
            printWord(input[i],round,i);
            attroff(COLOR_PAIR(YELLOW)); // 원상복귀
        }
        else if(check[i]==RED){
            attron(COLOR_PAIR(RED)); // 색상 적용
            printWord(input[i],round,i);
            attroff(COLOR_PAIR(RED)); // 원상복귀
        }
        else{
            printWord(input[i],round,i);
        }
        usleep(500000);
    }
    flushinp();
}

void deleteRound(int round){
    for(int i=0;i<6;i++){
        deleteWord(round,i);
    }
}

int isWord(char c){
    switch(c){
        case 'r': case 'R': return 1;
        case 's': case 'S': return 1;
        case 'e': case 'E': return 1;
        case 'f': case 'F': return 1;
        case 'a': case 'A': return 1;
        case 'q': case 'Q': return 1;
        case 't': case 'T': return 1;
        case 'd': case 'D': return 1;
        case 'w': case 'W': return 1;
        case 'c': case 'C': return 1;
        case 'z': case 'Z': return 1;
        case 'x': case 'X': return 1;
        case 'v': case 'V': return 1;
        case 'g': case 'G': return 1;
        case 'k': case 'K': return 1;
        case 'i': case 'I': return 1;
        case 'j': case 'J': return 1;
        case 'u': case 'U': return 1;
        case 'h': case 'H': return 1;
        case 'y': case 'Y': return 1;
        case 'n': case 'N': return 1;
        case 'b': case 'B': return 1;
        case 'm': case 'M': return 1;
        case 'l': case 'L': return 1;
        default: return 0;
    }
}