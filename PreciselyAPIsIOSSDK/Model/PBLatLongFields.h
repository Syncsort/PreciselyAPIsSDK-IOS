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


#import "PBLocalTaxGeometry.h"
@protocol PBLocalTaxGeometry;
@class PBLocalTaxGeometry;



@protocol PBLatLongFields
@end

@interface PBLatLongFields : PBObject


@property(nonatomic) NSString* matchCode;

@property(nonatomic) NSString* matchLevel;

@property(nonatomic) NSString* streetMatchCode;

@property(nonatomic) NSString* streetMatchLevel;

@property(nonatomic) PBLocalTaxGeometry* geometry;

@end
