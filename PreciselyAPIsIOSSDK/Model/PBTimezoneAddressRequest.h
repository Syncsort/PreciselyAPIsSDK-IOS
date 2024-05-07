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


#import "PBAddressTime.h"
#import "PBPreferencTimeZone.h"
@protocol PBAddressTime;
@class PBAddressTime;
@protocol PBPreferencTimeZone;
@class PBPreferencTimeZone;



@protocol PBTimezoneAddressRequest
@end

@interface PBTimezoneAddressRequest : PBObject


@property(nonatomic) PBPreferencTimeZone* preferences;

@property(nonatomic) NSArray<PBAddressTime>* addressTime;

@end
