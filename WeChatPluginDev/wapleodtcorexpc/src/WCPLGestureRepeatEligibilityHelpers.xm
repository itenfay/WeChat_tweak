// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static BOOL wcpl_isQuoteReplyAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }
    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    BOOL (^containsQuoteMarkers)(NSString *) = ^BOOL(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return NO;
        }

        NSArray<NSString *> *markers = @[
            @"<refermsg",
            @"<refer_msg",
            @"<type>57</type>",
            @"<type><![CDATA[57]]></type>",
            @"<referfromscene",
            @"<referfromusername",
            @"<refermsgsvrid"
        ];

        for (NSString *marker in markers) {
            if ([xml rangeOfString:marker options:NSCaseInsensitiveSearch].location != NSNotFound) {
                return YES;
            }
        }
        return NO;
    };

    if (containsQuoteMarkers(content)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decodedContent = wcpl_decodeBasicXMLEntities(content);
    if (decodedContent.length > 0 && ![decodedContent isEqualToString:content] && containsQuoteMarkers(decodedContent)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    BOOL isQuote = (wcpl_quoteReferServerIDFromContent(content) > 0);
    objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(isQuote), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return isQuote;
}

static BOOL wcpl_isFileAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decoded = wcpl_decodeBasicXMLEntities(content);
    if (decoded.length > 0 && ![decoded isEqualToString:content] && looksLikeFileType(decoded)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

static BOOL wcpl_isAppEmoticonMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }
    if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *md5 = nil;
    if ([msgWrap.m_nsEmoticonMD5 isKindOfClass:[NSString class]]) {
        md5 = [msgWrap.m_nsEmoticonMD5 stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    }
    if (md5.length == 32) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    if ([content rangeOfString:@"<emoji" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }
    if ([content rangeOfString:@"<emoticon" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

static NSInteger wcpl_appMessageInnerTypeFast(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return 0;
    }

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
        if (![msgWrap respondsToSelector:sel]) {
            continue;
        }
        @try {
            NSUInteger value = ((NSUInteger (*)(id, SEL))objc_msgSend)(msgWrap, sel);
            if (value > 0 && value < 10000) {
                return (NSInteger)value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *kvcKeys = @[
        @"m_uiAppMsgInnerType",
        @"uiAppMsgInnerType",
        @"appMsgInnerType",
        @"m_uiAppMsgType",
        @"uiAppMsgType",
        @"appMsgType"
    ];
    for (NSString *key in kvcKeys) {
        @try {
            id value = [msgWrap valueForKey:key];
            NSInteger innerType = 0;
            if ([value isKindOfClass:[NSNumber class]]) {
                innerType = [(NSNumber *)value integerValue];
            } else if ([value isKindOfClass:[NSString class]]) {
                innerType = [(NSString *)value integerValue];
            }
            if (innerType > 0 && innerType < 10000) {
                return innerType;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return 0;
}

static BOOL wcpl_isMergedForwardAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatMergedForwardCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }

    BOOL mergedForward = NO;
    NSInteger innerType = wcpl_appMessageInnerTypeFast(msgWrap);
    if (innerType == 19) {
        mergedForward = YES;
    }

    if (!mergedForward) {
        NSString *content = msgWrap.m_nsContent;
        if ([content isKindOfClass:[NSString class]] && content.length > 0) {
            NSString *prefix = content;
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

    objc_setAssociatedObject(msgWrap, kWCPLRepeatMergedForwardCacheKey, @(mergedForward), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return mergedForward;
}

static BOOL wcpl_isMediaBubbleRepeatMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }
    if (msgWrap.m_uiMessageType == 3 ||
        msgWrap.m_uiMessageType == 43 ||
        msgWrap.m_uiMessageType == 47) {
        return YES;
    }
    if (msgWrap.m_uiMessageType == 49 && wcpl_isAppEmoticonMessage(msgWrap)) {
        return YES;
    }
    return NO;
}

static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    if (msgWrap.m_uiMessageType == 1) {
        return wcpl_trimTextForRepeat(msgWrap.m_nsContent);
    }
    if (msgWrap.m_uiMessageType == 3) {
        return @"[图片]";
    }
    if (msgWrap.m_uiMessageType == 34) {
        return @"[语音]";
    }
    if (msgWrap.m_uiMessageType == 43) {
        return @"[视频]";
    }
    if (msgWrap.m_uiMessageType == 47) {
        return @"[表情]";
    }
    if (msgWrap.m_uiMessageType == 49) {
        if (wcpl_isMergedForwardAppMessage(msgWrap)) {
            return nil;
        }
        // 引用文件消息的 refer 内容里可能包含 <type>6，需优先识别为引用。
        if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
            NSString *quoteTitle = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
            if (quoteTitle.length > 0) {
                return quoteTitle;
            }
            return @"[引用]";
        }
        if (wcpl_isFileAppMessage(msgWrap)) {
            return nil;
        }
        if (wcpl_isAppEmoticonMessage(msgWrap)) {
            return @"[表情]";
        }
        return nil;
    }
    return nil;
}

static NSString *wcpl_repeatTypeName(unsigned int msgType) {
    switch (msgType) {
        case 1: return @"文本";
        case 3: return @"图片";
        case 34: return @"语音";
        case 43: return @"视频";
        case 47: return @"表情";
        case 49: return @"引用";
        default: return [NSString stringWithFormat:@"未知(%u)", msgType];
    }
}

static BOOL wcpl_isRepeatTypeEnabledByConfig(WCPLGestureConfig *config, CMessageWrap *msgWrap) {
    if (!msgWrap || !config) {
        return NO;
    }

    switch (msgWrap.m_uiMessageType) {
        case 1:
            return YES;
        case 3:
            return config.repeatSupportImageEnable;
        case 34:
            return config.repeatSupportVoiceEnable;
        case 43:
            return config.repeatSupportVideoEnable;
        case 47:
            return config.repeatSupportEmoticonEnable;
        case 49: {
            if (wcpl_isMergedForwardAppMessage(msgWrap)) {
                return NO;
            }
            // 引用文件消息外层是引用(type=57)，仅 refer 内层可能出现文件(type=6)。
            // 先判引用，避免“引用文件”被误拦截为“文件消息”。
            if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
                return YES;
            }
            if (wcpl_isFileAppMessage(msgWrap)) {
                return NO;
            }
            if (config.repeatSupportEmoticonEnable && wcpl_isAppEmoticonMessage(msgWrap)) {
                return YES;
            }
            return NO;
        }
        default:
            return NO;
    }
}

