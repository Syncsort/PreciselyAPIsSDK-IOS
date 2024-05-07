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


#import "PBAddress1.h"
#import "PBPoi.h"
@protocol PBAddress1;
@class PBAddress1;
@protocol PBPoi;
@class PBPoi;



@protocol PBPlacesResponse
@end

@interface PBPlacesResponse : PBObject


@property(nonatomic) NSString* page;

@property(nonatomic) NSString* candidates;

@property(nonatomic) NSString* totalMatchingCandidates;

@property(nonatomic) NSArray<PBPoi>* poi;

@property(nonatomic) PBAddress1* matchedAddress;

@end
