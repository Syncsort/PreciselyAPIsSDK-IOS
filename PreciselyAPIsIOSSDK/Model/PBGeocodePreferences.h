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


#import "PBFieldsMatching.h"
#import "PBReturnFieldsDescriptor.h"
@protocol PBFieldsMatching;
@class PBFieldsMatching;
@protocol PBReturnFieldsDescriptor;
@class PBReturnFieldsDescriptor;



@protocol PBGeocodePreferences
@end

@interface PBGeocodePreferences : PBObject


@property(nonatomic) NSNumber* returnAllCandidateInfo;

@property(nonatomic) NSString* fallbackToGeographic;

@property(nonatomic) NSString* fallbackToPostal;

@property(nonatomic) NSString* maxReturnedCandidates;

@property(nonatomic) NSString* distance;

@property(nonatomic) NSString* streetOffset;

@property(nonatomic) NSString* cornerOffset;

@property(nonatomic) NSString* matchMode;

@property(nonatomic) NSString* clientLocale;

@property(nonatomic) NSString* clientCoordSysName;

@property(nonatomic) NSString* distanceUnits;

@property(nonatomic) NSString* streetOffsetUnits;

@property(nonatomic) NSString* cornerOffsetUnits;

@property(nonatomic) PBFieldsMatching* mustMatchFields;

@property(nonatomic) PBReturnFieldsDescriptor* returnFieldsDescriptor;

@property(nonatomic) NSString* outputRecordType;

@property(nonatomic) NSDictionary<NSString*, NSObject*>* customPreferences;

@property(nonatomic) NSArray<NSString*>* preferredDictionaryOrders;

@property(nonatomic) NSString* outputCasing;

@property(nonatomic) NSString* latLongOffset;

@property(nonatomic) NSString* squeeze;

@property(nonatomic) NSString* returnLatLongFields;

@property(nonatomic) NSString* useGeoTaxAuxiliaryFile;

@property(nonatomic) NSString* latLongFormat;

@property(nonatomic) NSString* defaultBufferWidth;

@property(nonatomic) NSString* returnCensusFields;

@end
