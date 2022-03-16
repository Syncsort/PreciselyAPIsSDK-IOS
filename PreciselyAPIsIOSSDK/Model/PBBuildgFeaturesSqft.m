#import "PBBuildgFeaturesSqft.h"

@implementation PBBuildgFeaturesSqft

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"featureAreaSqft": @"featureAreaSqft", @"areaIndicator": @"areaIndicator", @"description": @"_description" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"featureAreaSqft", @"areaIndicator", @"_description"];
  return [optionalProperties containsObject:propertyName];
}

@end
