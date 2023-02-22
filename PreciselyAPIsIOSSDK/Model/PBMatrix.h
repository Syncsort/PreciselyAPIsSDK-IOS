#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* The version of the OpenAPI document: 14.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "PBStartEndPoint.h"
@protocol PBStartEndPoint;
@class PBStartEndPoint;



@protocol PBMatrix
@end

@interface PBMatrix : PBObject


@property(nonatomic) NSNumber* distance;

@property(nonatomic) NSString* distanceUnit;

@property(nonatomic) PBStartEndPoint* endPoint;

@property(nonatomic) PBStartEndPoint* startPoint;

@property(nonatomic) NSNumber* time;

@property(nonatomic) NSString* timeUnit;

@end
