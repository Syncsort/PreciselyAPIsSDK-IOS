#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 17.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBAddress.h"
@protocol PBAddress;
@class PBAddress;



@protocol PBTimezoneResponse
@end

@interface PBTimezoneResponse : PBObject


@property(nonatomic) NSString* objectId;

@property(nonatomic) NSString* timezoneName;

@property(nonatomic) NSString* zoneType;

@property(nonatomic) NSNumber* utcOffset;

@property(nonatomic) NSNumber* dstOffset;

@property(nonatomic) NSNumber* timestamp;

@property(nonatomic) PBAddress* matchedAddress;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* tzValidFrom;

@property(nonatomic) NSString* tzValidUntill;

@property(nonatomic) NSString* dstRule;

@property(nonatomic) NSString* dstValidFrom;

@property(nonatomic) NSString* dstValidUntill;

@property(nonatomic) NSString* dstStartDateFormat;

@property(nonatomic) NSString* dstEndDateFormat;

@property(nonatomic) NSString* dstStartDate;

@property(nonatomic) NSString* dstStartTime;

@property(nonatomic) NSString* dstEndTime;

@property(nonatomic) NSString* dstEndDate;

@end
