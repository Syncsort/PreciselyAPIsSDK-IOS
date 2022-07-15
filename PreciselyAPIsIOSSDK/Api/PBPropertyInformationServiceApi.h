#import <Foundation/Foundation.h>
#import "PBErrorInfo.h"
#import "PBPropertyInfoResponse.h"
#import "PBPropertyInfoResponses.h"
#import "PBPropertyInfoAddressRequest.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 11.9.4
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


@interface PBPropertyInformationServiceApi: NSObject <PBApi>

extern NSString* kPBPropertyInformationServiceApiErrorDomain;
extern NSInteger kPBPropertyInformationServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// PropertyV2 Attributes By Address.
/// GetPropertyAttributesbyAddress Endpoint will take address as an input and will return key property attributes in response. Optionally user will have the option to filter the attributes and will pay for only returned attributes.
///
/// @param address free form address text (optional)
/// @param attributes Case-insensitive comma separated values of property attributes. Response will contain only the input attributes. (optional)
/// 
///  code:200 message:"default response",
///  code:400 message:"default response"
///
/// @return PBPropertyInfoResponse*
-(NSNumber*) getPropertyAttributesByAddressWithAddress: (NSString*) address
    attributes: (NSString*) attributes
    completionHandler: (void (^)(PBPropertyInfoResponse* output, NSError* error)) handler;


/// PropertyV2 Attributes By Address Batch.
/// GetPropertyAttributesbyAddressBatch Endpoint will take the list of addresses as an input and will return key property attributes for the given addresses in response. Optionally user will have the option to filter the attributes and will pay for only returned attributes.
///
/// @param body  (optional)
/// 
///  code:200 message:"default response",
///  code:400 message:"default response"
///
/// @return PBPropertyInfoResponses*
-(NSNumber*) getPropertyAttributesByAddressBatchWithBody: (PBPropertyInfoAddressRequest*) body
    completionHandler: (void (^)(PBPropertyInfoResponses* output, NSError* error)) handler;



@end
