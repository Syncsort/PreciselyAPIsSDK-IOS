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



@protocol PBRisk
@end

@interface PBRisk : PBObject


@property(nonatomic) NSString* type;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSNumber* risk50Rating;

@property(nonatomic) NSNumber* frequency;

@property(nonatomic) NSString* nonburn;

@property(nonatomic) NSNumber* pastFires;

@property(nonatomic) NSNumber* severity;

@property(nonatomic) NSString* continuity;

@property(nonatomic) NSString* adjustment;

@property(nonatomic) NSString* aspect;

@property(nonatomic) NSString* crownFire;

@property(nonatomic) NSString* vegetation;

@property(nonatomic) NSString* foehn;

@property(nonatomic) NSString* golfCourse;

@property(nonatomic) NSString* roadDist;

@property(nonatomic) NSString* slope;

@property(nonatomic) NSString* waterDist;

@property(nonatomic) NSString* tier;

@property(nonatomic) NSString* tierDescription;

@property(nonatomic) NSNumber* distanceToFireStation;

@end