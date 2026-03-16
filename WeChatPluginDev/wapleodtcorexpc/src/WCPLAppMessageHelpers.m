//
// WCPLAppMessageHelpers.m
//

#import "WCPLAppMessageHelpers.h"

#import "WCPLObjcSafeCall.h"
#import "WCPLPureHelpers.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLLogger.h"

#import <objc/message.h>
#import <objc/runtime.h>

static const void *kWCPLAppMsgInnerTypeCacheKey = &kWCPLAppMsgInnerTypeCacheKey;
static const void *kWCPLAppMsgQuoteCacheKey = &kWCPLAppMsgQuoteCacheKey;
static const void *kWCPLAppMsgMergedForwardCacheKey = &kWCPLAppMsgMergedForwardCacheKey;
static const void *kWCPLAppMsgFileCacheKey = &kWCPLAppMsgFileCacheKey;
static const void *kWCPLAppMsgEmoticonCacheKey = &kWCPLAppMsgEmoticonCacheKey;

static inline BOOL wcpl_isAppMsgWrap(CMessageWrap *msgWrap) {
    return ([msgWrap isKindOfClass:objc_lookUpClass("CMessageWrap")] && msgWrap.m_uiMessageType == 49);
}

static NSNumber *wcpl_numberOrNil(id value) {
    return [value isKindOfClass:[NSNumber class]] ? (NSNumber *)value : nil;
}

static BOOL wcpl_stringContainsAnyMarker(NSString *xml, NSArray<NSString *> *markers) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
        return NO;
    }
    if (![markers isKindOfClass:[NSArray class]] || markers.count == 0) {
        return NO;
    }

    NSString *prefix = xml;
    if (prefix.length > 4096) {
        prefix = [prefix substringToIndex:4096];
    }

    for (NSString *marker in markers) {
        if (![marker isKindOfClass:[NSString class]] || marker.length == 0) {
            continue;
        }
        if ([prefix rangeOfString:marker options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

NSInteger WCPLAppMessageInnerType(CMessageWrap *msgWrap) {
    if (!wcpl_isAppMsgWrap(msgWrap)) {
        return 0;
    }

    NSNumber *cached = wcpl_numberOrNil(objc_getAssociatedObject(msgWrap, kWCPLAppMsgInnerTypeCacheKey));
    if (cached) {
        return cached.integerValue;
    }

    NSInteger innerType = 0;

    SEL selectors[] = {
        NSSelectorFromString(@"appMsgInnerType"),
        NSSelectorFromString(@"uiAppMsgInnerType"),
        NSSelectorFromString(@"m_uiAppMsgInnerType"),
        NSSelectorFromString(@"appMsgType"),
        NSSelectorFromString(@"uiAppMsgType"),
        NSSelectorFromString(@"m_uiAppMsgType")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL sel = selectors[idx];
        if (!(sel && [msgWrap respondsToSelector:sel])) {
            continue;
        }
        @try {
            NSUInteger value = ((NSUInteger (*)(id, SEL))objc_msgSend)(msgWrap, sel);
            if (value > 0 && value < 10000) {
                innerType = (NSInteger)value;
                break;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (innerType <= 0) {
        NSArray<NSString *> *kvcKeys = @[
            @"m_uiAppMsgInnerType",
            @"uiAppMsgInnerType",
            @"appMsgInnerType",
            @"m_uiAppMsgType",
            @"uiAppMsgType",
            @"appMsgType"
        ];
        for (NSString *key in kvcKeys) {
            id value = WCPLSafeValueForKey(msgWrap, key);
            if ([value isKindOfClass:[NSNumber class]]) {
                innerType = [(NSNumber *)value integerValue];
            } else if ([value isKindOfClass:[NSString class]]) {
                innerType = [(NSString *)value integerValue];
            } else {
                innerType = 0;
            }
            if (innerType > 0 && innerType < 10000) {
                break;
            }
        }
    }

    objc_setAssociatedObject(msgWrap,
                             kWCPLAppMsgInnerTypeCacheKey,
                             @(innerType),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return innerType;
}

BOOL WCPLIsMergedForwardAppMessage(CMessageWrap *msgWrap) {
    if (!wcpl_isAppMsgWrap(msgWrap)) {
        return NO;
    }

    NSNumber *cached = wcpl_numberOrNil(objc_getAssociatedObject(msgWrap, kWCPLAppMsgMergedForwardCacheKey));
    if (cached) {
        return cached.boolValue;
    }

    BOOL mergedForward = (WCPLAppMessageInnerType(msgWrap) == 19);
    if (!mergedForward) {
        NSString *content = msgWrap.m_nsContent;
        NSString *prefix = [content isKindOfClass:[NSString class]] ? content : nil;
        if (prefix.length > 0) {
            if (prefix.length > 4096) {
                prefix = [prefix substringToIndex:4096];
            }

            BOOL hasRecordMarkers =
                [prefix rangeOfString:@"<recorditem" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<datalist" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<recordxml" options:NSCaseInsensitiveSearch].location != NSNotFound;
            BOOL hasType19 =
                [prefix rangeOfString:@"<type>19</type>" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<type><![CDATA[19]]></type>" options:NSCaseInsensitiveSearch].location != NSNotFound;
            mergedForward = hasRecordMarkers || hasType19;
        }
    }

    objc_setAssociatedObject(msgWrap,
                             kWCPLAppMsgMergedForwardCacheKey,
                             @(mergedForward),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return mergedForward;
}

BOOL WCPLIsQuoteReplyAppMessage(CMessageWrap *msgWrap) {
    if (!wcpl_isAppMsgWrap(msgWrap)) {
        return NO;
    }

    NSNumber *cached = wcpl_numberOrNil(objc_getAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey));
    if (cached) {
        return cached.boolValue;
    }

    if (WCPLIsMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    static NSArray<NSString *> *markers = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        markers = @[
            @"<refermsg",
            @"<refer_msg",
            @"<type>57</type>",
            @"<type><![CDATA[57]]></type>",
            @"<referfromscene",
            @"<referfromusername",
            @"<refermsgsvrid"
        ];
    });

    if (wcpl_stringContainsAnyMarker(content, markers)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decodedContent = WCPLDecodeBasicXMLEntities(content);
    if (decodedContent.length > 0 &&
        ![decodedContent isEqualToString:content] &&
        wcpl_stringContainsAnyMarker(decodedContent, markers)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    BOOL isQuote = (WCPLQuoteReferServerIDFromContent(content) > 0);
    objc_setAssociatedObject(msgWrap, kWCPLAppMsgQuoteCacheKey, @(isQuote), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return isQuote;
}

BOOL WCPLIsFileAppMessage(CMessageWrap *msgWrap) {
    if (!wcpl_isAppMsgWrap(msgWrap)) {
        return NO;
    }

    NSNumber *cached = wcpl_numberOrNil(objc_getAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey));
    if (cached) {
        return cached.boolValue;
    }

    if (WCPLIsMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    BOOL (^looksLikeFileType)(NSString *) = ^BOOL(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return NO;
        }

        BOOL hasFileTypeMarker =
            [xml rangeOfString:@"<type>6</type>" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [xml rangeOfString:@"<type><![CDATA[6]]></type>" options:NSCaseInsensitiveSearch].location != NSNotFound;
        if (!hasFileTypeMarker) {
            return NO;
        }

        return [xml rangeOfString:@"<appattach" options:NSCaseInsensitiveSearch].location != NSNotFound ||
               [xml rangeOfString:@"<fileext" options:NSCaseInsensitiveSearch].location != NSNotFound ||
               [xml rangeOfString:@"<totallen" options:NSCaseInsensitiveSearch].location != NSNotFound;
    };

    if (looksLikeFileType(content)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decoded = WCPLDecodeBasicXMLEntities(content);
    if (decoded.length > 0 && ![decoded isEqualToString:content] && looksLikeFileType(decoded)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLAppMsgFileCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

BOOL WCPLIsAppEmoticonMessage(CMessageWrap *msgWrap) {
    if (!wcpl_isAppMsgWrap(msgWrap)) {
        return NO;
    }

    NSNumber *cached = wcpl_numberOrNil(objc_getAssociatedObject(msgWrap, kWCPLAppMsgEmoticonCacheKey));
    if (cached) {
        return cached.boolValue;
    }

    if (WCPLIsMergedForwardAppMessage(msgWrap) || WCPLIsQuoteReplyAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgEmoticonCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *md5 = WCPLTrimText(msgWrap.m_nsEmoticonMD5);
    if (md5.length == 32) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgEmoticonCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLAppMsgEmoticonCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    BOOL found =
        [content rangeOfString:@"<emoji" options:NSCaseInsensitiveSearch].location != NSNotFound ||
        [content rangeOfString:@"<emoticon" options:NSCaseInsensitiveSearch].location != NSNotFound;
    objc_setAssociatedObject(msgWrap, kWCPLAppMsgEmoticonCacheKey, @(found), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return found;
}

