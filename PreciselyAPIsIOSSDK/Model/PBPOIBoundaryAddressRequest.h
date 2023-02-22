#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 14.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBPOIBoundaryPreferences.h"
#import "PBZonesAddress.h"
@protocol PBPOIBoundaryPreferences;
@class PBPOIBoundaryPreferences;
@protocol PBZonesAddress;
@class PBZonesAddress;



@protocol PBPOIBoundaryAddressRequest
@end

@interface PBPOIBoundaryAddressRequest : PBObject


@property(nonatomic) NSArray<PBZonesAddress>* addresses;

@property(nonatomic) PBPOIBoundaryPreferences* preferences;

@end
