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


#import "PBAddressesDTO.h"
@protocol PBAddressesDTO;
@class PBAddressesDTO;



@protocol PBAddressesResponse
@end

@interface PBAddressesResponse : PBObject


@property(nonatomic) NSString* page;

@property(nonatomic) NSString* candidates;

@property(nonatomic) NSArray<PBAddressesDTO>* addressList;

@end
