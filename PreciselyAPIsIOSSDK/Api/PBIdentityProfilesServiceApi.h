#import <Foundation/Foundation.h>
#import "PBIdentityResponse.h"
#import "PBIdentity.h"
#import "PBApi.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 10.0.0
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


@interface PBIdentityProfilesServiceApi: NSObject <PBApi>

extern NSString* kPBIdentityProfilesServiceApiErrorDomain;
extern NSInteger kPBIdentityProfilesServiceApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Identities By Address
/// Accepts an Address as input and returns rich localized Identity profiles, demographics, lifestyle segmentations, neighborhood names, property ownership & values, and social affinity insights from twitter, linkedin, and more along with education, job history and other identity information.
///
/// @param address free form address text
/// @param confidence To adjust quality threshold of data returned. Default is HIGH (optional)
/// @param maxCandidates Number of identities returned in response (optional)
/// @param theme theme parameter for filtering results (optional)
/// @param filter filter params (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBIdentityResponse*
-(NSNumber*) getIdentityByAddressWithAddress: (NSString*) address
    confidence: (NSString*) confidence
    maxCandidates: (NSString*) maxCandidates
    theme: (NSString*) theme
    filter: (NSString*) filter
    completionHandler: (void (^)(PBIdentityResponse* output, NSError* error)) handler;


/// Identity By Email
/// Accepts an Email address as input and returns rich localized Identity profiles and social affinity insights from twitter, linkedin, and more along with education, job history and other identity information.
///
/// @param email This specifies the email address
/// @param confidence To adjust quality threshold of data returned. Default is HIGH (optional)
/// @param theme theme parameter for filtering results (optional)
/// @param filter filter params (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBIdentity*
-(NSNumber*) getIdentityByEmailWithEmail: (NSString*) email
    confidence: (NSString*) confidence
    theme: (NSString*) theme
    filter: (NSString*) filter
    completionHandler: (void (^)(PBIdentity* output, NSError* error)) handler;


/// Identity By Twitter
/// Accepts a Twiiter handle as input and returns rich localized Identity profiles and social affinity insights from twitter, linkedin, and more along with education, job history and other identity information.
///
/// @param twitter Twitter handle of the identity.
/// @param confidence To adjust quality threshold of data returned. Default is HIGH (optional)
/// @param theme theme parameter for filtering results (optional)
/// @param filter filter params (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return PBIdentity*
-(NSNumber*) getIdentityByTwitterWithTwitter: (NSString*) twitter
    confidence: (NSString*) confidence
    theme: (NSString*) theme
    filter: (NSString*) filter
    completionHandler: (void (^)(PBIdentity* output, NSError* error)) handler;



@end
