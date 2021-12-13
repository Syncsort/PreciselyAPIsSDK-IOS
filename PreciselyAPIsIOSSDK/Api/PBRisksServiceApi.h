#import <Foundation/Foundation.h>
#import "PBCrimeRiskResponse.h"
#import "PBCrimeRiskByAddressRequest.h"
#import "PBCrimeRiskResponseList.h"
#import "PBCrimeRiskLocationResponse.h"
#import "PBCrimeRiskLocationResponseList.h"
#import "PBCrimeRiskByLocationRequest.h"
#import "PBWaterBodyResponse.h"
#import "PBDistanceToFloodHazardResponse.h"
#import "PBDistanceToFloodHazardAddressRequest.h"
#import "PBWaterBodyLocationResponse.h"
#import "PBDistanceToFloodHazardLocationRequest.h"
#import "PBDistanceToFloodHazardLocationResponse.h"
#import "PBEarthquakeHistory.h"
#import "PBEarthquakeRiskResponse.h"
#import "PBEarthquakeRiskResponseList.h"
#import "PBEarthquakeRiskByAddressRequest.h"
#import "PBEarthquakeRiskLocationResponse.h"
#import "PBEarthquakeRiskByLocationRequest.h"
#import "PBEarthquakeRiskLocationResponseList.h"
#import "PBFireHistory.h"
#import "PBFireRiskResponse.h"
#import "PBFireRiskByAddressRequest.h"
#import "PBFireRiskResponseList.h"
#import "PBFireRiskLocationResponse.h"
#import "PBFireRiskByLocationRequest.h"
#import "PBFireRiskLocationResponseList.h"
#import "PBFireStations.h"
#import "PBFireStationsLocation.h"
#import "PBFloodRiskResponse.h"
#import "PBFloodRiskByAddressRequest.h"
#import "PBFloodRiskResponseList.h"
#import "PBFloodRiskLocationResponse.h"
#import "PBFloodRiskByLocationRequest.h"
#import "PBFloodRiskLocationResponseList.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 11.7.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface PBRisksServiceApi: NSObject <PBApi>

extern NSString* kPBRisksServiceApiErrorDomain;
extern NSInteger kPBRisksServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Get Crime Risk By Address
/// Accepts addresses as input and Returns local crime indexes.
///
/// @param address Free-form address text.
/// @param type Type of crime like violent crime, property crime, etc., multiple crime type indexes could be requested as comma separated values with &#39;all&#39; as default.) (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBCrimeRiskResponse*
-(NSNumber*) getCrimeRiskByAddressWithAddress: (NSString*) address
    type: (NSString*) type
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBCrimeRiskResponse* output, NSError* error)) handler;


/// Post Crime Risk By Address
/// This is a Batch offering for 'Crime Risk By Address' service. It accepts a single address or a list of addresses and retrieve local crime indexes.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBCrimeRiskResponseList*
-(NSNumber*) getCrimeRiskByAddressBatchWithBody: (PBCrimeRiskByAddressRequest*) body
    completionHandler: (void (^)(PBCrimeRiskResponseList* output, NSError* error)) handler;


/// Get Crime Risk By Location
/// Returns the crime data or crime indexes for a given location.
///
/// @param longitude The longitude of the location
/// @param latitude The latitude of the location
/// @param type Refers to crime type. Valid values are following 11 crime types with &#39;all&#39; as default (more than one can also be given as comma separated types) (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBCrimeRiskLocationResponse*
-(NSNumber*) getCrimeRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    type: (NSString*) type
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBCrimeRiskLocationResponse* output, NSError* error)) handler;


/// Post Crime Risk By Location
/// This is a Batch offering for 'Crime Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve local crime indexes.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBCrimeRiskLocationResponseList*
-(NSNumber*) getCrimeRiskByLocationBatchWithBody: (PBCrimeRiskByLocationRequest*) body
    completionHandler: (void (^)(PBCrimeRiskLocationResponseList* output, NSError* error)) handler;


/// Get Distance To Flood Hazard By Address
/// Accepts addresses as input and Returns the distance from nearest water bodies along with body name and location.
///
/// @param address The address of the location
/// @param maxCandidates This specifies the value of maxCandidates (optional)
/// @param waterBodyType all (default value), oceanandsea,lake,others,unknown,intermittent (optional)
/// @param searchDistance This specifies the search distance (optional)
/// @param searchDistanceUnit miles (default value),feet, kilometers, meters (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBWaterBodyResponse*
-(NSNumber*) getDistanceToFloodHazardByAddressWithAddress: (NSString*) address
    maxCandidates: (NSString*) maxCandidates
    waterBodyType: (NSString*) waterBodyType
    searchDistance: (NSString*) searchDistance
    searchDistanceUnit: (NSString*) searchDistanceUnit
    completionHandler: (void (^)(PBWaterBodyResponse* output, NSError* error)) handler;


/// Post Distance To Flood Hazard By Address
/// This is a Batch offering for 'Distance To Flood Hazard By Address' service. It accepts a single address or a list of addresses and retrieve the distance from nearest water bodies along with body name and location.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBDistanceToFloodHazardResponse*
-(NSNumber*) getDistanceToFloodHazardByAddressBatchWithBody: (PBDistanceToFloodHazardAddressRequest*) body
    completionHandler: (void (^)(PBDistanceToFloodHazardResponse* output, NSError* error)) handler;


/// Get Distance To Flood Hazard By Location
/// Accepts latitude & longitude as input and Returns the distance from nearest water bodies along with body name and location.
///
/// @param longitude The longitude of the location
/// @param latitude The latitude of the location
/// @param maxCandidates This specifies the value of maxCandidates (optional)
/// @param waterBodyType all (default value), oceanandsea,lake,others,unknown,intermittent (optional)
/// @param searchDistance This specifies the search distance (optional)
/// @param searchDistanceUnit miles (default value),feet, kilometers, meters (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBWaterBodyLocationResponse*
-(NSNumber*) getDistanceToFloodHazardByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    maxCandidates: (NSString*) maxCandidates
    waterBodyType: (NSString*) waterBodyType
    searchDistance: (NSString*) searchDistance
    searchDistanceUnit: (NSString*) searchDistanceUnit
    completionHandler: (void (^)(PBWaterBodyLocationResponse* output, NSError* error)) handler;


/// Post Distance To Flood Hazard By Location
/// This is a Batch offering for 'Distance To Flood Hazard By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve the distance from nearest water bodies along with body name and location.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBDistanceToFloodHazardLocationResponse*
-(NSNumber*) getDistanceToFloodHazardByLocationBatchWithBody: (PBDistanceToFloodHazardLocationRequest*) body
    completionHandler: (void (^)(PBDistanceToFloodHazardLocationResponse* output, NSError* error)) handler;


/// Earthquake History
/// Accepts postcode as input and Returns historical earthquake details for a particular postcode.
///
/// @param postCode 5 digit Postal code to search
/// @param startDate Start time in milliseconds(UTC) (optional)
/// @param endDate End time in milliseconds(UTC) (optional)
/// @param minMagnitude Minimum richter scale magnitude (optional)
/// @param maxMagnitude Maximum Richter scale magnitude (optional)
/// @param maxCandidates Maximum response events (optional) (default to 1)
/// 
///  code:200 message:"successful operation"
///
/// @return PBEarthquakeHistory*
-(NSNumber*) getEarthquakeHistoryWithPostCode: (NSString*) postCode
    startDate: (NSString*) startDate
    endDate: (NSString*) endDate
    minMagnitude: (NSString*) minMagnitude
    maxMagnitude: (NSString*) maxMagnitude
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBEarthquakeHistory* output, NSError* error)) handler;


/// Get Earthquake Risk By Address
/// Accepts addresses as input and Returns counts of earthquakes for various richter measurements and values.
///
/// @param address Free-form address text
/// @param richterValue Richter values like R5 (count of richter scale 5 events), R7 (count of richter scale 7 events), R6_GE (count of events &gt;&#x3D; richter scale 6), etc., multiple richter scales could be requested as comma separated values with &#39;all&#39; as default. Valid values: All (default value), R0, R1, R2, R3, R4, R5, R6, R7, R0_GE, R1_GE, R2_GE, R3_GE, R4_GE, R5_GE, R6_GE, R7_GE (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBEarthquakeRiskResponse*
-(NSNumber*) getEarthquakeRiskByAddressWithAddress: (NSString*) address
    richterValue: (NSString*) richterValue
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBEarthquakeRiskResponse* output, NSError* error)) handler;


/// Post Earthquake Risk By Address
/// This is a Batch offering for 'Earthquake Risk By Address' service. It accepts a single address or a list of addresses and retrieve counts of earthquakes for various richter measurements and values.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBEarthquakeRiskResponseList*
-(NSNumber*) getEarthquakeRiskByAddressBatchWithBody: (PBEarthquakeRiskByAddressRequest*) body
    completionHandler: (void (^)(PBEarthquakeRiskResponseList* output, NSError* error)) handler;


/// Get Earthquake Risk By Location
/// Accepts latitude & longitude as input and Returns counts of earthquakes for various richter measurements and values.
///
/// @param longitude The longitude of the location
/// @param latitude The latitude of the location
/// @param richterValue Richter values like R5 (count of richter scale 5 events), R7 (count of richter scale 7 events), R6_GE (count of events &gt;&#x3D; richter scale 6), etc., multiple richter scales could be requested as comma separated values with &#39;all&#39; as default. Valid values: All (default value), R0, R1, R2, R3, R4, R5, R6, R7, R0_GE, R1_GE, R2_GE, R3_GE, R4_GE, R5_GE, R6_GE, R7_GE (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBEarthquakeRiskLocationResponse*
-(NSNumber*) getEarthquakeRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    richterValue: (NSString*) richterValue
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBEarthquakeRiskLocationResponse* output, NSError* error)) handler;


/// Post Earthquake Risk By Location
/// This is a Batch offering for 'Earthquake Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve counts of earthquakes for various richter measurements and values.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBEarthquakeRiskLocationResponseList*
-(NSNumber*) getEarthquakeRiskByLocationBatchWithBody: (PBEarthquakeRiskByLocationRequest*) body
    completionHandler: (void (^)(PBEarthquakeRiskLocationResponseList* output, NSError* error)) handler;


/// Get Fire History
/// Accepts postcode as input and Returns fire event details for a particular postcode.
///
/// @param postCode 5 digit Postal code to search
/// @param startDate Start time in milliseconds(UTC) (optional)
/// @param endDate End time in milliseconds(UTC) (optional)
/// @param maxCandidates Maximum response events (optional) (default to 1)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireHistory*
-(NSNumber*) getFireHistoryWithPostCode: (NSString*) postCode
    startDate: (NSString*) startDate
    endDate: (NSString*) endDate
    maxCandidates: (NSString*) maxCandidates
    completionHandler: (void (^)(PBFireHistory* output, NSError* error)) handler;


/// Get Fire Risk By Address
/// Accepts addresses as input and Returns fire risk data by risk types.
///
/// @param address Free-form address text
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireRiskResponse*
-(NSNumber*) getFireRiskByAddressWithAddress: (NSString*) address
    completionHandler: (void (^)(PBFireRiskResponse* output, NSError* error)) handler;


/// Post Fire Risk By Address
/// This is a Batch offering for 'Fire Risk By Address' service. It accepts a single address or a list of addresses and retrieve fire risk data by risk types.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireRiskResponseList*
-(NSNumber*) getFireRiskByAddressBatchWithBody: (PBFireRiskByAddressRequest*) body
    completionHandler: (void (^)(PBFireRiskResponseList* output, NSError* error)) handler;


/// Get Fire Risk By Location
/// Accepts latitude & longitude as input and Returns fire risk data by risk types.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireRiskLocationResponse*
-(NSNumber*) getFireRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    completionHandler: (void (^)(PBFireRiskLocationResponse* output, NSError* error)) handler;


/// Post Fire Risk By Location
/// This is a Batch offering for 'Fire Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve fire risk data by risk types.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireRiskLocationResponseList*
-(NSNumber*) getFireRiskByLocationBatchWithBody: (PBFireRiskByLocationRequest*) body
    completionHandler: (void (^)(PBFireRiskLocationResponseList* output, NSError* error)) handler;


/// Fire Station By Address
/// Accepts addresses as input and Returns nearest fire stations.
///
/// @param address The address to be searched.
/// @param maxCandidates Specifies the maximum number of fire stations that this service retrieves. The default value is 3 and maximum value is 5. The retrieved results are traveldistance sorted from the input location. (optional)
/// @param travelTime Max travel time from input location to fire station. Maximum allowed is 2 hours (optional)
/// @param travelTimeUnit Travel time unit such as minutes (default), hours, seconds or milliseconds. (optional)
/// @param travelDistance Maximum travel distance from input location to fire station. Maximum allowed is 50 miles (optional)
/// @param travelDistanceUnit Travel distance unit such as Feet (default), Kilometers, Miles or Meters. (optional)
/// @param sortBy Sort the fire stations results by either travel time or travel distance (nearest first). Default sorting is by travel time. (optional)
/// @param historicTrafficTimeBucket Historic traffic time slab (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireStations*
-(NSNumber*) getFireStationByAddressWithAddress: (NSString*) address
    maxCandidates: (NSString*) maxCandidates
    travelTime: (NSString*) travelTime
    travelTimeUnit: (NSString*) travelTimeUnit
    travelDistance: (NSString*) travelDistance
    travelDistanceUnit: (NSString*) travelDistanceUnit
    sortBy: (NSString*) sortBy
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    completionHandler: (void (^)(PBFireStations* output, NSError* error)) handler;


/// Fire Station By Location
/// Accepts latitude & longitude as input and Returns nearest fire stations.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// @param maxCandidates Specifies the maximum number of fire stations that this service retrieves. The default value is 3. The retrieved fire stations are distance ordered from the specified location. Maximum of 5 fire stations can be retrieved. (optional)
/// @param travelTime Maximum travel time from input location to fire station. Maximum allowed is 2 hours (optional)
/// @param travelTimeUnit Travel time unit such as minutes (default), hours, seconds or milliseconds. (optional)
/// @param travelDistance Maximum travel distance from input location to fire station. Maximum allowed is 50 miles (optional)
/// @param travelDistanceUnit Travel distance unit such as Feet (default), Kilometers, Miles or Meters. (optional)
/// @param sortBy Sorting of fire stations in result by travel time/distance (nearest first from input location). (optional)
/// @param historicTrafficTimeBucket Historic traffic time slab (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFireStationsLocation*
-(NSNumber*) getFireStationByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    maxCandidates: (NSString*) maxCandidates
    travelTime: (NSString*) travelTime
    travelTimeUnit: (NSString*) travelTimeUnit
    travelDistance: (NSString*) travelDistance
    travelDistanceUnit: (NSString*) travelDistanceUnit
    sortBy: (NSString*) sortBy
    historicTrafficTimeBucket: (NSString*) historicTrafficTimeBucket
    completionHandler: (void (^)(PBFireStationsLocation* output, NSError* error)) handler;


/// Get Flood Risk By Address
/// Accepts addresses as input and Returns flood risk data for flood zones and base flood elevation values.
///
/// @param address Free-text Address
/// @param includeZoneDesc Specifies primary zone description. Valid Values: &#39;Y&#39; or &#39;N&#39;. (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFloodRiskResponse*
-(NSNumber*) getFloodRiskByAddressWithAddress: (NSString*) address
    includeZoneDesc: (NSString*) includeZoneDesc
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFloodRiskResponse* output, NSError* error)) handler;


/// Post Flood Risk By Address
/// This is a Batch offering for 'Flood Risk By Address' service. It accepts a single address or a list of addresses and retrieve flood risk data for flood zones and base flood elevation values.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFloodRiskResponseList*
-(NSNumber*) getFloodRiskByAddressBatchWithBody: (PBFloodRiskByAddressRequest*) body
    completionHandler: (void (^)(PBFloodRiskResponseList* output, NSError* error)) handler;


/// Get Flood Risk By Location
/// Accepts latitude & longitude as input and Returns flood risk data for flood zones and base flood elevation values.
///
/// @param longitude Longitude of Location
/// @param latitude Latitude of Location
/// @param includeZoneDesc Specifies primary zone description. Valid Values: &#39;Y&#39; or &#39;N&#39;. Default: &#39;Y&#39; (optional)
/// @param includeGeometry Y or N (default is N) - if it is Y, then geometry will be part of response (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFloodRiskLocationResponse*
-(NSNumber*) getFloodRiskByLocationWithLongitude: (NSString*) longitude
    latitude: (NSString*) latitude
    includeZoneDesc: (NSString*) includeZoneDesc
    includeGeometry: (NSString*) includeGeometry
    completionHandler: (void (^)(PBFloodRiskLocationResponse* output, NSError* error)) handler;


/// Post Flood Risk By Location
/// This is a Batch offering for 'Flood Risk By Location' service. It accepts a single location coordinate or a list of location coordinates and retrieve flood risk data for flood zones and base flood elevation values.
///
/// @param body  (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBFloodRiskLocationResponseList*
-(NSNumber*) getFloodRiskByLocationBatchWithBody: (PBFloodRiskByLocationRequest*) body
    completionHandler: (void (^)(PBFloodRiskLocationResponseList* output, NSError* error)) handler;



@end
