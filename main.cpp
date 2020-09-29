#include <Windows.h>
#include <iostream>
#include <string>

class MorseCoder{
    int dotTime;

    bool sBip(){return Beep(500, dotTime);}
    bool lBip(){return Beep(500, dotTime*3);}
    bool stringOfBips(std::string str){
        Sleep(dotTime);
        for(char c: str){
            switch(c){
                case '.':
                    sBip();
                    break;
                case '_':
                    lBip();
                    break;
                case ' ':
                    Sleep(dotTime*6);
                default:
                    return false;
                    break;
            }
        }
        return true;
    }

    std::string morseChar(char c){
        switch(c){
            case 'a':;
            case 'A': stringOfBips("._"); return "._"; break;
            case 'b':;
            case 'B': stringOfBips("_..."); return "_..."; break;
            case 'c':;
            case 'C': stringOfBips("_._."); return "_._."; break;
            case 'd':;
            case 'D': stringOfBips("_.."); return "_.."; break;
            case 'e':;
            case 'E': stringOfBips("."); return "."; break;
            case 'f':;
            case 'F': stringOfBips(".._."); return ".._."; break;
            case 'g':;
            case 'G': stringOfBips("__."); return "__."; break;
            case 'h':;
            case 'H': stringOfBips("...."); return "...."; break;
            case 'i':;
            case 'I': stringOfBips(".."); return ".."; break;
            case 'j':;
            case 'J': stringOfBips(".___"); return ".___"; break;
            case 'k':;
            case 'K': stringOfBips("_._"); return "_._"; break;
            case 'l':;
            case 'L': stringOfBips("_.__"); return "_.__"; break;
            case 'm':;
            case 'M': stringOfBips("__"); return "__"; break;
            case 'n':;
            case 'N': stringOfBips("_."); return "_."; break;
            case 'o':;
            case 'O': stringOfBips("___"); return "___"; break;
            case 'p':;
            case 'P': stringOfBips(".__."); return ".__."; break;
            case 'q':;
            case 'Q': stringOfBips("__._"); return "__._"; break;
            case 'r':;
            case 'R': stringOfBips("._."); return "._."; break;
            case 's':;
            case 'S': stringOfBips("..."); return "..."; break;
            case 't':;
            case 'T': stringOfBips("_"); return "_"; break;
            case 'u':;
            case 'U': stringOfBips(".._"); return ".._"; break;
            case 'v':;
            case 'V': stringOfBips("..._"); return "..._"; break;
            case 'w':;
            case 'W': stringOfBips(".__"); return ".__"; break;
            case 'x':;
            case 'X': stringOfBips("_.._"); return "_.._"; break;
            case 'y':;
            case 'Y': stringOfBips("_.__"); return "_.__"; break;
            case 'z':;
            case 'Z': stringOfBips("__.."); return "__.."; break;
            case '1': stringOfBips(".____"); return ".____"; break;
            case '2': stringOfBips("..___"); return "..___"; break;
            case '3': stringOfBips("...__"); return "...__"; break;
            case '4': stringOfBips("...._"); return "...._"; break;
            case '5': stringOfBips("....."); return "....."; break;
            case '6': stringOfBips("_...."); return "_...."; break;
            case '7': stringOfBips("__..."); return "__..."; break;
            case '8': stringOfBips("___.."); return "___.."; break;
            case '9': stringOfBips("____."); return "____."; break;
            case '0': stringOfBips("_____"); return "_____"; break;
            case ' ': stringOfBips(" "); return " "; break;
            case '.': stringOfBips("......"); return "......"; break;
            case ',': stringOfBips("._._._"); return "._._._"; break;
            case ':': stringOfBips("___..."); return "___..."; break;
            case ';': stringOfBips("_._._."); return "_._._."; break;
            case '(':;
            case ')': stringOfBips("_.__._"); return "_.__._"; break;
            case '\'': stringOfBips(".____."); return ".____."; break;
            case '-': stringOfBips("_...._"); return "_...._"; break;
            case '_': stringOfBips("..__._"); return "..__._"; break;
            case '?': stringOfBips("..__.."); return "..__.."; break;
            case '!': stringOfBips("__..__"); return "__..__"; break;
            default: stringOfBips("........"); return "........X"; break;
        }
    }
public:
    MorseCoder(int dTime = 50):dotTime(dTime){}//Constructor
    void setDotTime(int dotTime){dotTime;}//length of dot setter(in miliseconds)
    int getDotTime(){return dotTime;}//length of dot getter(in miliseconds)

    std::string stringToMorse(std::ostream &os, std::string str){
        std::string output = "";
        for(char c: str){
            output += morseChar(c);
            os << morseChar(c) << ' ';
        }
        os << std::endl;
        return output;
    }

};

int main()
{
    MorseCoder mc(100);
    mc.stringToMorse(std::cout, "CQ Hello! it's me! GB");
    return 0;
}
