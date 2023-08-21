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


#import "PBIndividualValueVariable.h"
#import "PBRangeVariable.h"
@protocol PBIndividualValueVariable;
@class PBIndividualValueVariable;
@protocol PBRangeVariable;
@class PBRangeVariable;



@protocol PBIncomeTheme
@end

@interface PBIncomeTheme : PBObject


@property(nonatomic) NSString* boundaryRef;

@property(nonatomic) NSArray<PBIndividualValueVariable>* individualValueVariable;

@property(nonatomic) NSArray<PBRangeVariable>* rangeVariable;

@end
