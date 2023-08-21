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


#import "PBCrimeRiskPreferences.h"
#import "PBRiskLocations.h"
@protocol PBCrimeRiskPreferences;
@class PBCrimeRiskPreferences;
@protocol PBRiskLocations;
@class PBRiskLocations;



@protocol PBCrimeRiskByLocationBatchRequest
@end

@interface PBCrimeRiskByLocationBatchRequest : PBObject


@property(nonatomic) NSArray<PBRiskLocations>* locations;

@property(nonatomic) PBCrimeRiskPreferences* preferences;

@end
