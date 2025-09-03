#ifndef UNIT_CONVERTER
#define UNIT_CONVERTER

// === Unit Converter ===
void runUnitConverter(void);

// === Choose Operation Unit converter ===
int chooseUnitConversionType(void);

// === Kilograms to Pounds ===
float getKilogramInput(void);
float convertKgToPounds(float input);

// === Meters to Inches ===
float getMeterInput(void);
float convertMetersToInches(float input);

// === Milliliters to Cups ===
float getMilliliterInput(void);
float convertMillilitersToCups(float input);

#endif // UNIT_CONVERTER
