#import <Foundation/Foundation.h>

@class PBApiClient;

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


@protocol PBApi <NSObject>

@property(readonly, nonatomic, strong) PBApiClient *apiClient;

-(instancetype) initWithApiClient:(PBApiClient *)apiClient;

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key;
-(NSString*) defaultHeaderForKey:(NSString*)key;

-(NSDictionary *)defaultHeaders;

@end
