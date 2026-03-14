//
// WCPLTypeGuard.m
//

#import "WCPLTypeGuard.h"
#import "WCPLPureHelpers.h"

BOOL WCPLIsString(id value) {
    return [value isKindOfClass:[NSString class]];
}

BOOL WCPLIsArray(id value) {
    return [value isKindOfClass:[NSArray class]];
}

BOOL WCPLIsDictionary(id value) {
    return [value isKindOfClass:[NSDictionary class]];
}

NSString *WCPLStringOrNil(id value) {
    return WCPLIsString(value) ? (NSString *)value : nil;
}

NSString *WCPLNonEmptyStringOrNil(id value) {
    return WCPLTrimText(WCPLStringOrNil(value));
}

NSArray *WCPLArrayOrNil(id value) {
    return WCPLIsArray(value) ? (NSArray *)value : nil;
}

NSDictionary *WCPLDictionaryOrNil(id value) {
    return WCPLIsDictionary(value) ? (NSDictionary *)value : nil;
}

NSArray<NSString *> *WCPLArrayOfStringsOrNil(id value) {
    NSArray *array = WCPLArrayOrNil(value);
    if (array.count == 0) {
        return nil;
    }

    NSMutableArray<NSString *> *results = [NSMutableArray arrayWithCapacity:array.count];
    for (id item in array) {
        NSString *text = WCPLNonEmptyStringOrNil(item);
        if (text.length > 0) {
            [results addObject:text];
        }
    }

    return results.count > 0 ? results.copy : nil;
}
