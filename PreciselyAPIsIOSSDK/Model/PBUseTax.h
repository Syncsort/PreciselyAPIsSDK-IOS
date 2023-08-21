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


#import "PBSpecialPurposeDistrictTax.h"
@protocol PBSpecialPurposeDistrictTax;
@class PBSpecialPurposeDistrictTax;



@protocol PBUseTax
@end

@interface PBUseTax : PBObject


@property(nonatomic) NSNumber* specialTaxRulesApplied;

@property(nonatomic) NSString* specialTaxRulesDescriptor;

@property(nonatomic) NSNumber* totalTaxRate;

@property(nonatomic) NSNumber* totalTaxAmount;

@property(nonatomic) NSNumber* stateTaxRate;

@property(nonatomic) NSNumber* stateTaxAmount;

@property(nonatomic) NSNumber* countyTaxRate;

@property(nonatomic) NSNumber* countyTaxAmount;

@property(nonatomic) NSNumber* municipalTaxRate;

@property(nonatomic) NSNumber* municipalTaxAmount;

@property(nonatomic) NSArray<PBSpecialPurposeDistrictTax>* spdsTax;

@end
