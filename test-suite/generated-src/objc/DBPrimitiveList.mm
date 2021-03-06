// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primitive_list.djinni

#import "DBPrimitiveList.h"


@implementation DBPrimitiveList

- (nonnull instancetype)initWithList:(nonnull NSArray<NSNumber *> *)list
{
    if (self = [super init]) {
        _list = list;
    }
    return self;
}

+ (nonnull instancetype)primitiveListWithList:(nonnull NSArray<NSNumber *> *)list
{
    return [[self alloc] initWithList:list];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p list:%@>", self.class, self, self.list];
}

@end
