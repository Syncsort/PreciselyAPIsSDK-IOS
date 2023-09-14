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


#import "PBSpecialPurposeDistrict.h"
#import "PBTaxCounty.h"
#import "PBTaxPlace.h"
#import "PBTaxState.h"
@protocol PBSpecialPurposeDistrict;
@class PBSpecialPurposeDistrict;
@protocol PBTaxCounty;
@class PBTaxCounty;
@protocol PBTaxPlace;
@class PBTaxPlace;
@protocol PBTaxState;
@class PBTaxState;



@protocol PBTaxJurisdiction
@end

@interface PBTaxJurisdiction : PBObject


@property(nonatomic) PBTaxState* state;

@property(nonatomic) PBTaxCounty* county;

@property(nonatomic) PBTaxPlace* place;

@property(nonatomic) NSArray<PBSpecialPurposeDistrict>* spds;

@end
