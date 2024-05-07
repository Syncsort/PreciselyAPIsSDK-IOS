#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 18.1.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBGetPostalCodesAPIOutputUserFields.h"
@protocol PBGetPostalCodesAPIOutputUserFields;
@class PBGetPostalCodesAPIOutputUserFields;



@protocol PBValidateMailingAddressOutput
@end

@interface PBValidateMailingAddressOutput : PBObject

/* These fields are returned, unmodified, in the user_fields section of the response. [optional]
 */
@property(nonatomic) NSArray<PBGetPostalCodesAPIOutputUserFields>* userFields;
/* The first line of the validated address. [optional]
 */
@property(nonatomic) NSString* addressLine1;
/* The second line of the validated address. [optional]
 */
@property(nonatomic) NSString* addressLine2;
/* The validated firm or company name. [optional]
 */
@property(nonatomic) NSString* firmName;
/* The validated city name. [optional]
 */
@property(nonatomic) NSString* city;
/* The validated ZIP Code or postal code. [optional]
 */
@property(nonatomic) NSString* postalCode;
/* The country name in English. [optional]
 */
@property(nonatomic) NSString* country;
/* The validated state or province abbreviation. [optional]
 */
@property(nonatomic) NSString* stateProvince;
/* The formatted address, as it would appear on a physical mail piece. [optional]
 */
@property(nonatomic) NSString* blockAddress;
/* Input data not used by the address validation process. [optional]
 */
@property(nonatomic) NSString* additionalInputData;
/* The 5-digit ZIP Code. [optional]
 */
@property(nonatomic) NSString* postalCodeBase;
/* The 4-digit add-on part of the ZIP Code. [optional]
 */
@property(nonatomic) NSString* postalCodeAddOn;
/* Reports the success or failure of the match attempt. [optional]
 */
@property(nonatomic) NSString* status;
/* Reason for failure, if there is one. [optional]
 */
@property(nonatomic) NSString* statusCode;
/* Description of the problem, if there is one. [optional]
 */
@property(nonatomic) NSString* statusDescription;

@end
