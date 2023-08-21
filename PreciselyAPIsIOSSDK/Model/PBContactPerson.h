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





@protocol PBContactPerson
@end

@interface PBContactPerson : PBObject


@property(nonatomic) NSString* title;

@property(nonatomic) NSString* fullName;

@property(nonatomic) NSString* prefix;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* fax;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* comments;

@property(nonatomic) NSString* additionalDetails;

@end
