#import <Foundation/Foundation.h>
#import "PBObject.h"

/**
* Precisely APIs
* Enhance & enrich your data, applications, business processes, and workflows with rich location, information, and identify APIs.
*
* OpenAPI spec version: 9.5.0
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

#import "PBValidateMailingAddressInputRowUserFields.h"


@protocol PBValidateMailingAddressInputRow
@end

@interface PBValidateMailingAddressInputRow : PBObject

/* These fields are returned, unmodified, in the user_fields section of the response. [optional]
 */
@property(nonatomic) NSArray<PBValidateMailingAddressInputRowUserFields>* userFields;
/* The first address line. [optional]
 */
@property(nonatomic) NSString* addressLine1;
/* The second address line. [optional]
 */
@property(nonatomic) NSString* addressLine2;
/* The company or firm name. [optional]
 */
@property(nonatomic) NSString* firmName;
/* The city name. [optional]
 */
@property(nonatomic) NSString* city;
/* The state or province. [optional]
 */
@property(nonatomic) NSString* stateProvince;
/* The country code or name. [optional]
 */
@property(nonatomic) NSString* country;
/* The postal code for the address. [optional]
 */
@property(nonatomic) NSString* postalCode;

@end
