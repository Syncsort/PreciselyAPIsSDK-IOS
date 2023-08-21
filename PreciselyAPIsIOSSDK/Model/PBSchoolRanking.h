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





@protocol PBSchoolRanking
@end

@interface PBSchoolRanking : PBObject


@property(nonatomic) NSString* current;

@property(nonatomic) NSString* rankYear;

@property(nonatomic) NSString* stateRank;

@property(nonatomic) NSString* numberOfSchools;

@property(nonatomic) NSString* avgMathScore;

@property(nonatomic) NSString* avgReadingScore;

@property(nonatomic) NSString* statePercentileScore;

@end
