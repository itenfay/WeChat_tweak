//
// WCPLConfigSanitizer.m
//

#import "WCPLConfigSanitizer.h"

NSArray<NSString *> *WCPLSanitizeUserNameArray(id value) {
    if (![value isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in (NSArray *)value) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *name = [(NSString *)obj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (name.length > 0) {
            [results addObject:name];
        }
    }
    return results.array;
}

NSDictionary<NSString *, NSNumber *> *WCPLSanitizeIgnoreDictionary(id value) {
    if (![value isKindOfClass:[NSDictionary class]]) {
        return @{};
    }

    NSMutableDictionary<NSString *, NSNumber *> *result = [NSMutableDictionary dictionary];
    [(NSDictionary *)value enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        if (![key isKindOfClass:[NSString class]]) {
            return;
        }
        NSString *name = [(NSString *)key stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (name.length == 0) {
            return;
        }

        BOOL enabled = NO;
        if ([obj respondsToSelector:@selector(boolValue)]) {
            enabled = [obj boolValue];
        }
        if (enabled) {
            result[name] = @(YES);
        }
    }];
    return result;
}

