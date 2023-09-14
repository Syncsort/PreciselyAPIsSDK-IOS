#import <Foundation/Foundation.h>
#import "PBCrimeRiskByAddressBatchRequest.h"
#import "PBCrimeRiskByLocationBatchRequest.h"
#import "PBCrimeRiskResponse.h"
#import "PBCrimeRiskResponseList.h"
#import "PBDistanceToFloodHazardAddressRequest.h"
#import "PBDistanceToFloodHazardLocationRequest.h"
#import "PBDistanceToFloodHazardResponse.h"
#import "PBEarthquakeHistory.h"
#import "PBEarthquakeRiskByAddressRequest.h"
#import "PBEarthquakeRiskByLocationRequest.h"
#import "PBEarthquakeRiskResponse.h"
#import "PBEarthquakeRiskResponseList.h"
#import "PBErrorInfo.h"
#import "PBFireHistory.h"
#import "PBFireRiskByAddressRequest.h"
#import "PBFireRiskByLocationRequest.h"
#import "PBFireRiskResponse.h"
#import "PBFireRiskResponseList.h"
#import "PBFireStations.h"
#import "PBFloodRiskByAddressRequest.h"
#import "PBFloodRiskByLocationRequest.h"
#import "PBFloodRiskResponse.h"
#import "PBFloodRiskResponseList.h"
#import "PBWaterBodyResponse.h"
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



@interface PBRisksServiceApi: NSObject <PBApi>

extern NSString* kPBRisksServiceApiErrorDomain;
extern NSInteger kPBRisksServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get Crime Risk By Address
/// Accepts addresses as input and Returns local crime indexes.
///
/// @param address free form address text
/// @param type this is crime type; valid values are following 11 crime types with &#39;all&#39; as default (more than one can also be given as comma separated types) (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBCrimeRiskResponse*
-(NSURLSessionTask*) getCrimeRiskByAddressWithAddress: (NSString*) address
    type: (NSString*) type
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBCrimeRiskResponse* output, NSError* error)) handler;


/// Post Crime Risk By Address
/// This is a Batch offering for 'Crime Risk By Address' service. It accepts a single address or a list of addresses and retrieve local crime indexes.
///
/// @param crimeRiskByAddressBatchRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBCrimeRiskResponseList*
-(NSURLSessionTask*) getCrimeRiskByAddressBatchWithCrimeRiskByAddressBatchRequest: (PBCrimeRiskByAddressBatchRequest*) crimeRiskByAddressBatchRequest
    completionHandler: (void (^)(PBCrimeRiskResponseList* output, NSError* error)) handler;


/// Get Crime Risk By  Location
/// Accepts latitude/longitude as input and returns and Returns local crime indexes.
///
/// @param longitude The longitude of the location
/// @param latitude The latitude of the location
/// @param type this is crime type; valid values are following 11 crime types with &#39;all&#39; as default (more than one can also be given as comma separated types) (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBCrimeRiskResponse*
-(NSURLSessionTask*) getCrimeRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    type: (NSString*) type
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBCrimeRiskResponse* output, NSError* error)) handler;


/// Post Crime Risk By Location
/// This is a Batch offering for 'Crime Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve local crime indexes.
///
/// @param crimeRiskByLocationBatchRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBCrimeRiskResponseList*
-(NSURLSessionTask*) getCrimeRiskByLocationBatchWithCrimeRiskByLocationBatchRequest: (PBCrimeRiskByLocationBatchRequest*) crimeRiskByLocationBatchRequest
    completionHandler: (void (^)(PBCrimeRiskResponseList* output, NSError* error)) handler;


/// Get Distance To Flood Hazard By Address
/// Accepts addresses as input and Returns the distance from nearest water bodies along with body name and location.
///
/// @param address The address of the location (optional)
/// @param maxCandidates This specifies the value of maxCandidates (optional)
/// @param waterBodyType This specifies the value of waterBodyType (optional)
/// @param searchDistance This specifies the search distance (optional)
/// @param searchDistanceUnit miles (default value),feet, kilometers, meters (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBWaterBodyResponse*
-(NSURLSessionTask*) getDistanceToCoastByAddressWithAddress: (NSString*) address
    maxCandidates: (NSString*) maxCandidates
    waterBodyType: (NSString*) waterBodyType
    searchDistance: (NSString*) searchDistance
    searchDistanceUnit: (NSString*) searchDistanceUnit
    completionHandler: (void (^)(PBWaterBodyResponse* output, NSError* error)) handler;


/// Post Distance To Flood Hazard By Address
/// This is a Batch offering for 'Distance To Flood Hazard By Address' service. It accepts a single address or a list of addresses and retrieve the distance from nearest water bodies along with body name and location.
///
/// @param distanceToFloodHazardAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBDistanceToFloodHazardResponse*
-(NSURLSessionTask*) getDistanceToCoastByAddressBatchWithDistanceToFloodHazardAddressRequest: (PBDistanceToFloodHazardAddressRequest*) distanceToFloodHazardAddressRequest
    completionHandler: (void (^)(PBDistanceToFloodHazardResponse* output, NSError* error)) handler;


/// Get Distance To Flood Hazard By Location
/// Accepts latitude & longitude as input and Returns the distance from nearest water bodies along with body name and location.
///
/// @param longitude The longitude of the location (optional)
/// @param latitude The latitude of the location (optional)
/// @param maxCandidates This specifies the value of maxCandidates (optional)
/// @param waterBodyType This specifies the value of waterBodyType (optional)
/// @param searchDistance This specifies the search distance (optional)
/// @param searchDistanceUnit miles (default value),feet, kilometers, meters (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBWaterBodyResponse*
-(NSURLSessionTask*) getDistanceToCoastByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    maxCandidates: (NSString*) maxCandidates
    waterBodyType: (NSString*) waterBodyType
    searchDistance: (NSString*) searchDistance
    searchDistanceUnit: (NSString*) searchDistanceUnit
    completionHandler: (void (^)(PBWaterBodyResponse* output, NSError* error)) handler;


/// Post Distance To Flood Hazard By Location
/// This is a Batch offering for 'Distance To Flood Hazard By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve the distance from nearest water bodies along with body name and location.
///
/// @param distanceToFloodHazardLocationRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBDistanceToFloodHazardResponse*
-(NSURLSessionTask*) getDistanceToCoastByLocationBatchWithDistanceToFloodHazardLocationRequest: (PBDistanceToFloodHazardLocationRequest*) distanceToFloodHazardLocationRequest
    completionHandler: (void (^)(PBDistanceToFloodHazardResponse* output, NSError* error)) handler;


/// Earthquake History
/// Accepts postcode as input and Returns historical earthquake details for a particular postcode.
///
/// @param postCode 5 digit Postal code to search
/// @param startDate Start time in milliseconds(UTC) (optional)
/// @param endDate End time in milliseconds(UTC) (optional)
/// @param minMagnitude Minimum richter scale magnitude (optional)
/// @param maxMagnitude Maximum Richter scale magnitude (optional)
/// @param maxCandidates Maximum response events (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBEarthquakeHistory*
-(NSURLSessionTask*) getEarthquakeHistoryWithPostCode: (NSString*) postCode
    startDate: (NSString*) startDate
    endDate: (NSString*) endDate
    minMagnitude: (NSString*) minMagnitude
    maxMagnitude: (NSString*) maxMagnitude
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBEarthquakeHistory* output, NSError* error)) handler;


/// Get Earthquake Risk By Address
/// Accepts addresses as input and Returns counts of earthquakes for various richter measurements and values.
///
/// @param address free form address text
/// @param richterValue all (default value), R0, R1, R2, R3, R4, R5, R6, R7, R0_GE, R1_GE, R2_GE, R3_GE, R4_GE, R5_GE, R6_GE, R7_GE (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBEarthquakeRiskResponse*
-(NSURLSessionTask*) getEarthquakeRiskByAddressWithAddress: (NSString*) address
    richterValue: (NSString*) richterValue
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBEarthquakeRiskResponse* output, NSError* error)) handler;


/// Post Earthquake Risk By Address
/// This is a Batch offering for 'Earthquake Risk By Address' service. It accepts a single address or a list of addresses and retrieve counts of earthquakes for various richter measurements and values.
///
/// @param earthquakeRiskByAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBEarthquakeRiskResponseList*
-(NSURLSessionTask*) getEarthquakeRiskByAddressBatchWithEarthquakeRiskByAddressRequest: (PBEarthquakeRiskByAddressRequest*) earthquakeRiskByAddressRequest
    completionHandler: (void (^)(PBEarthquakeRiskResponseList* output, NSError* error)) handler;


/// Get Earthquake Risk By Location
/// Accepts latitude & longitude as input and Returns counts of earthquakes for various richter measurements and values.
///
/// @param longitude The longitude of the location
/// @param latitude The latitude of the location
/// @param richterValue all (default value), R0, R1, R2, R3, R4, R5, R6, R7, R0_GE, R1_GE, R2_GE, R3_GE, R4_GE, R5_GE, R6_GE, R7_GE (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBEarthquakeRiskResponse*
-(NSURLSessionTask*) getEarthquakeRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    richterValue: (NSString*) richterValue
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBEarthquakeRiskResponse* output, NSError* error)) handler;


/// Post Earthquake Risk By Location
/// This is a Batch offering for 'Earthquake Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve counts of earthquakes for various richter measurements and values.
///
/// @param earthquakeRiskByLocationRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBEarthquakeRiskResponseList*
-(NSURLSessionTask*) getEarthquakeRiskByLocationBatchWithEarthquakeRiskByLocationRequest: (PBEarthquakeRiskByLocationRequest*) earthquakeRiskByLocationRequest
    completionHandler: (void (^)(PBEarthquakeRiskResponseList* output, NSError* error)) handler;


/// Get Fire History
/// Accepts postcode as input and Returns fire event details for a particular postcode.
///
/// @param postCode 5 digit Postal code to search
/// @param startDate Start time in milliseconds(UTC) (optional)
/// @param endDate End time in milliseconds(UTC) (optional)
/// @param maxCandidates Maximum response events (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireHistory*
-(NSURLSessionTask*) getFireHistoryWithPostCode: (NSString*) postCode
    startDate: (NSString*) startDate
    endDate: (NSString*) endDate
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBFireHistory* output, NSError* error)) handler;


/// Get Fire Risk By Address
/// Accepts addresses as input and Returns fire risk data by risk types.
///
/// @param address Free form address text
/// @param includeGeometry Flag to return Geometry default is N (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireRiskResponse*
-(NSURLSessionTask*) getFireRiskByAddressWithAddress: (NSString*) address
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFireRiskResponse* output, NSError* error)) handler;


/// Post Fire Risk By Address
/// This is a Batch offering for 'Fire Risk By Address' service. It accepts a single address or a list of addresses and retrieve fire risk data by risk types.
///
/// @param fireRiskByAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireRiskResponseList*
-(NSURLSessionTask*) getFireRiskByAddressBatchWithFireRiskByAddressRequest: (PBFireRiskByAddressRequest*) fireRiskByAddressRequest
    completionHandler: (void (^)(PBFireRiskResponseList* output, NSError* error)) handler;


/// Get Fire Risk By Location
/// Accepts latitude & longitude as input and Returns fire risk data by risk types.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// @param includeGeometry Flag to return Geometry default is N (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireRiskResponse*
-(NSURLSessionTask*) getFireRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFireRiskResponse* output, NSError* error)) handler;


/// Post Fire Risk By Location
/// This is a Batch offering for 'Fire Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve fire risk data by risk types.
///
/// @param fireRiskByLocationRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireRiskResponseList*
-(NSURLSessionTask*) getFireRiskByLocationBatchWithFireRiskByLocationRequest: (PBFireRiskByLocationRequest*) fireRiskByLocationRequest
    completionHandler: (void (^)(PBFireRiskResponseList* output, NSError* error)) handler;


/// Get Fire Station By Address
/// Accepts addresses as input and Returns nearest fire stations.
///
/// @param address Free Address
/// @param maxCandidates Specifies the maximum number of fire stations that this service retrieves. The default value is 3 and maximum value is 5. The retrieved results are traveldistance sorted from the input location. (optional)
/// @param travelTime Max travel time from input location to fire station. Maximum allowed is 2 hours (optional)
/// @param travelTimeUnit minutes (default), hours, seconds, milliseconds (optional)
/// @param travelDistance Max travel distance from input location to fire station. Maximum allowed is 50 miles (optional)
/// @param travelDistanceUnit Feet (default), Kilometers, Miles, Meters (optional)
/// @param sortBy time (default), distance (optional)
/// @param historicTrafficTimeBucket Historic traffic time slab (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireStations*
-(NSURLSessionTask*) getFireStationByAddressWithAddress: (NSString*) address
    maxCandidates: (NSString*) maxCandidates
    travelTime: (NSString*) travelTime
    travelTimeUnit: (NSString*) travelTimeUnit
    travelDistance: (NSString*) travelDistance
    travelDistanceUnit: (NSString*) travelDistanceUnit
    sortBy: (NSString*) sortBy
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    completionHandler: (void (^)(PBFireStations* output, NSError* error)) handler;


/// Get Fire Station By Location
/// Accepts latitude & longitude as input and Returns nearest fire stations.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// @param maxCandidates Specifies the maximum number of fire stations that this service retrieves. The default value is 3 and maximum value is 5. The retrieved results are traveldistance sorted from the input location. (optional)
/// @param travelTime Max travel time from input location to fire station. Maximum allowed is 2 hours (optional)
/// @param travelTimeUnit minutes (default), hours, seconds, milliseconds (optional)
/// @param travelDistance Max travel distance from input location to fire station. Maximum allowed is 50 miles (optional)
/// @param travelDistanceUnit Feet (default), Kilometers, Miles, Meters (optional)
/// @param sortBy time (default), distance (optional)
/// @param historicTrafficTimeBucket Historic traffic time slab (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFireStations*
-(NSURLSessionTask*) getFireStationByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    maxCandidates: (NSString*) maxCandidates
    travelTime: (NSString*) travelTime
    travelTimeUnit: (NSString*) travelTimeUnit
    travelDistance: (NSString*) travelDistance
    travelDistanceUnit: (NSString*) travelDistanceUnit
    sortBy: (NSString*) sortBy
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    completionHandler: (void (^)(PBFireStations* output, NSError* error)) handler;


/// Get Flood Risk By Address
/// Accepts addresses as input and Returns flood risk data for flood zones and base flood elevation values.
///
/// @param address Free text Address
/// @param includeZoneDesc Flag to return zone description (optional)
/// @param includeGeometry Flag to return Geometry (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFloodRiskResponse*
-(NSURLSessionTask*) getFloodRiskByAddressWithAddress: (NSString*) address
    includeZoneDesc: (NSString*) includeZoneDesc
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFloodRiskResponse* output, NSError* error)) handler;


/// Post Flood Risk By Address
/// This is a Batch offering for 'Flood Risk By Address' service. It accepts a single address or a list of addresses and retrieve flood risk data for flood zones and base flood elevation values.
///
/// @param floodRiskByAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFloodRiskResponseList*
-(NSURLSessionTask*) getFloodRiskByAddressBatchWithFloodRiskByAddressRequest: (PBFloodRiskByAddressRequest*) floodRiskByAddressRequest
    completionHandler: (void (^)(PBFloodRiskResponseList* output, NSError* error)) handler;


/// Get Flood Risk By Location
/// Accepts latitude & longitude as input and Returns flood risk data for flood zones and base flood elevation values.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// @param includeZoneDesc Flag to return zone description (optional)
/// @param includeGeometry Flag to return Geometry (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFloodRiskResponse*
-(NSURLSessionTask*) getFloodRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    includeZoneDesc: (NSString*) includeZoneDesc
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFloodRiskResponse* output, NSError* error)) handler;


/// Post Flood Risk By Location
/// This is a Batch offering for 'Flood Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve flood risk data for flood zones and base flood elevation values.
///
/// @param floodRiskByLocationRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBFloodRiskResponseList*
-(NSURLSessionTask*) getFloodRiskByLocationBatchWithFloodRiskByLocationRequest: (PBFloodRiskByLocationRequest*) floodRiskByLocationRequest
    completionHandler: (void (^)(PBFloodRiskResponseList* output, NSError* error)) handler;



@end
