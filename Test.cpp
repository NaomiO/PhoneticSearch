/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Naomi Oyer
 * 
 * Date: 2020-02
 */

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
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));

    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "habbi") == string("happy"));
    CHECK(find(text, "hapbi") == string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
    CHECK(find(text, "haffi") == string("happy"));
    CHECK(find(text, "hafpi") == string("happy"));
    CHECK(find(text, "hapfi") == string("happy"));
    CHECK(find(text, "habfi") == string("happy"));
    CHECK(find(text, "hafbi") == string("happy"));    //18
    
}

TEST_CASE("Test replacement of lower-case and upper-case") {
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
    CHECK(find(text, "hAppI") == string("Happi"));    //15

}

/* Add more test cases here */
