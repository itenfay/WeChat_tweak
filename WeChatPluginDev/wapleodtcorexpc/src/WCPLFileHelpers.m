//
// WCPLFileHelpers.m
//

#import "WCPLFileHelpers.h"

static NSDictionary<NSFileAttributeKey, id> * _Nullable wcpl_fileAttributesAtPath(NSString * _Nullable path) {
    if (![path isKindOfClass:[NSString class]] || path.length == 0) {
        return nil;
    }

    NSDictionary<NSFileAttributeKey, id> *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:path
                                                                                                      error:nil];
    return [attributes isKindOfClass:[NSDictionary class]] ? attributes : nil;
}

unsigned long long WCPLFileSizeAtPath(NSString * _Nullable path) {
    NSDictionary<NSFileAttributeKey, id> *attributes = wcpl_fileAttributesAtPath(path);
    NSNumber *sizeObj = [attributes[NSFileSize] isKindOfClass:[NSNumber class]] ? attributes[NSFileSize] : nil;
    return sizeObj ? sizeObj.unsignedLongLongValue : 0;
}

BOOL WCPLFileIsRegularNonEmptyAtPath(NSString * _Nullable path, unsigned long long *sizeOut) {
    if (sizeOut) {
        *sizeOut = 0;
    }

    NSDictionary<NSFileAttributeKey, id> *attributes = wcpl_fileAttributesAtPath(path);
    NSString *fileType = [attributes[NSFileType] isKindOfClass:[NSString class]] ? attributes[NSFileType] : nil;
    if (![fileType isEqualToString:NSFileTypeRegular]) {
        return NO;
    }

    NSNumber *sizeObj = [attributes[NSFileSize] isKindOfClass:[NSNumber class]] ? attributes[NSFileSize] : nil;
    unsigned long long size = sizeObj ? sizeObj.unsignedLongLongValue : 0;
    if (sizeOut) {
        *sizeOut = size;
    }
    return size > 0;
}
