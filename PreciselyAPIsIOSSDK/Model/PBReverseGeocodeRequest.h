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


#import "PBGeocodePreferences.h"
#import "PBPoints.h"
@protocol PBGeocodePreferences;
@class PBGeocodePreferences;
@protocol PBPoints;
@class PBPoints;



@protocol PBReverseGeocodeRequest
@end

@interface PBReverseGeocodeRequest : PBObject


@property(nonatomic) PBGeocodePreferences* preferences;

@property(nonatomic) NSArray<PBPoints>* points;

@end
