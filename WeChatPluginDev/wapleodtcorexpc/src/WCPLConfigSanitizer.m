//
// WCPLConfigSanitizer.m
//

#import "WCPLConfigSanitizer.h"
#import "WCPLPureHelpers.h"

NSArray<NSString *> *WCPLSanitizeUserNameArray(id value) {
    return WCPLSanitizeIdentifierArray(value);
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
        NSString *name = WCPLTrimText(key);
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

