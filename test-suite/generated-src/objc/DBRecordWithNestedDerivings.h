// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#import "DBRecordWithDerivings.h"
#import <Foundation/Foundation.h>

@interface DBRecordWithNestedDerivings : NSObject
- (nonnull instancetype)initWithKey:(int32_t)key
                                rec:(nonnull DBRecordWithDerivings *)rec;
+ (nonnull instancetype)recordWithNestedDerivingsWithKey:(int32_t)key
                                                     rec:(nonnull DBRecordWithDerivings *)rec;

- (nonnull NSDictionary *) toDict;

@property (nonatomic, readonly) int32_t key;

@property (nonatomic, readonly, nonnull) DBRecordWithDerivings * rec;

- (NSComparisonResult)compare:(nonnull DBRecordWithNestedDerivings *)other;

@end
