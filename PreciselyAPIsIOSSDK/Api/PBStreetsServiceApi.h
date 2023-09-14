#import <Foundation/Foundation.h>
#import "PBErrorInfo.h"
#import "PBIntersectionResponse.h"
#import "PBSpeedLimit.h"
#import "PBApi.h"

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



@interface PBStreetsServiceApi: NSObject <PBApi>

extern NSString* kPBStreetsServiceApiErrorDomain;
extern NSInteger kPBStreetsServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Nearest Intesection By Address.
/// This service accepts an address as input and returns the Nearest Intersection.
///
/// @param address Address (optional)
/// @param roadClass Filters roads with specified class, allowed values are (Major, Secondary, Other and All), default is All (optional)
/// @param driveTime Returns Intersection in specified drive time (optional)
/// @param driveTimeUnit Drive time unit, allowed values are (hours, minutes, seconds and milliseconds), default is minutes (optional)
/// @param searchRadius Search radius within which user wants to search, default is 50 miles (optional)
/// @param searchRadiusUnit Search radius unit, allowed values are (feet, meter, kilometers and miles) (optional)
/// @param historicSpeed Traffic flow in peak time, allowed values are (AMPEAK,PMPEAK,OFFPEAK,NIGHT) (optional)
/// @param maxCandidates max candidates to be returned default is 1 (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBIntersectionResponse*
-(NSURLSessionTask*) getIntersectionByAddressWithAddress: (NSString*) address
    roadClass: (NSString*) roadClass
    driveTime: (NSString*) driveTime
    driveTimeUnit: (NSString*) driveTimeUnit
    searchRadius: (NSString*) searchRadius
    searchRadiusUnit: (NSString*) searchRadiusUnit
    historicSpeed: (NSString*) historicSpeed
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBIntersectionResponse* output, NSError* error)) handler;


/// Nearest Intesection By Location.
/// This service accepts latitude/longitude as input and returns the Nearest Intersection.
///
/// @param longitude Longitude of the location. (optional)
/// @param latitude Latitude of the location. (optional)
/// @param roadClass Filters roads with specified class, allowed values are (Major, Secondary, Other and All), default is All (optional)
/// @param driveTime Returns Intersection in specified drive time (optional)
/// @param driveTimeUnit Drive time unit, allowed values are (hours, minutes, seconds and milliseconds), default is minutes (optional)
/// @param searchRadius Search radius within which user wants to search, default is 50 miles (optional)
/// @param searchRadiusUnit Search radius unit, allowed values are (feet, meter, kilometers and miles) (optional)
/// @param historicSpeed Traffic flow in peak time, allowed values are (AMPEAK,PMPEAK,OFFPEAK,NIGHT) (optional)
/// @param maxCandidates max candidates to be returned default is 1 (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBIntersectionResponse*
-(NSURLSessionTask*) getIntersectionByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    roadClass: (NSString*) roadClass
    driveTime: (NSString*) driveTime
    driveTimeUnit: (NSString*) driveTimeUnit
    searchRadius: (NSString*) searchRadius
    searchRadiusUnit: (NSString*) searchRadiusUnit
    historicSpeed: (NSString*) historicSpeed
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBIntersectionResponse* output, NSError* error)) handler;


/// Nearest Speedlimit.
/// This service accepts point coordinates of a path as input and returns the posted speed limit of the road segment on which this path will snap.
///
/// @param path Accepts multiple points which will be snapped to the nearest road segment. Longitude and Latitude will be comma separated (longitude,latitude) and Point Coordinates will be separated by semi-colon(;) (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBSpeedLimit*
-(NSURLSessionTask*) getNearestSpeedLimitWithPath: (NSString*) path
    completionHandler: (void (^)(PBSpeedLimit* output, NSError* error)) handler;



@end
