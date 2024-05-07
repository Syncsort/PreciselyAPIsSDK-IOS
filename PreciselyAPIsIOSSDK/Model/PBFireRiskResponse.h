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


#import "PBFireShed.h"
#import "PBRiskAddress.h"
#import "PBState.h"
@protocol PBFireShed;
@class PBFireShed;
@protocol PBRiskAddress;
@class PBRiskAddress;
@protocol PBState;
@class PBState;



@protocol PBFireRiskResponse
@end

@interface PBFireRiskResponse : PBObject


@property(nonatomic) NSString* objectId;

@property(nonatomic) PBState* state;

@property(nonatomic) PBFireShed* fireShed;

@property(nonatomic) PBRiskAddress* matchedAddress;

@end
