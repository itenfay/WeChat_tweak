//
// WCPLUserNameHelpers.m
//

#import "WCPLUserNameHelpers.h"

#import "WCPLPureHelpers.h"

BOOL WCPLIsFileHelperUserName(NSString *userName) {
    NSString *trimmed = WCPLTrimText(userName);
    if (trimmed.length == 0) {
        return NO;
    }
    return [trimmed caseInsensitiveCompare:@"filehelper"] == NSOrderedSame;
}

