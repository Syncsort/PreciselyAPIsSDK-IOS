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


#import "PBAddress.h"
@protocol PBAddress;
@class PBAddress;



@protocol PBPBKeyResponse
@end

@interface PBPBKeyResponse : PBObject


@property(nonatomic) NSString* key;

@property(nonatomic) PBAddress* matchedAddress;

@end
