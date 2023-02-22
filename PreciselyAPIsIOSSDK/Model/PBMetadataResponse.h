#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 12.0.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBCategoryMetadata.h"
#import "PBSicMetadata.h"
@protocol PBCategoryMetadata;
@class PBCategoryMetadata;
@protocol PBSicMetadata;
@class PBSicMetadata;



@protocol PBMetadataResponse
@end

@interface PBMetadataResponse : PBObject


@property(nonatomic) NSArray<PBSicMetadata>* sic;

@property(nonatomic) NSArray<PBCategoryMetadata>* category;

@end