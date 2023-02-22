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


#import "PBPOIBoundaryLocations.h"
#import "PBPOIBoundaryPreferences.h"
@protocol PBPOIBoundaryLocations;
@class PBPOIBoundaryLocations;
@protocol PBPOIBoundaryPreferences;
@class PBPOIBoundaryPreferences;



@protocol PBPOIBoundaryLocationRequest
@end

@interface PBPOIBoundaryLocationRequest : PBObject


@property(nonatomic) NSArray<PBPOIBoundaryLocations>* locations;

@property(nonatomic) PBPOIBoundaryPreferences* preferences;

@end
