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


#import "PBGeoLocationPlace.h"
#import "PBNetwork.h"
#import "PBProxy.h"
@protocol PBGeoLocationPlace;
@class PBGeoLocationPlace;
@protocol PBNetwork;
@class PBNetwork;
@protocol PBProxy;
@class PBProxy;



@protocol PBIpInfo
@end

@interface PBIpInfo : PBObject


@property(nonatomic) NSString* ipAddress;

@property(nonatomic) PBProxy* proxy;

@property(nonatomic) PBNetwork* network;

@property(nonatomic) PBGeoLocationPlace* place;

@end
