#import "WCPLRedEnvelopRequestParser.h"

#import "HongBaoReq.h"
#import "HongBaoRes.h"
#import "SKBuiltinBuffer_t.h"
#import "WCBizUtil.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLWeChatCompatibilityHeaders.h"
#import <objc/message.h>
#import <objc/runtime.h>

static int wcpl_redEnvelopParserIntFromSelector(id obj, SEL sel) {
    if (!(obj && sel && [obj respondsToSelector:sel])) return 0;
    @try {
        return ((int (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static NSString *wcpl_redEnvelopParserStringFromSelector(id obj, SEL sel) {
    if (!(obj && sel && [obj respondsToSelector:sel])) return nil;
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
        return [value isKindOfClass:[NSString class]] ? WCPLTrimText(value) : nil;
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSDictionary *wcpl_redEnvelopDictionaryFromJSONString(NSString *text) {
    NSString *value = WCPLTrimText(text);
    if (value.length == 0) return nil;
    NSDictionary *dict = nil;
    @try {
        dict = [value JSONDictionary];
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

NSString *WCPLRedEnvelopStringForKeyInDictionary(NSDictionary *dict, NSString *key) {
    if (!([dict isKindOfClass:[NSDictionary class]] && key.length > 0)) return nil;
    id value = dict[key];
    if ([value isKindOfClass:[NSString class]]) return WCPLTrimText(value);
    if (![value respondsToSelector:@selector(stringValue)]) return nil;
    @try {
        return WCPLTrimText([value stringValue]);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

NSString *WCPLRedEnvelopStringForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys) {
    if (![keys isKindOfClass:[NSArray class]]) return nil;
    for (NSString *key in keys) {
        NSString *value = WCPLRedEnvelopStringForKeyInDictionary(dict, key);
        if (value.length > 0) return value;
    }
    return nil;
}

NSInteger WCPLRedEnvelopIntegerForKeysInDictionary(NSDictionary *dict,
                                                   NSArray<NSString *> *keys,
                                                   BOOL *found) {
    if (found) {
        *found = NO;
    }
    if (!([dict isKindOfClass:[NSDictionary class]] && [keys isKindOfClass:[NSArray class]])) return 0;
    for (NSString *key in keys) {
        id value = dict[key];
        if (!value || value == [NSNull null]) continue;
        if (found) *found = YES;
        if (![value respondsToSelector:@selector(integerValue)]) return 0;
        @try {
            return [value integerValue];
        } @catch (__unused NSException *exception) {
            return 0;
        }
    }
    return 0;
}

NSDictionary *WCPLRedEnvelopDictionaryFromQueryString(NSString *text) {
    NSString *value = WCPLTrimText(text);
    if (value.length == 0) return nil;
    if ([value hasPrefix:@"?"] && value.length > 1) value = [value substringFromIndex:1];
    NSDictionary *dict = nil;
    @try {
        Class bizUtilClass = objc_getClass("WCBizUtil");
        if (bizUtilClass && [bizUtilClass respondsToSelector:@selector(dictionaryWithDecodedComponets:separator:)]) {
            dict = ((id (*)(id, SEL, id, id))objc_msgSend)(bizUtilClass,
                                                            @selector(dictionaryWithDecodedComponets:separator:),
                                                            value,
                                                            @"&");
        }
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

NSDictionary *WCPLRedEnvelopDictionaryFromNativeUrlString(NSString *nativeUrl) {
    NSString *normalized = WCPLTrimText(nativeUrl);
    if (normalized.length == 0) return nil;
    NSDictionary *dict = WCPLRedEnvelopDictionaryFromQueryString(normalized);
    if (dict.count > 0) return dict;
    NSRange qmark = [normalized rangeOfString:@"?"];
    if (qmark.location == NSNotFound || qmark.location + 1 >= normalized.length) return nil;
    return WCPLRedEnvelopDictionaryFromQueryString([normalized substringFromIndex:qmark.location + 1]);
}

NSDictionary *WCPLRedEnvelopDictionaryFromHongbaoBuffer(SKBuiltinBuffer_t *buffer) {
    Class bufferClass = objc_getClass("SKBuiltinBuffer_t");
    if (!(bufferClass && [buffer isKindOfClass:bufferClass])) return nil;
    NSData *data = buffer.buffer;
    if (![data isKindOfClass:[NSData class]] || data.length == 0) return nil;
    NSString *text = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    if (text.length == 0) text = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
    if (text.length == 0) return nil;
    NSDictionary *dict = wcpl_redEnvelopDictionaryFromJSONString(text);
    if (dict.count > 0) return dict;
    return WCPLRedEnvelopDictionaryFromQueryString(text);
}

NSDictionary *WCPLRedEnvelopNativeUrlDictionaryFromRequestDictionary(NSDictionary *requestDict) {
    NSString *nativeUrl = WCPLRedEnvelopStringForKeysInDictionary(requestDict,
                                                                  @[@"nativeUrl", @"nativeurl", @"native_url"]);
    NSString *decodedNativeUrl = [nativeUrl stringByRemovingPercentEncoding] ?: nativeUrl;
    return WCPLRedEnvelopDictionaryFromNativeUrlString(WCPLTrimText(decodedNativeUrl));
}

static unsigned int wcpl_redEnvelopCommandIdFromKeys(id obj, NSArray<NSString *> *keys) {
    for (NSString *key in keys) {
        @try {
            id value = [obj valueForKey:key];
            if ([value respondsToSelector:@selector(unsignedIntValue)]) return [value unsignedIntValue];
            if ([value respondsToSelector:@selector(intValue)]) {
                int intValue = [value intValue];
                if (intValue > 0) return (unsigned int)intValue;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    return 0;
}

unsigned int WCPLRedEnvelopCommandId(HongBaoRes *res, HongBaoReq *req) {
    unsigned int cmd = 0;
    @try {
        if (req && [req respondsToSelector:@selector(cgiCmd)]) cmd = req.cgiCmd;
    } @catch (__unused NSException *exception) {
        cmd = 0;
    }
    if (cmd == 0 && req) cmd = wcpl_redEnvelopCommandIdFromKeys(req, @[@"cgiCmd", @"cgiCmdId", @"cgiCmdid", @"cmdId", @"cmdid"]);
    if (cmd == 0) {
        @try {
            if (res && [res respondsToSelector:@selector(cgiCmdid)]) cmd = (unsigned int)res.cgiCmdid;
        } @catch (__unused NSException *exception) {
            cmd = 0;
        }
    }
    if (cmd == 0 && res) cmd = wcpl_redEnvelopCommandIdFromKeys(res, @[@"cgiCmdid", @"cgiCmdId", @"cgiCmd", @"cmdId", @"cmdid"]);
    return cmd;
}

BOOL WCPLRedEnvelopOpenResponseLooksSuccessful(NSDictionary *responseDict,
                                               HongBaoRes *res,
                                               NSInteger *amountOut,
                                               NSInteger *totalAmountOut,
                                               NSInteger *receiveStatusOut,
                                               NSInteger *retCodeOut) {
    BOOL hasReceiveStatus = NO;
    NSInteger receiveStatus = WCPLRedEnvelopIntegerForKeysInDictionary(responseDict,
                                                                       @[@"receiveStatus", @"receive_status"],
                                                                       &hasReceiveStatus);
    BOOL hasRetCode = NO;
    NSInteger retCode = WCPLRedEnvelopIntegerForKeysInDictionary(responseDict,
                                                                 @[@"retCode", @"retcode"],
                                                                 &hasRetCode);
    if (!hasRetCode && [res respondsToSelector:@selector(retCode)]) {
        hasRetCode = YES;
        retCode = wcpl_redEnvelopParserIntFromSelector(res, @selector(retCode));
    } else if (!hasRetCode && [res respondsToSelector:@selector(retcode)]) {
        hasRetCode = YES;
        retCode = wcpl_redEnvelopParserIntFromSelector(res, @selector(retcode));
    }
    BOOL hasAmount = NO;
    NSInteger amount = WCPLRedEnvelopIntegerForKeysInDictionary(responseDict,
                                                                @[@"amount", @"receiveAmount", @"receive_amount", @"recvAmount", @"recv_amount"],
                                                                &hasAmount);
    BOOL hasTotalAmount = NO;
    NSInteger totalAmount = WCPLRedEnvelopIntegerForKeysInDictionary(responseDict,
                                                                     @[@"totalAmount", @"total_amount", @"totalFee", @"total_fee", @"totalMoney", @"total_money", @"hbTotalAmount", @"hb_total_amount"],
                                                                     &hasTotalAmount);
    int errorType = wcpl_redEnvelopParserIntFromSelector(res, @selector(errorType));
    int platRet = wcpl_redEnvelopParserIntFromSelector(res, @selector(platRet));
    BOOL success = ((errorType == 0 && platRet == 0) &&
                    ((hasReceiveStatus && receiveStatus == 2) ||
                     (hasAmount && amount > 0) ||
                     (hasRetCode && retCode == 0)));
    if (!success) {
        BOOL hasUsefulPayload = (responseDict.count > 0 || hasRetCode || hasReceiveStatus || hasAmount);
        success = ((errorType == 0 && platRet == 0) &&
                   hasUsefulPayload &&
                   (retCode == 0 || receiveStatus == 2 || amount > 0));
    }
    if (amountOut) *amountOut = amount;
    if (totalAmountOut) *totalAmountOut = hasTotalAmount ? totalAmount : 0;
    if (receiveStatusOut) *receiveStatusOut = receiveStatus;
    if (retCodeOut) *retCodeOut = retCode;
    return success;
}

void WCPLLogRedEnvelopCommonErrorResponse(NSString *tag, id resObj, id reqObj) {
    unsigned int cmdId = WCPLRedEnvelopCommandId((HongBaoRes *)resObj, (HongBaoReq *)reqObj);
    NSDictionary *requestDict = nil;
    @try {
        if (reqObj && [reqObj respondsToSelector:@selector(reqText)]) {
            id buf = ((id (*)(id, SEL))objc_msgSend)(reqObj, @selector(reqText));
            requestDict = WCPLRedEnvelopDictionaryFromHongbaoBuffer((SKBuiltinBuffer_t *)buf);
        }
    } @catch (__unused NSException *exception) {
        requestDict = nil;
    }
    NSString *sendId = WCPLRedEnvelopStringForKeyInDictionary(requestDict, @"sendId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(requestDict, @"sendid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(requestDict, @"send_id");
    NSString *timingIdentifier = WCPLRedEnvelopStringForKeyInDictionary(requestDict, @"timingIdentifier")
        ?: WCPLRedEnvelopStringForKeyInDictionary(requestDict, @"timing_identifier");
    int errorType = wcpl_redEnvelopParserIntFromSelector(resObj, @selector(errorType));
    int platRet = wcpl_redEnvelopParserIntFromSelector(resObj, @selector(platRet));
    NSString *errorMsg = wcpl_redEnvelopParserStringFromSelector(resObj, @selector(errorMsg));
    NSString *platMsg = wcpl_redEnvelopParserStringFromSelector(resObj, @selector(platMsg));
    WCPLLogDebug(@"红包%@回包: cmd=%u sendId=%@ timing=%@ errorType=%d platRet=%d errorMsg=%@ platMsg=%@ res=%@ req=%@",
                 WCPLTrimText(tag) ?: @"错误",
                 cmdId,
                 sendId ?: @"",
                 timingIdentifier ?: @"",
                 errorType,
                 platRet,
                 WCPLSanitizeInlineText(errorMsg, 120) ?: @"",
                 WCPLSanitizeInlineText(platMsg, 120) ?: @"",
                 resObj ? NSStringFromClass([resObj class]) : @"",
                 reqObj ? NSStringFromClass([reqObj class]) : @"");
}
