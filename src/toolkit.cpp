#include "toolkit.h"
#include <iostream>
#include <vector>
#include <boost/lexical_cast.hpp>

using namespace std;

/**
 * string multiplication
 *
 * @param string mulitplicand mulitplicand
 * @param int    multiplier   multiplier
 *
 * @return string product
 */
string toolkit::stringMultiplication(string mulitplicand, int multiplier)//{{{
{
    string product;
    char charMulitplicand[strlen(mulitplicand.c_str())];
    int tmp;

    strcpy(charMulitplicand, mulitplicand.c_str());
    tmp = atoi(charMulitplicand) * multiplier;
    product = boost::lexical_cast<string>(tmp);

    return product;
}//}}}

/**
 * string division
 *
 * @param string dividend dividend
 * @param int    divisor  divisor
 *
 * @return string product
 */
string toolkit::stringDivision(string dividend, int divisor)//{{{
{
    string quotient;
    char charDividend[strlen(dividend.c_str())];
    int tmp;

    strcpy(charDividend, dividend.c_str());
    tmp = atoi(charDividend) / divisor;
    quotient = boost::lexical_cast<string>(tmp);

    return quotient;
}//}}}

int main ()
{
    /* parse url, get width and height
    string url;
    int width;
    int height;

    char *thumbnail="http://media.zenfs.com/zh_hant_tw/News/cna/20140103000009M.jpg?width=1024&height=768";
    string strThumbnail = thumbnail;
    char* pch;
    pch = strstr(thumbnail, "?width=");

    string thumbnailUrl = strThumbnail.substr(0, pch - thumbnail);
    string widthHeight = strThumbnail.substr(pch - thumbnail + 7);
    pch = strstr(widthHeight.c_str(), "&height=");
    string strWidth = widthHeight.substr(0, pch - widthHeight.c_str());
    width = atoi(strWidth.c_str());
    string strHeight = widthHeight.substr(pch - widthHeight.c_str() + 8);
    height = atoi(strHeight.c_str());

    cout << thumbnailUrl << endl;
    cout << widthHeight << endl;
    cout << width << endl;
    cout << height << endl;
    */

    /* explode by x
    string xy = "1024x768";
    char tmp[8];
    strcpy(tmp, xy.c_str());
    cout << tmp << endl;

    char* pch;
    pch = strstr(tmp, "x");
    cout << pch-tmp + 1 << endl;
    cout << xy.substr(0, pch - tmp) << endl;
    cout << xy.substr(pch - tmp + 1) << endl;
    */

    /* explode by :
    char *thumb = "f60556958-ac-0238xf6x0600x0450-s:200:3";
    cout << thumb << endl;
    string strThumb = thumb;
    cout << strThumb << endl;
    char* pch;
    pch = strstr(thumb, ":");
    cout << strThumb.substr(0, pch - thumb) << endl;
    */
    toolkit t;

    cout << t.stringMultiplication("55", 66) << endl;
    cout << t.stringDivision("5566", 66) << endl;

    return 0;
}
