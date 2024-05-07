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


#import "PBFireStation.h"
#import "PBRiskAddress.h"
@protocol PBFireStation;
@class PBFireStation;
@protocol PBRiskAddress;
@class PBRiskAddress;



@protocol PBFireStations
@end

@interface PBFireStations : PBObject


@property(nonatomic) NSArray<PBFireStation>* fireStation;

@property(nonatomic) PBRiskAddress* matchedAddress;

@end
