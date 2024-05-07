#import <Foundation/Foundation.h>
#import "PBErrorInfo.h"
#import "PBPhoneVerification.h"
#import "PBValidatePhoneNumberAPIRequest.h"
#import "PBApi.h"

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



@interface PBPhoneVerificationServiceApi: NSObject <PBApi>

extern NSString* kPBPhoneVerificationServiceApiErrorDomain;
extern NSInteger kPBPhoneVerificationServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Phone verification.
/// This service accepts a phone number as input and returns details distinguishing landline and wireless numbers.
///
/// @param validatePhoneNumberAPIRequest 
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Bad Request",
///  code:500 message:"Internal Server Error"
///
/// @return PBPhoneVerification*
-(NSURLSessionTask*) validatephonenumberWithValidatePhoneNumberAPIRequest: (PBValidatePhoneNumberAPIRequest*) validatePhoneNumberAPIRequest
    completionHandler: (void (^)(PBPhoneVerification* output, NSError* error)) handler;



@end
