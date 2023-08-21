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


#import "PBBoundaries.h"
#import "PBDemographicsThemesV2.h"
@protocol PBBoundaries;
@class PBBoundaries;
@protocol PBDemographicsThemesV2;
@class PBDemographicsThemesV2;



@protocol PBDemographics
@end

@interface PBDemographics : PBObject


@property(nonatomic) PBBoundaries* boundaries;

@property(nonatomic) PBDemographicsThemesV2* themes;

@property(nonatomic) NSArray<PBDemographicsThemesV2>* boundaryThemes;

@end
