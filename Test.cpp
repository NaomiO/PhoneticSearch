#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
using namespace std;

TEST_CASE("Test replacement of p, f and b and replacement of y and i") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));

    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "habbi") == string("happy"));
    CHECK(find(text, "haffi") == string("happy"));

    CHECK(find(text, "hapfi") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpi") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "hapbi") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "hafbi") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));
    CHECK(find(text, "habfi") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));   
	CHECK_THROWS(find(text,""));
	CHECK_THROWS(find(text,"happ"));
	CHECK_THROWS(find(text,"h"));
	CHECK_THROWS(find("","happ"));
	
    
}

TEST_CASE("Test replacement of lower-case and upper-case and letters switch from p to b or f and i to y") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HAppi") == string("Happi"));
    CHECK(find(text, "HAPpi") == string("Happi"));
    CHECK(find(text, "HApPi") == string("Happi"));
    CHECK(find(text, "HAppI") == string("Happi"));
    CHECK(find(text, "HAPPi") == string("Happi"));
    CHECK(find(text, "HApPI") == string("Happi"));

    CHECK(find(text, "hAppi") == string("Happi"));
    CHECK(find(text, "hAPpi") == string("Happi"));
    CHECK(find(text, "hApPi") == string("Happi"));
    CHECK(find(text, "hAPPi") == string("Happi"));
    CHECK(find(text, "hAppI") == string("Happi"));  
    
    CHECK(find(text, "hapPI") == string("Happi"));
    CHECK(find(text, "HappI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));  
    
    CHECK(find(text, "HABBI") == string("Happi"));
    CHECK(find(text, "HABBY") == string("Happi"));
    CHECK(find(text, "HAFFI") == string("Happi"));
    CHECK(find(text, "HAFFY") == string("Happi"));
    CHECK(find(text, "HAPPY") == string("Happi"));

    CHECK(find(text, "HaBbI") == string("Happi"));
    CHECK(find(text, "hAbBi") == string("Happi"));
    CHECK(find(text, "HaBby") == string("Happi"));
    CHECK(find(text, "hAbBy") == string("Happi"));
    CHECK(find(text, "HaFfY") == string("Happi"));
    CHECK(find(text, "hAfFy") == string("Happi"));
    CHECK(find(text, "HaFfI") == string("Happi"));
    CHECK(find(text, "hAfFi") == string("Happi"));

    CHECK(find(text, "HAPFI") == string("Happi"));
    CHECK(find(text, "HAPFY") == string("Happi"));
    CHECK(find(text, "HAFPI") == string("Happi"));
    CHECK(find(text, "HAFPY") == string("Happi"));
    CHECK(find(text, "HABPI") == string("Happi"));
    CHECK(find(text, "HABPY") == string("Happi"));
    CHECK(find(text, "HAPBI") == string("Happi"));
    CHECK(find(text, "HAPBY") == string("Happi"));
    CHECK(find(text, "HAFBI") == string("Happi"));
    CHECK(find(text, "HAFBY") == string("Happi"));
    CHECK(find(text, "HABFI") == string("Happi"));
    CHECK(find(text, "HABFY") == string("Happi"));
    CHECK(find(text, "HAFBI") == string("Happi"));
    CHECK(find(text, "HAFBY") == string("Happi"));    
  
                                                            
}

TEST_CASE("Test replacement of letters and lower/upper cases") {
    string text = "I play the piano with Jessica";

    //I chose this phrase because it covers all of the possible letter's permutations

    //Letter replacements in word "I" from i to y and lower/upper cases
    CHECK(find(text, "I") == string("I"));
    CHECK(find(text, "i") == string("I"));
    CHECK(find(text, "Y") == string("I"));
    CHECK(find(text, "y") == string("I"));

    //Letter replacements in word "play" from i to y, p to f or b and lower/upper cases
    CHECK(find(text, "play") == string("play"));
    CHECK(find(text, "PLAY") == string("play"));
    CHECK(find(text, "PlAy") == string("play"));
    CHECK(find(text, "PLay") == string("play"));
    CHECK(find(text, "plAY") == string("play"));
    CHECK(find(text, "flay") == string("play"));
    CHECK(find(text, "Flay") == string("play"));
    CHECK(find(text, "blay") == string("play"));
    CHECK(find(text, "Blay") == string("play"));
    CHECK(find(text, "flai") == string("play"));
    CHECK(find(text, "FlaI") == string("play"));
    CHECK(find(text, "blai") == string("play"));
    CHECK(find(text, "BlaI") == string("play"));
    CHECK(find(text, "plai") == string("play"));
    CHECK(find(text, "plaI") == string("play"));  
    
    //Letter replacement in word "the" from t to d and lower/upper cases
    CHECK(find(text, "the") == string("the"));
    CHECK(find(text, "The") == string("the"));
    CHECK(find(text, "tHe") == string("the"));
    CHECK(find(text, "thE") == string("the"));
    CHECK(find(text, "THE") == string("the"));
    CHECK(find(text, "ThE") == string("the"));
    CHECK(find(text, "dhe") == string("the"));
    CHECK(find(text, "Dhe") == string("the"));

    //Letter replacement in word "piano" from i to y, p to f or b, o to u and lower/upper cases
    CHECK(find(text, "piano") == string("piano"));
    CHECK(find(text, "PIANO") == string("piano"));
    CHECK(find(text, "PiAnO") == string("piano"));
    CHECK(find(text, "pIaNo") == string("piano"));
    CHECK(find(text, "PIano") == string("piano"));
    CHECK(find(text, "piANO") == string("piano"));
    CHECK(find(text, "PIaNO") == string("piano"));
    CHECK(find(text, "piAno") == string("piano"));
    CHECK(find(text, "pyano") == string("piano"));
    CHECK(find(text, "pYano") == string("piano"));
    CHECK(find(text, "fiano") == string("piano"));
    CHECK(find(text, "Fiano") == string("piano"));
    CHECK(find(text, "biano") == string("piano"));
    CHECK(find(text, "Biano") == string("piano"));
    CHECK(find(text, "pianu") == string("piano"));
    CHECK(find(text, "pianU") == string("piano"));
    CHECK(find(text, "fianu") == string("piano"));
    CHECK(find(text, "FianU") == string("piano"));
    CHECK(find(text, "bianu") == string("piano"));
    CHECK(find(text, "BianU") == string("piano"));  
    CHECK(find(text, "fyano") == string("piano"));
    CHECK(find(text, "FYano") == string("piano"));
    CHECK(find(text, "byano") == string("piano"));
    CHECK(find(text, "BYano") == string("piano"));
    CHECK(find(text, "pyanu") == string("piano"));
    CHECK(find(text, "pYanU") == string("piano"));
    CHECK(find(text, "fyanu") == string("piano"));
    CHECK(find(text, "FYanU") == string("piano"));
    CHECK(find(text, "byanu") == string("piano"));
    CHECK(find(text, "BYanU") == string("piano"));  

    //Letter replacement in word "with" from i to y, t to d, w to v and lower/upper cases
    CHECK(find(text, "with") == string("with"));
    CHECK(find(text, "WITH") == string("with"));
    CHECK(find(text, "wItH") == string("with"));
    CHECK(find(text, "WiTh") == string("with"));
    CHECK(find(text, "vith") == string("with"));
    CHECK(find(text, "Vith") == string("with"));
    CHECK(find(text, "wyth") == string("with"));
    CHECK(find(text, "wYth") == string("with"));
    CHECK(find(text, "widh") == string("with"));
    CHECK(find(text, "wiDH") == string("with"));
    CHECK(find(text, "vydh") == string("with"));
    CHECK(find(text, "VYDH") == string("with"));    

    //Letter replacement in word "Jessica" from i to y, s to z, j to g, c to k or q and lower/upper cases
    CHECK(find(text, "Jessica") == string("Jessica"));
    CHECK(find(text, "jessica") == string("Jessica"));
    CHECK(find(text, "JESSICA") == string("Jessica"));
    CHECK(find(text, "JeSsIcA") == string("Jessica"));
    CHECK(find(text, "jEsSiCa") == string("Jessica"));
    CHECK(find(text, "gessica") == string("Jessica"));
    CHECK(find(text, "Gessica") == string("Jessica"));
    CHECK(find(text, "Jezzica") == string("Jessica"));
    CHECK(find(text, "JeZZica") == string("Jessica"));
    CHECK(find(text, "Jessika") == string("Jessica"));
    CHECK(find(text, "JessiKa") == string("Jessica"));
    CHECK(find(text, "Jessiqa") == string("Jessica"));
    CHECK(find(text, "JessiQa") == string("Jessica"));
    CHECK(find(text, "gessyca") == string("Jessica"));
    CHECK(find(text, "GessYca") == string("Jessica"));
    CHECK(find(text, "Jezzyca") == string("Jessica"));
    CHECK(find(text, "JeZZYca") == string("Jessica"));
    CHECK(find(text, "Jessyka") == string("Jessica"));
    CHECK(find(text, "JessYKa") == string("Jessica"));
    CHECK(find(text, "Jessyqa") == string("Jessica"));
    CHECK(find(text, "JessYQa") == string("Jessica"));
    CHECK(find(text, "Jessyca") == string("Jessica"));
    CHECK(find(text, "JessYca") == string("Jessica"));
    CHECK(find(text, "Jezzika") == string("Jessica"));
    CHECK(find(text, "Jezziqa") == string("Jessica"));
    CHECK(find(text, "Gezzika") == string("Jessica"));
    CHECK(find(text, "Gezziqa") == string("Jessica"));
    CHECK(find(text, "Gezzyka") == string("Jessica"));
<<<<<<< HEAD
CHECK(find(text, "Gezzyqa") == string("Jessica")); } 
=======
CHECK(find(text, "Gezzyqa") == string("Jessica")); }
>>>>>>> 08fbe7e618c1743ef4c3d2a25bcc669cd636052a
