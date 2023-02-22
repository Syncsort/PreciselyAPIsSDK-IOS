#import <Foundation/Foundation.h>
#import "PBBasicBoundary.h"
#import "PBErrorInfo.h"
#import "PBPOIBoundaryAddressRequest.h"
#import "PBPOIBoundaryLocationRequest.h"
#import "PBPOIBoundaryResponse.h"
#import "PBPoiBoundary.h"
#import "PBTravelBoundaries.h"
#import "PBApi.h"

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



@interface PBZonesServiceApi: NSObject <PBApi>

extern NSString* kPBZonesServiceApiErrorDomain;
extern NSInteger kPBZonesServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Gets Basic Boundary by Address.
/// Gets Basic Boundary by Address.
///
/// @param address Address around which Basic Boundary is requested
/// @param country Three digit ISO country code (optional)
/// @param distance  (optional)
/// @param distanceUnit  (optional)
/// @param resolution This is resolution of the buffer. Curves generated in buffer are approximated by line segments and it is measured in segments per circle. The higher the resolution, the smoother the curves of the buffer but more points would be required in the boundary geometry. Number greater than 0 and in multiple of 4. If not in 4, then it is approximated to nearest multiple of 4. (optional)
/// @param responseSrs  (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBBasicBoundary*
-(NSURLSessionTask*) getBasicBoundaryByAddressWithAddress: (NSString*) address
    country: (NSString*) country
    distance: (NSString*) distance
    distanceUnit: (NSString*) distanceUnit
    resolution: (NSString*) resolution
    responseSrs: (NSString*) responseSrs
    completionHandler: (void (^)(PBBasicBoundary* output, NSError* error)) handler;


/// Gets Basic Boundary by Location.
/// Gets Basic Boundary by Location.
///
/// @param latitude Latitude around which Basic Boundary is requested
/// @param longitude Longitude around which Basic Boundary is requested
/// @param distance This is width of the buffer (in a complete circular buffer, it would be radius of the buffer). This has to be a positive number.
/// @param distanceUnit  (optional)
/// @param resolution This is resolution of the buffer. Curves generated in buffer are approximated by line segments and it is measured in segments per circle. The higher the resolution, the smoother the curves of the buffer but more points would be required in the boundary geometry. Number greater than 0 and in multiple of 4. If not in 4, then it is approximated to nearest multiple of 4. (optional)
/// @param responseSrs  (optional)
/// @param srsName  (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBBasicBoundary*
-(NSURLSessionTask*) getBasicBoundaryByLocationWithLatitude: (NSString*) latitude
    longitude: (NSString*) longitude
    distance: (NSString*) distance
    distanceUnit: (NSString*) distanceUnit
    resolution: (NSString*) resolution
    responseSrs: (NSString*) responseSrs
    srsName: (NSString*) srsName
    completionHandler: (void (^)(PBBasicBoundary* output, NSError* error)) handler;


/// Gets Point of Interests Boundary by Address.
/// Gets Point of Interests Boundary by Address.
///
/// @param address Address around which POI Boundary is requested
/// @param categoryCode Specific Category/Categories Codes for the desired POIs. Accepts a mix of 4 digit (Top Category), 6 digit (Second-Level Category) and 11 digit (Low-Level Category) Category Codes. (optional)
/// @param sicCode Specify starting digits or full sic code to filter the response (optional)
/// @param naicsCode Will accept naicsCode to filter POIs in results. Max 10 allowed. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPoiBoundary*
-(NSURLSessionTask*) getPOIBoundaryByAddressWithAddress: (NSString*) address
    categoryCode: (NSString*) categoryCode
    sicCode: (NSString*) sicCode
    naicsCode: (NSString*) naicsCode
    completionHandler: (void (^)(PBPoiBoundary* output, NSError* error)) handler;


/// Batch method for getting Point of Interests Boundary by Address.
/// Batch method for getting Point of Interests Boundary by Address.
///
/// @param pOIBoundaryAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPOIBoundaryResponse*
-(NSURLSessionTask*) getPOIBoundaryByAddressBatchWithPOIBoundaryAddressRequest: (PBPOIBoundaryAddressRequest*) pOIBoundaryAddressRequest
    completionHandler: (void (^)(PBPOIBoundaryResponse* output, NSError* error)) handler;


/// Get Point of Interests Boundary by Location.
/// Get Point of Interests Boundary by Location.
///
/// @param latitude Latitude around which POI Boundary is requested
/// @param longitude Longitude around which POI Boundary is requested
/// @param categoryCode Specific Category/Categories Codes for the desired POIs. Accepts a mix of 4 digit (Top Category), 6 digit (Second-Level Category) and 11 digit (Low-Level Category) Category Codes (optional)
/// @param sicCode Specify starting digits or full sic code to filter the response (optional)
/// @param naicsCode Will accept naicsCode to filter POIs in results. Max 10 allowed. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPoiBoundary*
-(NSURLSessionTask*) getPOIBoundaryByLocationWithLatitude: (NSString*) latitude
    longitude: (NSString*) longitude
    categoryCode: (NSString*) categoryCode
    sicCode: (NSString*) sicCode
    naicsCode: (NSString*) naicsCode
    completionHandler: (void (^)(PBPoiBoundary* output, NSError* error)) handler;


/// Batch method for getting Point of Interests Boundary by Location.
/// Batch method for getting Point of Interests Boundary by Location.
///
/// @param pOIBoundaryLocationRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPOIBoundaryResponse*
-(NSURLSessionTask*) getPOIBoundaryByLocationBatchWithPOIBoundaryLocationRequest: (PBPOIBoundaryLocationRequest*) pOIBoundaryLocationRequest
    completionHandler: (void (^)(PBPOIBoundaryResponse* output, NSError* error)) handler;


/// Get TravelBoundary By Distance.
/// Returns the travel boundary based on travel distance.
///
/// @param point Starting point from where the travel boundary is calculated. Point in Lat,Long,coordsys format (optional)
/// @param address Address around which Basic Boundary is requested. (optional)
/// @param costs Travel time used to calculate the travel boundary. (optional)
/// @param costUnit Travel time unit such as min(Minute), h(Hour), s(Second) or msec(Millisecond). (optional)
/// @param db Mode of commute. (optional)
/// @param country 3 character ISO code or country name. (optional)
/// @param maxOffroadDistance Maximum distance to allow travel off the road network. (optional)
/// @param maxOffroadDistanceUnit MaxOffroad Distance Unit such as ft(Foot), km(Kilometer), mi(Mile), m(Meter) or yd(Yard). (optional)
/// @param destinationSrs Desired coordinate system of the travel boundary. (optional)
/// @param majorRoads Whether to include all roads in the calculation or just major roads. (optional) (default to @"true")
/// @param returnHoles Whether to return holes, which are areas within the larger boundary that cannot be reached within the desired time (optional)
/// @param returnIslands Whether to return islands, which are small areas outside the main boundary that can be reached within the desired time (optional)
/// @param simplificationFactor Number between 0.0 and 1.0 where 0.0 is very simple and 1.0 means the most complex (optional)
/// @param bandingStyle Style of banding to be used in the result (optional)
/// @param historicTrafficTimeBucket Whether routing calculation uses the historic traffic speeds (optional)
/// @param defaultAmbientSpeed The speed to travel when going off a network road to find the travel boundary (for all road types). (optional)
/// @param ambientSpeedUnit The unit of measure to use to calculate the ambient speed. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBTravelBoundaries*
-(NSURLSessionTask*) getTravelBoundaryByDistanceWithPoint: (NSString*) point
    address: (NSString*) address
    costs: (NSString*) costs
    costUnit: (NSString*) costUnit
    db: (NSString*) db
    country: (NSString*) country
    maxOffroadDistance: (NSString*) maxOffroadDistance
    maxOffroadDistanceUnit: (NSString*) maxOffroadDistanceUnit
    destinationSrs: (NSString*) destinationSrs
    majorRoads: (NSString*) majorRoads
    returnHoles: (NSString*) returnHoles
    returnIslands: (NSString*) returnIslands
    simplificationFactor: (NSString*) simplificationFactor
    bandingStyle: (NSString*) bandingStyle
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    defaultAmbientSpeed: (NSString*) defaultAmbientSpeed
    ambientSpeedUnit: (NSString*) ambientSpeedUnit
    completionHandler: (void (^)(PBTravelBoundaries* output, NSError* error)) handler;


/// Get TravelBoundary By Time.
/// Travel boundary based on travel time.
///
/// @param point Starting point from where the travel boundary is calculated. Point in Lat,Long,coordsys format (optional)
/// @param address Starting address from where the travel boundary is calculated. (optional)
/// @param costs Travel time used to calculate the travel boundary. (optional)
/// @param costUnit Travel time unit such as min(Minute), h(Hour), s(Second) or msec(Millisecond). (optional)
/// @param db Mode of commute. (optional)
/// @param country 3 character ISO code or country name. (optional)
/// @param maxOffroadDistance Maximum distance to allow travel off the road network. (optional)
/// @param maxOffroadDistanceUnit MaxOffroad Distance Unit such as ft(Foot), km(Kilometer), mi(Mile), m(Meter) or yd(Yard). (optional)
/// @param destinationSrs Desired coordinate system of the travel boundary. (optional)
/// @param majorRoads Whether to include all roads in the calculation or just major roads. (optional) (default to @"true")
/// @param returnHoles Whether to return holes, which are areas within the larger boundary that cannot be reached within the desired time (optional)
/// @param returnIslands Whether to return islands, which are small areas outside the main boundary that can be reached within the desired time (optional)
/// @param simplificationFactor Number between 0.0 and 1.0 where 0.0 is very simple and 1.0 means the most complex (optional)
/// @param bandingStyle Style of banding to be used in the result (optional)
/// @param historicTrafficTimeBucket Whether routing calculation uses the historic traffic speeds (optional)
/// @param defaultAmbientSpeed The speed to travel when going off a network road to find the travel boundary (for all road types). (optional)
/// @param ambientSpeedUnit The unit of measure to use to calculate the ambient speed. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBTravelBoundaries*
-(NSURLSessionTask*) getTravelBoundaryByTimeWithPoint: (NSString*) point
    address: (NSString*) address
    costs: (NSString*) costs
    costUnit: (NSString*) costUnit
    db: (NSString*) db
    country: (NSString*) country
    maxOffroadDistance: (NSString*) maxOffroadDistance
    maxOffroadDistanceUnit: (NSString*) maxOffroadDistanceUnit
    destinationSrs: (NSString*) destinationSrs
    majorRoads: (NSString*) majorRoads
    returnHoles: (NSString*) returnHoles
    returnIslands: (NSString*) returnIslands
    simplificationFactor: (NSString*) simplificationFactor
    bandingStyle: (NSString*) bandingStyle
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    defaultAmbientSpeed: (NSString*) defaultAmbientSpeed
    ambientSpeedUnit: (NSString*) ambientSpeedUnit
    completionHandler: (void (^)(PBTravelBoundaries* output, NSError* error)) handler;



@end
