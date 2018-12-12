/* 
 *  If you need to extract the actual individual values of RGB 
 *  from uint32_t NeoPixel color use these. <3 
 *  
*/

uint8_t getRedValueFromColor(uint32_t c) {
    return c >> 16;
}

uint8_t getGreenValueFromColor(uint32_t c) {
    return c >> 8;
}

uint8_t getBlueValueFromColor(uint32_t c) {
    return c;
}
