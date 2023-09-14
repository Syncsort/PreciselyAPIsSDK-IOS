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


#import "PBZonesGeometry.h"
@protocol PBZonesGeometry;
@class PBZonesGeometry;



@protocol PBPOIBoundaryLocations
@end

@interface PBPOIBoundaryLocations : PBObject


@property(nonatomic) PBZonesGeometry* geometry;

@property(nonatomic) NSString* purchaseAmount;

@property(nonatomic) NSString* objectId;

@end
