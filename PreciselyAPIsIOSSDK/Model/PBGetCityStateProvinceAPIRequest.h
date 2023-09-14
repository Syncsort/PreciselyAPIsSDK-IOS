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


#import "PBGetCityStateProvinceAPIInput.h"
#import "PBGetCityStateProvinceAPIOptions.h"
@protocol PBGetCityStateProvinceAPIInput;
@class PBGetCityStateProvinceAPIInput;
@protocol PBGetCityStateProvinceAPIOptions;
@class PBGetCityStateProvinceAPIOptions;



@protocol PBGetCityStateProvinceAPIRequest
@end

@interface PBGetCityStateProvinceAPIRequest : PBObject


@property(nonatomic) PBGetCityStateProvinceAPIOptions* options;

@property(nonatomic) PBGetCityStateProvinceAPIInput* input;

@end
