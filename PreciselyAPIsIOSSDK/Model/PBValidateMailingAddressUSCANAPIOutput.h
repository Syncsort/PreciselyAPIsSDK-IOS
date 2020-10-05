#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 9.5.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import "PBValidateMailingAddressInputRowUserFields.h"


@protocol PBValidateMailingAddressUSCANAPIOutput
@end

@interface PBValidateMailingAddressUSCANAPIOutput : PBObject

/* These fields are returned, unmodified, in the user_fields section of the response. [optional]
 */
@property(nonatomic) NSArray<PBValidateMailingAddressInputRowUserFields>* userFields;
/* Reports the success or failure of the match attempt. [optional]
 */
@property(nonatomic) NSString* status;
/* Reason for failure, if there is one. [optional]
 */
@property(nonatomic) NSString* statusCode;
/* Specifies the description of the problem, if there is one. [optional]
 */
@property(nonatomic) NSString* statusDescription;
/* Specifies the first line of the validated and standardized address. [optional]
 */
@property(nonatomic) NSString* addressLine1;
/* Specifies the second line of the validated and standardized address. [optional]
 */
@property(nonatomic) NSString* addressLine2;
/* Specifies the validated city name. [optional]
 */
@property(nonatomic) NSString* city;
/* Specifies the validated state or province abbreviation. [optional]
 */
@property(nonatomic) NSString* stateProvince;
/* Specifies the validated ZIP Code or postal code. [optional]
 */
@property(nonatomic) NSString* postalCode;
/* Specifies the country in the format determined by the selection from ISO or UPO or English. [optional]
 */
@property(nonatomic) NSString* country;
/* Specifies the validated firm or company name. [optional]
 */
@property(nonatomic) NSString* firmName;
/* Specifies the formatted address, as it would appear on a physical mail piece.  [optional]
 */
@property(nonatomic) NSString* blockAddress;
/* Specifies the 5-digit ZIP Code. [optional]
 */
@property(nonatomic) NSString* postalCodeBase;
/* Specifies the 4-digit add-on part of the ZIP Code. [optional]
 */
@property(nonatomic) NSString* postalCodeAddOn;
/* Specifies input data not used by the address validation process. [optional]
 */
@property(nonatomic) NSString* additionalInputData;
/* Specifies the address component that could not be validated, in case no match is found.  [optional]
 */
@property(nonatomic) NSString* couldNotValidate;
/* Specifies the type of address data being returned. [optional]
 */
@property(nonatomic) NSString* addressFormat;
/* Specifies the third line of the validated and standardized address. If the address could not be validated, the third line of the input address without any changes. [optional]
 */
@property(nonatomic) NSString* addressLine3;
/* Specifies the fourth line of the validated and standardized address. If the address could not be validated, the fourth line of the input address without any changes. [optional]
 */
@property(nonatomic) NSString* addressLine4;
/* Specifies the result codes that apply to international addresses only. [optional]
 */
@property(nonatomic) NSString* addressRecordResult;
/* Specifies the apartment designator such as STE or APT. [optional]
 */
@property(nonatomic) NSString* apartmentLabel;
/* Specifies the apartment designator such as STE or APT. [optional]
 */
@property(nonatomic) NSString* apartmentLabelInput;
/* Specifies the result of apartment label. [optional]
 */
@property(nonatomic) NSString* apartmentLabelResult;
/* Specifies the apartment number. [optional]
 */
@property(nonatomic) NSString* apartmentNumber;
/* Specifies the apartment number. [optional]
 */
@property(nonatomic) NSString* apartmentNumberInput;
/* Specifies the result of apartment number. [optional]
 */
@property(nonatomic) NSString* apartmentNumberResult;
/* Specifies the validated city name. [optional]
 */
@property(nonatomic) NSString* cityInput;
/* Specifies the result of the validated city name. [optional]
 */
@property(nonatomic) NSString* cityResult;
/* Specifies the the level of confidence assigned to the address being returned. [optional]
 */
@property(nonatomic) NSString* confidence;
/* Specifies the name of the country. [optional]
 */
@property(nonatomic) NSString* countryInput;
/* Specifies the result code for the country. [optional]
 */
@property(nonatomic) NSString* countryResult;
/* Specifies the category of address matching available. [optional]
 */
@property(nonatomic) NSString* countryLevel;
/* Specifies the validated firm or company name. [optional]
 */
@property(nonatomic) NSString* firmNameInput;
/* Specifies if the firm name got validated. [optional]
 */
@property(nonatomic) NSString* firmNameResult;
/* Specifies the house number. [optional]
 */
@property(nonatomic) NSString* houseNumber;
/* Specifies the house number. [optional]
 */
@property(nonatomic) NSString* houseNumberInput;
/* Specifies the result for house number. [optional]
 */
@property(nonatomic) NSString* houseNumberResult;
/* Specifies the leading directional. [optional]
 */
@property(nonatomic) NSString* leadingDirectional;
/* Specifies the leading directional. [optional]
 */
@property(nonatomic) NSString* leadingDirectionalInput;
/* Specifies the result of leading directional. [optional]
 */
@property(nonatomic) NSString* leadingDirectionalResult;
/* Specifies the address component with multiple matches, if multiple matches were found:  [optional]
 */
@property(nonatomic) NSString* multipleMatches;
/* Specifies the post office box number. [optional]
 */
@property(nonatomic) NSString* pOBox;
/* Specifies the post office box number. [optional]
 */
@property(nonatomic) NSString* pOBoxInput;
/* Specifies the result of post office box number. [optional]
 */
@property(nonatomic) NSString* pOBoxResult;
/* Specifies the validated postal code. For U.S. addresses, this is the ZIP code. [optional]
 */
@property(nonatomic) NSString* postalCodeInput;
/* Specifies the result of validated postal code. [optional]
 */
@property(nonatomic) NSString* postalCodeResult;
/* Specifies the result code. [optional]
 */
@property(nonatomic) NSString* postalCodeSource;
/* Specifies the type of postal code returned. [optional]
 */
@property(nonatomic) NSString* postalCodeType;
/* Specifies the international result code. [optional]
 */
@property(nonatomic) NSString* postalCodeCityResult;
/* Specifies the private mailbox indicator. [optional]
 */
@property(nonatomic) NSString* privateMailbox;
/* Specifies the private mailbox indicator. [optional]
 */
@property(nonatomic) NSString* privateMailboxInput;
/* Specifies the type of private mailbox. [optional]
 */
@property(nonatomic) NSString* privateMailboxType;
/* Specifies the type of private mailbox. [optional]
 */
@property(nonatomic) NSString* privateMailboxTypeInput;
/* Specifies the type of address record, as defined by U.S. and Canadian postal authorities. [optional]
 */
@property(nonatomic) NSString* recordType;
/* Specifies the code indicating the default match. [optional]
 */
@property(nonatomic) NSString* recordTypeDefault;
/* Specifies the Rural Route/Highway Contract indicator. [optional]
 */
@property(nonatomic) NSString* rRHC;
/* Specifies the Rural Route/Highway Contract indicator. [optional]
 */
@property(nonatomic) NSString* rRHCInput;
/* Specifies the result for Rural Route/Highway Contract indicator. [optional]
 */
@property(nonatomic) NSString* rRHCResult;
/* Specifies the result code for Rural Route/Highway Contract indicator. [optional]
 */
@property(nonatomic) NSString* rRHCType;
/* Specifies the validated state or province abbreviation. [optional]
 */
@property(nonatomic) NSString* stateProvinceInput;
/* Specifies the result of validated state or province abbreviation. [optional]
 */
@property(nonatomic) NSString* stateProvinceResult;
/* Specifies the result codes for international addresses. [optional]
 */
@property(nonatomic) NSString* streetResult;
/* Specifies the street name. [optional]
 */
@property(nonatomic) NSString* streetName;
/* Specifies result code that applies to U.S. addresses only. [optional]
 */
@property(nonatomic) NSString* streetNameAliasType;
/* Specifies the street name. [optional]
 */
@property(nonatomic) NSString* streetNameInput;
/* Specifies the result of the street name. [optional]
 */
@property(nonatomic) NSString* streetNameResult;
/* Indicates the result of abbreviated alias processing. [optional]
 */
@property(nonatomic) NSString* streetNameAbbreviatedAliasResult;
/* Specifies the result of preferred alias processing. [optional]
 */
@property(nonatomic) NSString* streetNamePreferredAliasResult;
/* Specifies the street suffix. [optional]
 */
@property(nonatomic) NSString* streetSuffix;
/* Specifies the street suffix. [optional]
 */
@property(nonatomic) NSString* streetSuffixInput;
/* Specifies the result of the street suffix. [optional]
 */
@property(nonatomic) NSString* streetSuffixResult;
/* Specifies the trailing directional. [optional]
 */
@property(nonatomic) NSString* trailingDirectional;
/* Specifies the trailing directional. [optional]
 */
@property(nonatomic) NSString* trailingDirectionalInput;
/* Specifies the result of the trailing directional. [optional]
 */
@property(nonatomic) NSString* trailingDirectionalResult;
/* Specifies an indication of the degree to which the output address is correct. [optional]
 */
@property(nonatomic) NSString* matchScore;
/* Specifies whether the address is a candidate for LACS conversion. This is for U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSLACS;
/* Specifies the the success or failure of LACS processing. This is for U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSLACSReturnCode;
/* Specifies the values indicating address type. [optional]
 */
@property(nonatomic) NSString* rDI;
/* Specifies if the address is a Commercial Mail Receiving Agency (CMRA). [optional]
 */
@property(nonatomic) NSString* cMRA;
/* Specifies the results of Delivery Point Validation (DPV) processing. [optional]
 */
@property(nonatomic) NSString* dPV;
/* Specifies the DPV footnote codes. [optional]
 */
@property(nonatomic) NSString* dPVFootnote;
/* Indicates whether or not API corrected the secondary address information (U.S. addresses only).  [optional]
 */
@property(nonatomic) NSString* suiteLinkReturnCode;
/* Provides additional information on the SuiteLink match attempt. (U.S. addresses only) [optional]
 */
@property(nonatomic) NSString* suiteLinkMatchCode;
/* Indicates how well ValidateAddress matched the firm name to the firm names in the SuiteLink database. [optional]
 */
@property(nonatomic) NSString* suiteLinkFidelity;
/* Specifies the check-digit portion of the 11-digit delivery point barcode. [optional]
 */
@property(nonatomic) NSString* uSBCCheckDigit;
/* Specifies the delivery point portion of the delivery point barcode. [optional]
 */
@property(nonatomic) NSString* postalBarCode;
/* Specifies carrier route code. [optional]
 */
@property(nonatomic) NSString* uSCarrierRouteCode;
/* Specifies FIPS (Federal Information Processing Standards) county number (U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSFIPSCountyNumber;
/* Specifies the county name (U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSCountyName;
/* Specifies congressional district (U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSCongressionalDistrict;
/* Specifies whether the alternate address matching logic was used, and if so which logic was used (U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSAltAddr;
/* Specifies a six-character alphanumeric value that groups together ZIP Codes that share the same primary city. [optional]
 */
@property(nonatomic) NSString* uSLastLineNumber;
/* Specifies the finance number in which the address resides (U.S. addresses only). [optional]
 */
@property(nonatomic) NSString* uSFinanceNumber;
/* U.S. address urbanization name. Used primarily for Puerto Rico addresses. [optional]
 */
@property(nonatomic) NSString* uSUrbanName;
/* U.S. address urbanization name. Used primarily for Puerto Rico addresses. [optional]
 */
@property(nonatomic) NSString* uSUrbanNameInput;
/* U.S. address urbanization name. Used primarily for Puerto Rico addresses. [optional]
 */
@property(nonatomic) NSString* uSUrbanNameResult;
/* If the address was matched to multiple candidate addresses in the reference data, this field contains the number of candidate matches found. [optional]
 */
@property(nonatomic) NSString* multimatchCount;
/* AddressBlock1 [optional]
 */
@property(nonatomic) NSString* addressBlock1;
/* AddressBlock2 [optional]
 */
@property(nonatomic) NSString* addressBlock2;
/* AddressBlock3 [optional]
 */
@property(nonatomic) NSString* addressBlock3;
/* AddressBlock4 [optional]
 */
@property(nonatomic) NSString* addressBlock4;
/* AddressBlock5 [optional]
 */
@property(nonatomic) NSString* addressBlock5;
/* AddressBlock6 [optional]
 */
@property(nonatomic) NSString* addressBlock6;
/* AddressBlock7 [optional]
 */
@property(nonatomic) NSString* addressBlock7;
/* AddressBlock8 [optional]
 */
@property(nonatomic) NSString* addressBlock8;
/* AddressBlock9 [optional]
 */
@property(nonatomic) NSString* addressBlock9;
/* Specifies whether the address is in English or French. This is for Canadian address only. [optional]
 */
@property(nonatomic) NSString* canLanguage;
/* Specifies whether the building is a no stat building and therefore unable to receive mail. [optional]
 */
@property(nonatomic) NSString* dPVNoStat;
/* Specifies whether the building is vacant, unoccupied for 90 days. [optional]
 */
@property(nonatomic) NSString* dPVVacant;

@end