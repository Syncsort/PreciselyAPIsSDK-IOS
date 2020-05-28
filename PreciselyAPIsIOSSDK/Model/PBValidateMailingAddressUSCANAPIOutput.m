#import "PBValidateMailingAddressUSCANAPIOutput.h"

@implementation PBValidateMailingAddressUSCANAPIOutput

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"user_fields": @"userFields", @"Status": @"status", @"Status.Code": @"statusCode", @"Status.description": @"statusDescription", @"AddressLine1": @"addressLine1", @"AddressLine2": @"addressLine2", @"City": @"city", @"StateProvince": @"stateProvince", @"PostalCode": @"postalCode", @"Country": @"country", @"FirmName": @"firmName", @"BlockAddress": @"blockAddress", @"PostalCode.Base": @"postalCodeBase", @"PostalCode.AddOn": @"postalCodeAddOn", @"AdditionalInputData": @"additionalInputData", @"CouldNotValidate": @"couldNotValidate", @"AddressFormat": @"addressFormat", @"AddressLine3": @"addressLine3", @"AddressLine4": @"addressLine4", @"AddressRecord.Result": @"addressRecordResult", @"ApartmentLabel": @"apartmentLabel", @"ApartmentLabel.Input": @"apartmentLabelInput", @"ApartmentLabel.Result": @"apartmentLabelResult", @"ApartmentNumber": @"apartmentNumber", @"ApartmentNumber.Input": @"apartmentNumberInput", @"ApartmentNumber.Result": @"apartmentNumberResult", @"City.Input": @"cityInput", @"City.Result": @"cityResult", @"Confidence": @"confidence", @"Country.Input": @"countryInput", @"Country.Result": @"countryResult", @"CountryLevel": @"countryLevel", @"FirmName.Input": @"firmNameInput", @"FirmName.Result": @"firmNameResult", @"HouseNumber": @"houseNumber", @"HouseNumber.Input": @"houseNumberInput", @"HouseNumber.Result": @"houseNumberResult", @"LeadingDirectional": @"leadingDirectional", @"LeadingDirectional.Input": @"leadingDirectionalInput", @"LeadingDirectional.Result": @"leadingDirectionalResult", @"MultipleMatches": @"multipleMatches", @"POBox": @"pOBox", @"POBox.Input": @"pOBoxInput", @"POBox.Result": @"pOBoxResult", @"PostalCode.Input": @"postalCodeInput", @"PostalCode.Result": @"postalCodeResult", @"PostalCode.Source": @"postalCodeSource", @"PostalCode.Type": @"postalCodeType", @"PostalCodeCity.Result": @"postalCodeCityResult", @"PrivateMailbox": @"privateMailbox", @"PrivateMailbox.Input": @"privateMailboxInput", @"PrivateMailbox.Type": @"privateMailboxType", @"PrivateMailbox.Type.Input": @"privateMailboxTypeInput", @"RecordType": @"recordType", @"RecordType.Default": @"recordTypeDefault", @"RRHC": @"rRHC", @"RRHC.Input": @"rRHCInput", @"RRHC.Result": @"rRHCResult", @"RRHC.Type": @"rRHCType", @"StateProvince.Input": @"stateProvinceInput", @"StateProvince.Result": @"stateProvinceResult", @"Street.Result": @"streetResult", @"StreetName": @"streetName", @"StreetName.Alias.Type": @"streetNameAliasType", @"StreetName.Input": @"streetNameInput", @"StreetName.Result": @"streetNameResult", @"StreetNameAbbreviatedAlias.Result": @"streetNameAbbreviatedAliasResult", @"StreetNamePreferredAlias.Result": @"streetNamePreferredAliasResult", @"StreetSuffix": @"streetSuffix", @"StreetSuffix.Input": @"streetSuffixInput", @"StreetSuffix.Result": @"streetSuffixResult", @"TrailingDirectional": @"trailingDirectional", @"TrailingDirectional.Input": @"trailingDirectionalInput", @"TrailingDirectional.Result": @"trailingDirectionalResult", @"MatchScore": @"matchScore", @"USLACS": @"uSLACS", @"USLACS.ReturnCode": @"uSLACSReturnCode", @"RDI": @"rDI", @"CMRA": @"cMRA", @"DPV": @"dPV", @"DPVFootnote": @"dPVFootnote", @"SuiteLinkReturnCode": @"suiteLinkReturnCode", @"SuiteLinkMatchCode": @"suiteLinkMatchCode", @"SuiteLinkFidelity": @"suiteLinkFidelity", @"USBCCheckDigit": @"uSBCCheckDigit", @"PostalBarCode": @"postalBarCode", @"USCarrierRouteCode": @"uSCarrierRouteCode", @"USFIPSCountyNumber": @"uSFIPSCountyNumber", @"USCountyName": @"uSCountyName", @"USCongressionalDistrict": @"uSCongressionalDistrict", @"USAltAddr": @"uSAltAddr", @"USLastLineNumber": @"uSLastLineNumber", @"USFinanceNumber": @"uSFinanceNumber", @"USUrbanName": @"uSUrbanName", @"USUrbanName.Input": @"uSUrbanNameInput", @"USUrbanName.Result": @"uSUrbanNameResult", @"MultimatchCount": @"multimatchCount", @"AddressBlock1": @"addressBlock1", @"AddressBlock2": @"addressBlock2", @"AddressBlock3": @"addressBlock3", @"AddressBlock4": @"addressBlock4", @"AddressBlock5": @"addressBlock5", @"AddressBlock6": @"addressBlock6", @"AddressBlock7": @"addressBlock7", @"AddressBlock8": @"addressBlock8", @"AddressBlock9": @"addressBlock9", @"CanLanguage": @"canLanguage", @"DPVNoStat": @"dPVNoStat", @"DPVVacant": @"dPVVacant" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"userFields", @"status", @"statusCode", @"statusDescription", @"addressLine1", @"addressLine2", @"city", @"stateProvince", @"postalCode", @"country", @"firmName", @"blockAddress", @"postalCodeBase", @"postalCodeAddOn", @"additionalInputData", @"couldNotValidate", @"addressFormat", @"addressLine3", @"addressLine4", @"addressRecordResult", @"apartmentLabel", @"apartmentLabelInput", @"apartmentLabelResult", @"apartmentNumber", @"apartmentNumberInput", @"apartmentNumberResult", @"cityInput", @"cityResult", @"confidence", @"countryInput", @"countryResult", @"countryLevel", @"firmNameInput", @"firmNameResult", @"houseNumber", @"houseNumberInput", @"houseNumberResult", @"leadingDirectional", @"leadingDirectionalInput", @"leadingDirectionalResult", @"multipleMatches", @"pOBox", @"pOBoxInput", @"pOBoxResult", @"postalCodeInput", @"postalCodeResult", @"postalCodeSource", @"postalCodeType", @"postalCodeCityResult", @"privateMailbox", @"privateMailboxInput", @"privateMailboxType", @"privateMailboxTypeInput", @"recordType", @"recordTypeDefault", @"rRHC", @"rRHCInput", @"rRHCResult", @"rRHCType", @"stateProvinceInput", @"stateProvinceResult", @"streetResult", @"streetName", @"streetNameAliasType", @"streetNameInput", @"streetNameResult", @"streetNameAbbreviatedAliasResult", @"streetNamePreferredAliasResult", @"streetSuffix", @"streetSuffixInput", @"streetSuffixResult", @"trailingDirectional", @"trailingDirectionalInput", @"trailingDirectionalResult", @"matchScore", @"uSLACS", @"uSLACSReturnCode", @"rDI", @"cMRA", @"dPV", @"dPVFootnote", @"suiteLinkReturnCode", @"suiteLinkMatchCode", @"suiteLinkFidelity", @"uSBCCheckDigit", @"postalBarCode", @"uSCarrierRouteCode", @"uSFIPSCountyNumber", @"uSCountyName", @"uSCongressionalDistrict", @"uSAltAddr", @"uSLastLineNumber", @"uSFinanceNumber", @"uSUrbanName", @"uSUrbanNameInput", @"uSUrbanNameResult", @"multimatchCount", @"addressBlock1", @"addressBlock2", @"addressBlock3", @"addressBlock4", @"addressBlock5", @"addressBlock6", @"addressBlock7", @"addressBlock8", @"addressBlock9", @"canLanguage", @"dPVNoStat", @"dPVVacant"];
  return [optionalProperties containsObject:propertyName];
}

@end
