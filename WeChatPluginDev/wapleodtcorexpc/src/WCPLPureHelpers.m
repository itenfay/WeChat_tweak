//
// WCPLPureHelpers.m
//

#import "WCPLPureHelpers.h"
#include <limits.h>
#include <stdlib.h>

NSString *WCPLTrimText(id text) {
    if (![text isKindOfClass:[NSString class]]) {
        return nil;
    }
    NSString *trimmed = [(NSString *)text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

NSArray<NSString *> *WCPLSanitizeIdentifierArray(id value) {
    if (![value isKindOfClass:[NSArray class]]) {
        return @[];
    }

    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in (NSArray *)value) {
        NSString *identifier = WCPLTrimText(obj);
        if (identifier.length > 0) {
            [results addObject:identifier];
        }
    }
    return results.array;
}

static NSString *wcpl_percentDecodeString(NSString *value) {
    if (![value isKindOfClass:[NSString class]] || value.length == 0) {
        return nil;
    }
    NSString *decoded = [value stringByRemovingPercentEncoding];
    return decoded ?: value;
}

NSString *WCPLQueryValueForKeyInURL(NSString *key, NSString *urlString) {
    if (![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }
    if (![urlString isKindOfClass:[NSString class]] || urlString.length == 0) {
        return nil;
    }

    NSRange qmark = [urlString rangeOfString:@"?"];
    if (qmark.location == NSNotFound || qmark.location + 1 >= urlString.length) {
        return nil;
    }

    NSString *query = [urlString substringFromIndex:qmark.location + 1];
    if (query.length == 0) {
        return nil;
    }

    NSArray<NSString *> *pairs = [query componentsSeparatedByString:@"&"];
    for (NSString *pair in pairs) {
        if (![pair isKindOfClass:[NSString class]] || pair.length == 0) {
            continue;
        }
        NSRange eq = [pair rangeOfString:@"="];
        if (eq.location == NSNotFound) {
            continue;
        }

        NSString *candidateKey = [pair substringToIndex:eq.location];
        if (![candidateKey isEqualToString:key]) {
            continue;
        }

        NSString *value = (eq.location + 1 < pair.length) ? [pair substringFromIndex:eq.location + 1] : @"";
        NSString *decoded = wcpl_percentDecodeString(value);
        return WCPLTrimText(decoded);
    }

    return nil;
}

NSString *WCPLDecodeBasicXMLEntities(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    if ([text rangeOfString:@"&"].location == NSNotFound) {
        return text;
    }

    NSString *decoded = text;
    for (NSUInteger pass = 0; pass < 3; pass++) {
        NSString *next = [[[[decoded stringByReplacingOccurrencesOfString:@"&lt;" withString:@"<"]
                           stringByReplacingOccurrencesOfString:@"&gt;" withString:@">"]
                          stringByReplacingOccurrencesOfString:@"&quot;" withString:@"\""]
                         stringByReplacingOccurrencesOfString:@"&apos;" withString:@"'"];
        next = [next stringByReplacingOccurrencesOfString:@"&amp;" withString:@"&"];

        if ([next isEqualToString:decoded]) {
            break;
        }
        decoded = next;

        if ([decoded rangeOfString:@"&"].location == NSNotFound) {
            break;
        }
    }

    return decoded;
}

NSString *WCPLExtractXMLValue(NSString *xml, NSString *openTag, NSString *closeTag) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
        return nil;
    }
    NSRange openRange = [xml rangeOfString:openTag];
    if (openRange.location == NSNotFound) {
        return nil;
    }
    NSUInteger valueStart = NSMaxRange(openRange);
    if (valueStart >= xml.length) {
        return nil;
    }
    NSRange closeRange = [xml rangeOfString:closeTag options:0 range:NSMakeRange(valueStart, xml.length - valueStart)];
    if (closeRange.location == NSNotFound || closeRange.location <= valueStart) {
        return nil;
    }
    NSString *value = [xml substringWithRange:NSMakeRange(valueStart, closeRange.location - valueStart)];
    return WCPLTrimText(value);
}

NSString *WCPLExtractQuoteTitleFromXML(NSString *xml) {
    NSString *title = WCPLExtractXMLValue(xml, @"<title><![CDATA[", @"]]></title>");
    if (title.length == 0) {
        title = WCPLExtractXMLValue(xml, @"<title>", @"</title>");
    }

    if (title.length == 0) {
        NSString *decodedXML = WCPLDecodeBasicXMLEntities(xml);
        if (decodedXML.length > 0 && ![decodedXML isEqualToString:xml]) {
            title = WCPLExtractXMLValue(decodedXML, @"<title><![CDATA[", @"]]></title>");
            if (title.length == 0) {
                title = WCPLExtractXMLValue(decodedXML, @"<title>", @"</title>");
            }
        }
    }

    title = WCPLTrimText(title);
    return title.length > 0 ? title : nil;
}

BOOL WCPLIsChatRoomName(NSString *name) {
    NSString *trimmed = WCPLTrimText(name);
    if (trimmed.length == 0) {
        return NO;
    }
    return ([trimmed rangeOfString:@"@chatroom" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

NSString *WCPLNormalizeMentionCandidate(NSString *candidate) {
    NSString *value = WCPLTrimText(candidate);
    if (value.length == 0) {
        return nil;
    }

    if ([value hasPrefix:@"@"]) {
        value = WCPLTrimText([value substringFromIndex:1]);
    }
    if ([value hasSuffix:@":"]) {
        value = WCPLTrimText([value substringToIndex:MAX((NSInteger)value.length - 1, 0)]);
    }
    if (value.length == 0 || value.length > 128) {
        return nil;
    }

    if ([value rangeOfString:@"<"].location != NSNotFound || [value rangeOfString:@">"].location != NSNotFound) {
        return nil;
    }
    if ([value rangeOfCharacterFromSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].location != NSNotFound) {
        return nil;
    }
    if (WCPLIsChatRoomName(value)) {
        return nil;
    }

    return value;
}

NSString *WCPLExtractMentionCandidateFromXML(NSString *xmlText) {
    if (![xmlText isKindOfClass:[NSString class]] || xmlText.length == 0) {
        return nil;
    }

    NSArray<NSArray<NSString *> *> *tagPairs = @[
        @[@"<memberusername><![CDATA[", @"]]></memberusername>"],
        @[@"<memberusername>", @"</memberusername>"],
        @[@"<senderusername><![CDATA[", @"]]></senderusername>"],
        @[@"<senderusername>", @"</senderusername>"],
        @[@"<fromusr><![CDATA[", @"]]></fromusr>"],
        @[@"<fromusr>", @"</fromusr>"],
        @[@"<chatusr><![CDATA[", @"]]></chatusr>"],
        @[@"<chatusr>", @"</chatusr>"],
        @[@"<realchatname><![CDATA[", @"]]></realchatname>"],
        @[@"<realchatname>", @"</realchatname>"],
        @[@"<username><![CDATA[", @"]]></username>"],
        @[@"<username>", @"</username>"]
    ];

    NSString *(^extractFromText)(NSString *) = ^NSString *(NSString *text) {
        if (![text isKindOfClass:[NSString class]] || text.length == 0) {
            return nil;
        }
        for (NSArray<NSString *> *pair in tagPairs) {
            if (pair.count != 2) {
                continue;
            }
            NSString *value = WCPLExtractXMLValue(text, pair[0], pair[1]);
            NSString *candidate = WCPLNormalizeMentionCandidate(value);
            if (candidate.length > 0) {
                return candidate;
            }
        }
        return nil;
    };

    NSString *candidate = extractFromText(xmlText);
    if (candidate.length > 0) {
        return candidate;
    }

    NSString *decoded = WCPLDecodeBasicXMLEntities(xmlText);
    if (decoded.length > 0 && ![decoded isEqualToString:xmlText]) {
        candidate = extractFromText(decoded);
        if (candidate.length > 0) {
            return candidate;
        }
    }

    return nil;
}

NSString *WCPLExtractMentionCandidateFromGroupContentPrefix(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSRange newlineRange = [content rangeOfString:@"\n"];
    if (newlineRange.location == NSNotFound || newlineRange.location == 0) {
        return nil;
    }

    NSString *firstLine = [content substringToIndex:newlineRange.location];
    return WCPLNormalizeMentionCandidate(firstLine);
}

unsigned int WCPLExtractVoiceAttrUInt(NSString *xml, NSString *attrName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0 ||
        ![attrName isKindOfClass:[NSString class]] || attrName.length == 0) {
        return 0;
    }

    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:
                                  [NSString stringWithFormat:@"%@\\s*=\\s*\\\"([0-9]{1,8})\\\"", attrName]
                                                                           options:NSRegularExpressionCaseInsensitive
                                                                             error:nil];
    if (!regex) {
        return 0;
    }

    NSTextCheckingResult *match = [regex firstMatchInString:xml options:0 range:NSMakeRange(0, xml.length)];
    if (match && match.numberOfRanges >= 2) {
        NSRange valueRange = [match rangeAtIndex:1];
        if (valueRange.location != NSNotFound && valueRange.length > 0) {
            NSString *value = [xml substringWithRange:valueRange];
            unsigned long long parsed = strtoull(value.UTF8String, NULL, 10);
            if (parsed > 0 && parsed <= UINT_MAX) {
                return (unsigned int)parsed;
            }
        }
    }

    NSString *decodedXML = WCPLDecodeBasicXMLEntities(xml);
    if (decodedXML.length > 0 && ![decodedXML isEqualToString:xml]) {
        match = [regex firstMatchInString:decodedXML options:0 range:NSMakeRange(0, decodedXML.length)];
        if (match && match.numberOfRanges >= 2) {
            NSRange valueRange = [match rangeAtIndex:1];
            if (valueRange.location != NSNotFound && valueRange.length > 0) {
                NSString *value = [decodedXML substringWithRange:valueRange];
                unsigned long long parsed = strtoull(value.UTF8String, NULL, 10);
                if (parsed > 0 && parsed <= UINT_MAX) {
                    return (unsigned int)parsed;
                }
            }
        }
    }

    return 0;
}

NSString *WCPLBuildMinimalVoiceContent(unsigned int voiceLengthMs, unsigned int voiceFormat) {
    unsigned int lengthMs = (voiceLengthMs > 0) ? voiceLengthMs : 1000;
    unsigned int fmt = (voiceFormat > 0) ? voiceFormat : 4;
    return [NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%u\" voiceformat=\"%u\" forwardflag=\"0\" /></msg>",
            lengthMs, fmt];
}

long long WCPLQuoteReferServerIDFromContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return 0;
    }

    NSArray<NSArray<NSString *> *> *tagPairs = @[
        @[@"<svrid><![CDATA[", @"]]></svrid>"],
        @[@"<svrid>", @"</svrid>"],
        @[@"<msgsvrid><![CDATA[", @"]]></msgsvrid>"],
        @[@"<msgsvrid>", @"</msgsvrid>"]
    ];

    long long (^extractServerIDFromXML)(NSString *) = ^long long(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return 0;
        }

        for (NSArray<NSString *> *pair in tagPairs) {
            if (pair.count != 2) {
                continue;
            }
            NSString *value = WCPLExtractXMLValue(xml, pair[0], pair[1]);
            if (![value isKindOfClass:[NSString class]] || value.length == 0) {
                continue;
            }
            long long svrID = strtoll(value.UTF8String, NULL, 10);
            if (svrID > 0) {
                return svrID;
            }
        }

        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<(?:msg)?svrid>(?:<!\\[CDATA\\[)?([0-9]{5,})(?:\\]\\]>)?</(?:msg)?svrid>" options:NSRegularExpressionCaseInsensitive error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:xml options:0 range:NSMakeRange(0, xml.length)];
        if (!match || match.numberOfRanges < 2 || match.range.location == NSNotFound) {
            return 0;
        }

        NSString *value = [xml substringWithRange:[match rangeAtIndex:1]];
        if (![value isKindOfClass:[NSString class]] || value.length == 0) {
            return 0;
        }

        long long svrID = strtoll(value.UTF8String, NULL, 10);
        return svrID > 0 ? svrID : 0;
    };

    NSString *referSection = WCPLExtractXMLValue(content, @"<refermsg>", @"</refermsg>");
    if (referSection.length == 0) {
        NSRegularExpression *referRegex = [NSRegularExpression regularExpressionWithPattern:@"<refermsg[^>]*>([\\s\\S]*?)</refermsg>" options:NSRegularExpressionCaseInsensitive error:nil];
        NSTextCheckingResult *referMatch = [referRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (referMatch && referMatch.numberOfRanges >= 2 && referMatch.range.location != NSNotFound) {
            referSection = [content substringWithRange:[referMatch rangeAtIndex:1]];
        }
    }

    if (referSection.length == 0) {
        NSString *decodedContent = WCPLDecodeBasicXMLEntities(content);
        if (decodedContent.length > 0 && ![decodedContent isEqualToString:content]) {
            referSection = WCPLExtractXMLValue(decodedContent, @"<refermsg>", @"</refermsg>");
            if (referSection.length == 0) {
                NSRegularExpression *referRegex = [NSRegularExpression regularExpressionWithPattern:@"<refermsg[^>]*>([\\s\\S]*?)</refermsg>" options:NSRegularExpressionCaseInsensitive error:nil];
                NSTextCheckingResult *referMatch = [referRegex firstMatchInString:decodedContent options:0 range:NSMakeRange(0, decodedContent.length)];
                if (referMatch && referMatch.numberOfRanges >= 2 && referMatch.range.location != NSNotFound) {
                    referSection = [decodedContent substringWithRange:[referMatch rangeAtIndex:1]];
                }
            }
        }
    }

    if (referSection.length > 0) {
        long long referSvrID = extractServerIDFromXML(referSection);
        if (referSvrID > 0) {
            return referSvrID;
        }

        NSString *decodedRefer = WCPLDecodeBasicXMLEntities(referSection);
        if (decodedRefer.length > 0 && ![decodedRefer isEqualToString:referSection]) {
            referSvrID = extractServerIDFromXML(decodedRefer);
            if (referSvrID > 0) {
                return referSvrID;
            }
        }
    }

    return 0;
}

NSString *WCPLGenerateClientMsgID(NSString *senderUserName) {
    NSString *sender = WCPLTrimText(senderUserName);
    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    unsigned int randomValue = arc4random();
    if (sender.length > 0) {
        return [NSString stringWithFormat:@"%@_%u_%u", sender, now, randomValue];
    }
    return [NSString stringWithFormat:@"wcpl_%u_%u", now, randomValue];
}
