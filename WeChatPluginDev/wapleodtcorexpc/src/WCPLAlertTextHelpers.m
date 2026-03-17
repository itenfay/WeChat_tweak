//
// WCPLAlertTextHelpers.m
//

#import "WCPLAlertTextHelpers.h"

#import "WCPLPureHelpers.h"

static NSString *wcpl_stripWrappedQuotes(NSString *text) {
    NSString *value = WCPLTrimText(text);
    if (value.length < 2) {
        return value;
    }

    NSArray<NSArray<NSString *> *> *quotePairs = @[
        @[@"\"", @"\""],
        @[@"“", @"”"],
        @[@"'", @"'"],
        @[@"‘", @"’"]
    ];
    for (NSArray<NSString *> *pair in quotePairs) {
        NSString *left = pair.firstObject;
        NSString *right = pair.lastObject;
        if ([value hasPrefix:left] && [value hasSuffix:right] && value.length > left.length + right.length) {
            return [value substringWithRange:NSMakeRange(left.length,
                                                         value.length - left.length - right.length)];
        }
    }
    return value;
}

NSString *WCPLSanitizeInlineText(NSString *text, NSUInteger maxLen) {
    NSString *value = WCPLTrimText(text);
    if (value.length == 0) {
        return nil;
    }

    value = [[value stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
             stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    if (maxLen > 0 && value.length > maxLen) {
        value = [[value substringToIndex:maxLen] stringByAppendingString:@"…"];
    }
    return value;
}

NSString *WCPLExtractRevokerNameFromReplaceText(NSString *replaceText) {
    NSString *text = WCPLTrimText(replaceText);
    if (text.length == 0) {
        return nil;
    }

    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(?:\\\"|“)([^\\\"”]+?)(?:\\\"|”)撤回了"
                                                                           options:0
                                                                             error:&error];
    if (!error && regex) {
        NSTextCheckingResult *match = [regex firstMatchInString:text options:0 range:NSMakeRange(0, text.length)];
        if (match.numberOfRanges >= 2) {
            NSString *name = [text substringWithRange:[match rangeAtIndex:1]];
            return WCPLSanitizeInlineText(wcpl_stripWrappedQuotes(name), 40);
        }
    }

    NSRange revokeRange = [text rangeOfString:@"撤回了一条消息"];
    if (revokeRange.location == NSNotFound || revokeRange.location == 0) {
        return nil;
    }

    NSString *prefix = [text substringToIndex:revokeRange.location];
    NSRange colonRange = [prefix rangeOfString:@"：" options:NSBackwardsSearch];
    if (colonRange.location != NSNotFound && NSMaxRange(colonRange) < prefix.length) {
        prefix = [prefix substringFromIndex:NSMaxRange(colonRange)];
    }
    return WCPLSanitizeInlineText(wcpl_stripWrappedQuotes(prefix), 40);
}

NSString *WCPLExtractRevokedContentFromReplaceText(NSString *replaceText) {
    NSString *text = WCPLTrimText(replaceText);
    if (text.length == 0) {
        return nil;
    }

    NSArray<NSString *> *tokens = @[@"原消息：", @"原消息:"];
    for (NSString *token in tokens) {
        NSRange tokenRange = [text rangeOfString:token];
        if (tokenRange.location == NSNotFound || NSMaxRange(tokenRange) >= text.length) {
            continue;
        }
        NSString *suffix = [text substringFromIndex:NSMaxRange(tokenRange)];
        NSString *result = WCPLSanitizeInlineText(suffix, 180);
        if (result.length > 0) {
            return result;
        }
    }
    return nil;
}

BOOL WCPLIsRevokeTipDisplayText(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return [content rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
           [content rangeOfString:@"已拦截撤回"].location != NSNotFound;
}

BOOL WCPLIsQuitMonitorTipDisplayText(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return [content rangeOfString:@"[退群监控]"].location != NSNotFound;
}

BOOL WCPLShouldTintAlertTipDisplayText(NSString *content) {
    return WCPLIsRevokeTipDisplayText(content) || WCPLIsQuitMonitorTipDisplayText(content);
}

BOOL WCPLIsSysMsgTemplateContent(NSString *content) {
    NSString *trimmed = WCPLTrimText(content);
    if (trimmed.length == 0) {
        return NO;
    }
    return [trimmed rangeOfString:@"<sysmsg" options:NSCaseInsensitiveSearch].location != NSNotFound &&
           [trimmed rangeOfString:@"sysmsgtemplate" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

NSString *WCPLPlainTextFromSysMsgTemplateContent(NSString *content) {
    NSString *trimmed = WCPLTrimText(content);
    if (trimmed.length == 0 || !WCPLIsSysMsgTemplateContent(trimmed)) {
        return nil;
    }

    NSString *plain = WCPLExtractXMLValue(trimmed, @"<plain><![CDATA[", @"]]></plain>");
    if (plain.length > 0) {
        return plain;
    }

    NSString *decoded = WCPLDecodeBasicXMLEntities(trimmed);
    if (decoded.length > 0 && ![decoded isEqualToString:trimmed]) {
        return WCPLExtractXMLValue(decoded, @"<plain><![CDATA[", @"]]></plain>");
    }
    return nil;
}

NSString *WCPLAlertTipDisplayTextFromContent(NSString *content) {
    NSString *trimmed = WCPLTrimText(content);
    if (trimmed.length == 0) {
        return nil;
    }

    NSString *plainText = WCPLPlainTextFromSysMsgTemplateContent(trimmed);
    return plainText.length > 0 ? plainText : trimmed;
}
