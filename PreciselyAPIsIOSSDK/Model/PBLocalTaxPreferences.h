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





@protocol PBLocalTaxPreferences
@end

@interface PBLocalTaxPreferences : PBObject


@property(nonatomic) NSDictionary<NSString*, NSObject*>* customPreferences;

@property(nonatomic) NSString* defaultBufferWidth;

@property(nonatomic) NSString* distanceUnits;

@property(nonatomic) NSString* fallbackToGeographic;

@property(nonatomic) NSString* latLongFormat;

@property(nonatomic) NSString* latLongOffset;

@property(nonatomic) NSString* matchMode;

@property(nonatomic) NSString* outputCasing;

@property(nonatomic) NSString* returnCensusFields;

@property(nonatomic) NSString* returnLatLongFields;

@property(nonatomic) NSString* squeeze;

@property(nonatomic) NSString* taxRatetypeID;

@property(nonatomic) NSString* useGeoTaxAuxiliaryFile;

@end
