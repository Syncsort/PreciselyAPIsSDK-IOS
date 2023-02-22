#import <Foundation/Foundation.h>
#import "PBErrorInfo.h"
#import "PBPropertyInfoAddressRequest.h"
#import "PBPropertyInfoResponse.h"
#import "PBPropertyInfoResponses.h"
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



@interface PBPropertyInformationServiceApi: NSObject <PBApi>

extern NSString* kPBPropertyInformationServiceApiErrorDomain;
extern NSInteger kPBPropertyInformationServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// PropertyV2 Attributes By Address.
/// GetPropertyAttributesbyAddress Endpoint will take address as an input and will return key property attributes in response. Optionally user will have the option to filter the attributes and will pay for only returned attributes.
///
/// @param address free form address text (optional)
/// @param attributes Case-insensitive comma separated values of property attributes. Response will contain only the input attributes. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPropertyInfoResponse*
-(NSURLSessionTask*) getPropertyAttributesByAddressWithAddress: (NSString*) address
    attributes: (NSString*) attributes
    completionHandler: (void (^)(PBPropertyInfoResponse* output, NSError* error)) handler;


/// PropertyV2 Attributes By Address Batch.
/// GetPropertyAttributesbyAddressBatch Endpoint will take the list of addresses as an input and will return key property attributes for the given addresses in response. Optionally user will have the option to filter the attributes and will pay for only returned attributes.
///
/// @param propertyInfoAddressRequest 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPropertyInfoResponses*
-(NSURLSessionTask*) getPropertyAttributesByAddressBatchWithPropertyInfoAddressRequest: (PBPropertyInfoAddressRequest*) propertyInfoAddressRequest
    completionHandler: (void (^)(PBPropertyInfoResponses* output, NSError* error)) handler;



@end
