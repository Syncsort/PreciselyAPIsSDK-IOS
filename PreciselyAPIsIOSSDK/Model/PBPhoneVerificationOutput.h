#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 16.0.3
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol PBPhoneVerificationOutput
@end

@interface PBPhoneVerificationOutput : PBObject


@property(nonatomic) NSString* mNC;

@property(nonatomic) NSString* mCC;

@property(nonatomic) NSString* carrierName;

@property(nonatomic) NSString* phoneType;

@property(nonatomic) NSString* phoneNumberFormatted;

@property(nonatomic) NSString* countryCode;

@property(nonatomic) NSString* phoneNumber;

@property(nonatomic) NSString* resultCode;

@property(nonatomic) NSArray<NSString*>* userFields;

@end
