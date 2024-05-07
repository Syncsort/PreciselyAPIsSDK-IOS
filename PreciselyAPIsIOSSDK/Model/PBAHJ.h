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


#import "PBAHJmailingAddress.h"
#import "PBContactPerson.h"
#import "PBCoverage.h"
@protocol PBAHJmailingAddress;
@class PBAHJmailingAddress;
@protocol PBContactPerson;
@class PBContactPerson;
@protocol PBCoverage;
@class PBCoverage;



@protocol PBAHJ
@end

@interface PBAHJ : PBObject


@property(nonatomic) NSString* ahjType;

@property(nonatomic) NSString* ahjId;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* fccId;

@property(nonatomic) NSString* agency;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* comments;

@property(nonatomic) PBCoverage* coverage;

@property(nonatomic) PBContactPerson* contactPerson;

@property(nonatomic) PBAHJmailingAddress* mailingAddress;

@end
