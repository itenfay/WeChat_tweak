#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLContactLookup.h"
#import "WCPLHookGovernance.h"
#import "WCPLLogger.h"
#import "WCHookMessageNavigator.h"
#import "RichTextView.h"
#import <dispatch/dispatch.h>
#import <objc/runtime.h>
#import <objc/message.h>

@interface TextMessageCellView (WCPLLocalReplace)
- (void)wcpl_applyLocalReplaceIfNeeded;
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender;
@end

@interface CommonMessageCellView (WCPLRepeatMenuBridge)
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap;
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap;
@end

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon);
static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint);
static id wcpl_serviceByClass(Class serviceClass);
static void wcpl_messageHookLog(NSString *className,
                                NSString *selectorName,
                                NSString *stage,
                                NSString *decision,
                                WCPLHookOrigPolicy policy,
                                NSString *detail);

static NSString *const kWCPLHookFeatureMessage = @"message";

static uint64_t wcpl_message_perf_uptimeMillis(void) {
    NSTimeInterval uptime = [[NSProcessInfo processInfo] systemUptime];
    if (uptime < 0) {
        return 0;
    }
    return (uint64_t)(uptime * 1000.0);
}

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title icon:(UIImage *)icon target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title svgName:(id)svgName target:(id)target action:(SEL)action;
- (SEL)action;
- (void)setIconImage:(UIImage *)iconImage;
@property(retain, nonatomic) UIImage *iconImage;
@end

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static void wcpl_messageHookLog(NSString *className,
                                NSString *selectorName,
                                NSString *stage,
                                NSString *decision,
                                WCPLHookOrigPolicy policy,
                                NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureMessage,
                           className,
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

static id wcpl_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) return nil;
    Class cls = object_getClass(obj);
    if (!cls) return nil;
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) return nil;
    const char *typeEncoding = ivar_getTypeEncoding(ivar);
    if (!typeEncoding || typeEncoding[0] != '@') return nil;
    return object_getIvar(obj, ivar);
}

// ==================== 本地文本替换（仅显示） ====================
static const void *kWCPLLocalReplaceMapKey = &kWCPLLocalReplaceMapKey;
static const void *kWCPLLocalReplaceOriginKey = &kWCPLLocalReplaceOriginKey;
static const void *kWCPLLocalReplaceLayoutingKey = &kWCPLLocalReplaceLayoutingKey;

static UIImage *wcpl_clownMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M12 21C16.9706 21 21 16.9706 21 12C21 7.02944 16.9706 3 12 3C7.02944 3 3 7.02944 3 12C3 16.9706 7.02944 21 12 21Z' stroke='#FFFFFF' stroke-width='1.5'/>"
            "<path d='M8 8L9.5 10.5L8 13L6.5 10.5L8 8Z' fill='#FFFFFF'/>"
            "<path d='M16 8L17.5 10.5L16 13L14.5 10.5L16 8Z' fill='#FFFFFF'/>"
            "<circle cx='12' cy='14' r='1.5' fill='#FFFFFF'/>"
            "<path d='M7 16.5C9 18.5 15 18.5 17 16.5' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {}
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }

        if (!icon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            UIImage *symbol = nil;
            if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
                UIImageSymbolConfiguration *config =
                    [UIImageSymbolConfiguration configurationWithPointSize:16
                                                                    weight:UIImageSymbolWeightRegular
                                                                     scale:UIImageSymbolScaleMedium];
                symbol = [UIImage systemImageNamed:@"theatermasks" withConfiguration:config];
                if (!symbol) {
                    symbol = [UIImage systemImageNamed:@"theatermasks.fill" withConfiguration:config];
                }
                if (!symbol) {
                    symbol = [UIImage systemImageNamed:@"face.smiling" withConfiguration:config];
                }
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"theatermasks"];
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"theatermasks.fill"];
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"face.smiling"];
            }
            if (symbol) {
                icon = symbol;
            }
        }
        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static UIImage *wcpl_repeatMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M20 7H9C6.79086 7 5 8.79086 5 11V11' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M8 4L5 7L8 10' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M4 17H15C17.2091 17 19 15.2091 19 13V13' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M16 20L19 17L16 14' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {}
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }

        if (!icon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            UIImage *symbol = nil;
            if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
                UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:16 weight:UIImageSymbolWeightRegular scale:UIImageSymbolScaleMedium];
                symbol = [UIImage systemImageNamed:@"arrow.2.squarepath" withConfiguration:config];
            }
            if (!symbol) symbol = [UIImage systemImageNamed:@"arrow.2.squarepath"];
            if (symbol) icon = symbol;
        }
        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static id wcpl_createClownMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"小丑";
    UIImage *icon = wcpl_clownMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }

    return menuItem;
}

static id wcpl_createRepeatMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"复读";
    UIImage *icon = wcpl_repeatMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }
    return menuItem;
}

static NSMutableDictionary<NSString *, NSString *> *wcpl_localReplaceMapForController(id controller, BOOL createIfNeeded) {
    if (!controller) return nil;
    NSMutableDictionary *map = objc_getAssociatedObject(controller, kWCPLLocalReplaceMapKey);
    if (!map && createIfNeeded) {
        map = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(controller, kWCPLLocalReplaceMapKey, map, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return map;
}

static NSString *wcpl_messageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    unsigned int localId = msgWrap.m_uiMesLocalID;
    long long svrId = msgWrap.m_n64MesSvrID;
    if (localId == 0 && svrId == 0) {
        return [NSString stringWithFormat:@"%@|%@|%p", fromUser, toUser, msgWrap];
    }
    return [NSString stringWithFormat:@"%@|%@|%u|%lld", fromUser, toUser, localId, svrId];
}

static BOOL wcpl_isPlainTextMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 1);
}

static BOOL wcpl_isQuoteReplyMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    if ([content rangeOfString:@"<refermsg>"].location != NSNotFound) {
        return YES;
    }
    if ([content rangeOfString:@"<type>57</type>"].location != NSNotFound) {
        return YES;
    }
    if ([content rangeOfString:@"<type><![CDATA[57]]></type>"].location != NSNotFound) {
        return YES;
    }
    return NO;
}

static BOOL wcpl_isTransferMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    BOOL hasWCPayInfoXML = [content isKindOfClass:[NSString class]] &&
        [content rangeOfString:@"<wcpayinfo" options:NSCaseInsensitiveSearch].location != NSNotFound;

    BOOL hasTransferSubtype = NO;
    BOOL hasTransferId = NO;
    if (hasWCPayInfoXML) {
        hasTransferSubtype =
            ([content rangeOfString:@"<paysubtype>3</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype>4</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[3]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[4]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound);
        hasTransferId = [content rangeOfString:@"<transferid" options:NSCaseInsensitiveSearch].location != NSNotFound;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (payInfo) {
            NSInteger subType = 0;
            @try {
                id value = [payInfo valueForKey:@"m_uiPaySubType"];
                if ([value respondsToSelector:@selector(integerValue)]) {
                    subType = [value integerValue];
                }
            } @catch (__unused NSException *exception) {
            }

            if (subType == 3 || subType == 4) {
                hasTransferSubtype = YES;
            }

            NSString *transferID = nil;
            @try {
                id value = [payInfo valueForKey:@"m_nsTransferID"];
                if ([value isKindOfClass:[NSString class]]) {
                    transferID = (NSString *)value;
                }
            } @catch (__unused NSException *exception) {
            }
            if (transferID.length > 0) {
                hasTransferId = YES;
            }
        }
    } @catch (__unused NSException *exception) {
    }

    if (hasTransferSubtype || hasTransferId) {
        return YES;
    }

    return hasWCPayInfoXML &&
           [content rangeOfString:@"<feedesc" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static NSString *wcpl_regexEscapedReplacementString(NSString *text) {
    if (![text isKindOfClass:[NSString class]]) {
        return @"";
    }
    NSString *result = [text stringByReplacingOccurrencesOfString:@"\\" withString:@"\\\\"];
    result = [result stringByReplacingOccurrencesOfString:@"$" withString:@"\\$"];
    return result;
}

static NSString *wcpl_extractTransferAmountFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>",
        @"<feedesc>(.*?)</feedesc>",
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *value = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = wcpl_trimString(value);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_normalizeTransferAmountText(NSString *text) {
    NSString *trimmed = wcpl_trimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    if ([trimmed hasPrefix:@"￥"] || [trimmed hasPrefix:@"¥"] || [trimmed hasPrefix:@"$"]) {
        return trimmed;
    }

    BOOL looksNumeric = YES;
    NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:@"0123456789.,"];
    for (NSUInteger index = 0; index < trimmed.length; index++) {
        unichar ch = [trimmed characterAtIndex:index];
        if (![allowed characterIsMember:ch]) {
            looksNumeric = NO;
            break;
        }
    }

    if (looksNumeric) {
        return [@"￥" stringByAppendingString:trimmed];
    }
    return trimmed;
}

static NSString *wcpl_transferXMLByReplacingAmount(NSString *content, NSString *amount) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [normalized stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];
    NSString *escapedCDATA = wcpl_regexEscapedReplacementString(safeCDATA);
    NSString *escapedPlain = wcpl_regexEscapedReplacementString(normalized);

    NSString *result = [content copy];
    BOOL replaced = NO;

    NSArray<NSDictionary<NSString *, NSString *> *> *rules = @[
        @{ @"pattern": @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>", @"template": [NSString stringWithFormat:@"<feedesc><![CDATA[%@]]></feedesc>", escapedCDATA] },
        @{ @"pattern": @"<feedesc>(.*?)</feedesc>", @"template": [NSString stringWithFormat:@"<feedesc>%@</feedesc>", escapedPlain] },
        @{ @"pattern": @"<receiverdesc><!\\[CDATA\\[(.*?)\\]\\]></receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc><![CDATA[%@]]></receiverdesc>", escapedCDATA] },
        @{ @"pattern": @"<receiverdesc>(.*?)</receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc>%@</receiverdesc>", escapedPlain] },
        @{ @"pattern": @"<senderdesc><!\\[CDATA\\[(.*?)\\]\\]></senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc><![CDATA[%@]]></senderdesc>", escapedCDATA] },
        @{ @"pattern": @"<senderdesc>(.*?)</senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc>%@</senderdesc>", escapedPlain] },
    ];

    for (NSDictionary<NSString *, NSString *> *rule in rules) {
        NSString *pattern = rule[@"pattern"];
        NSString *replacementTemplate = rule[@"template"];
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        if (!regex) {
            continue;
        }
        NSUInteger count = [regex numberOfMatchesInString:result options:0 range:NSMakeRange(0, result.length)];
        if (count == 0) {
            continue;
        }
        replaced = YES;
        result = [regex stringByReplacingMatchesInString:result options:0 range:NSMakeRange(0, result.length) withTemplate:replacementTemplate];
    }

    return replaced ? result : nil;
}

static void wcpl_applyTransferAmountToPayInfo(CMessageWrap *msgWrap, NSString *amount) {
    if (!msgWrap) {
        return;
    }
    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (!payInfo) {
            return;
        }

        @try {
            [payInfo setValue:normalized forKey:@"m_nsFeeDesc"];
        } @catch (__unused NSException *exception) {
        }
        @try {
            [payInfo setValue:normalized forKey:@"m_receiverDesc"];
        } @catch (__unused NSException *exception) {
        }
        @try {
            [payInfo setValue:normalized forKey:@"m_senderDesc"];
        } @catch (__unused NSException *exception) {
        }
    } @catch (__unused NSException *exception) {
    }
}

static BOOL wcpl_isClownSupportedMessage(CMessageWrap *msgWrap) {
    return wcpl_isPlainTextMessage(msgWrap) || wcpl_isQuoteReplyMessage(msgWrap) || wcpl_isTransferMessage(msgWrap);
}

static NSString *wcpl_extractQuoteTitleFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<title><!\\[CDATA\\[(.*?)\\]\\]></title>",
        @"<title>(.*?)</title>"
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:NSRegularExpressionDotMatchesLineSeparators error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *title = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = wcpl_trimString(title);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_quoteXMLByReplacingTitle(NSString *content, NSString *title) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *trimmed = wcpl_trimString(title);
    if (trimmed.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [trimmed stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];

    NSRegularExpression *cdataRegex = [NSRegularExpression regularExpressionWithPattern:@"<title><!\\[CDATA\\[(.*?)\\]\\]></title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *cdataMatch = [cdataRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (cdataMatch.numberOfRanges >= 2) {
        NSRange titleRange = [cdataMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:safeCDATA];
        }
    }

    NSRegularExpression *plainRegex = [NSRegularExpression regularExpressionWithPattern:@"<title>(.*?)</title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *plainMatch = [plainRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (plainMatch.numberOfRanges >= 2) {
        NSRange titleRange = [plainMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:trimmed];
        }
    }

    return nil;
}

static NSString *wcpl_displayTextForMessage(CMessageWrap *msgWrap, id cell) {
    if (!msgWrap) {
        return nil;
    }

    if (wcpl_isPlainTextMessage(msgWrap)) {
        return msgWrap.m_nsContent ?: @"";
    }

    if (wcpl_isTransferMessage(msgWrap)) {
        NSString *amount = wcpl_extractTransferAmountFromXML(msgWrap.m_nsContent);
        if (amount.length > 0) {
            return amount;
        }

        @try {
            if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
                [msgWrap parseWCPayInfoItemIfNeed];
            }
            id payInfo = nil;
            if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
                payInfo = msgWrap.m_oWCPayInfoItem;
            }
            if (payInfo && [payInfo respondsToSelector:@selector(m_nsFeeDesc)]) {
                id feeDesc = ((id (*)(id, SEL))objc_msgSend)(payInfo, @selector(m_nsFeeDesc));
                if ([feeDesc isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimString((NSString *)feeDesc);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) {
        }

        return wcpl_trimString(msgWrap.m_nsContent);
    }

    if (!wcpl_isQuoteReplyMessage(msgWrap)) {
        return nil;
    }

    if (cell && [cell respondsToSelector:@selector(viewModel)]) {
        @try {
            id viewModel = [cell viewModel];
            if (viewModel && [viewModel respondsToSelector:@selector(contentText)]) {
                id text = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(contentText));
                if ([text isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimString((NSString *)text);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSString *title = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
    if (title.length > 0) {
        return title;
    }

    return wcpl_trimString(msgWrap.m_nsContent);
}

static UIColor *wcpl_menuIconTintColor(void) {
    return [UIColor colorWithWhite:1.0 alpha:1.0];
}

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon) {
    wcpl_applyMenuItemIconWithTint(menuItem, icon, YES);
}

static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint) {
    if (!menuItem || !icon) {
        return;
    }

    UIImage *finalIcon = icon;
    if (shouldTint && [finalIcon respondsToSelector:@selector(imageWithTintColor:)]) {
        @try {
            finalIcon = [finalIcon imageWithTintColor:wcpl_menuIconTintColor()];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([finalIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
        finalIcon = [finalIcon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    }

    if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), finalIcon);
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        [menuItem setValue:finalIcon forKey:@"iconImage"];
    } @catch (__unused NSException *exception) {
    }
}

static CMessageWrap *wcpl_messageWrapFromCell(id cell) {
    if (!cell) return nil;
    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = [cell viewModel];
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            @try {
                return [viewModel messageWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewModel respondsToSelector:@selector(msgWrap)]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) {
            }
        }
        @try {
            id wrap = [viewModel valueForKey:@"messageWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
        @try {
            id wrap = [viewModel valueForKey:@"msgWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static void wcpl_setLocalReplaceText(id controller, CMessageWrap *msgWrap, NSString *text) {
    if (!controller || !msgWrap) return;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return;
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, YES);
    if (!map) return;
    if (text.length > 0) {
        map[key] = text;
    } else {
        [map removeObjectForKey:key];
    }
}

static NSString *wcpl_localReplaceText(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return nil;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return nil;
    NSDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    return map[key];
}

static NSString *wcpl_originalContentForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    id stored = objc_getAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey);
    return [stored isKindOfClass:[NSString class]] ? (NSString *)stored : nil;
}

static BOOL wcpl_syncLocalReplaceContent(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return NO;
    if (!wcpl_isClownSupportedMessage(msgWrap)) return NO;

    NSString *replaceText = wcpl_localReplaceText(controller, msgWrap);
    NSString *originText = msgWrap.m_nsContent ?: @"";
    NSString *storedOrigin = wcpl_originalContentForMessageWrap(msgWrap);

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isQuoteReply = wcpl_isQuoteReplyMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    if (replaceText.length > 0) {
        if (isPlainText) {
            if (!storedOrigin && ![originText isEqualToString:replaceText]) {
                objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
            if (![originText isEqualToString:replaceText]) {
                msgWrap.m_nsContent = replaceText;
                return YES;
            }
            return NO;
        }

        if (isQuoteReply) {
            NSString *replacedContent = wcpl_quoteXMLByReplacingTitle(originText, replaceText);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                return YES;
            }
        }

        if (isTransfer) {
            NSString *normalizedAmount = wcpl_normalizeTransferAmountText(replaceText);
            NSString *replacedContent = wcpl_transferXMLByReplacingAmount(originText, normalizedAmount);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
                return YES;
            }
            wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
        }

        return NO;
    }

    if (storedOrigin) {
        if (![originText isEqualToString:storedOrigin]) {
            msgWrap.m_nsContent = storedOrigin;
            if (isTransfer) {
                wcpl_applyTransferAmountToPayInfo(msgWrap, wcpl_extractTransferAmountFromXML(storedOrigin));
            }
        }
        objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, nil, OBJC_ASSOCIATION_ASSIGN);
        return YES;
    }
    return NO;
}

static void wcpl_clearLocalReplaceMap(id controller) {
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    [map removeAllObjects];
}

static UIViewController *wcpl_viewControllerFromCell(id cell) {
    if (!cell) {
        return nil;
    }

    id viewController = nil;
    if ([cell respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [cell getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell respondsToSelector:@selector(wchook_findChatViewController)]) {
        @try {
            viewController = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(wchook_findChatViewController));
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell isKindOfClass:[UIView class]]) {
        UIResponder *responder = [(UIView *)cell nextResponder];
        while (responder) {
            if ([responder isKindOfClass:[UIViewController class]]) {
                viewController = (UIViewController *)responder;
                break;
            }
            responder = [responder nextResponder];
        }
    }

    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    return (UIViewController *)viewController;
}

static __attribute__((unused)) UIViewController *wcpl_viewControllerFromResponderChain(UIResponder *responder) {
    UIResponder *cursor = responder;
    while (cursor) {
        if ([cursor isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)cursor;
        }
        if (![cursor respondsToSelector:@selector(nextResponder)]) {
            break;
        }
        cursor = [cursor nextResponder];
    }
    return nil;
}

static BOOL wcpl_isRepeatLongPressMenuEnabled(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return config ? config.repeatLongPressMenuEnable : YES;
}

static BOOL wcpl_isClownFeatureEnabled(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return config ? config.clownFeatureEnable : YES;
}

static NSArray *wcpl_injectClownMenuItemIfNeeded(id cell, NSArray *items) {
    if (!wcpl_isClownFeatureEnabled()) {
        return items;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleLocalReplaceMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
                if (itemAction == action) {
                    return mutableItems;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    id menuItem = wcpl_createClownMenuItem(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        WCPLLogDebug(@"[小丑] 注入长按菜单: type=%u class=%@", msgWrap.m_uiMessageType, NSStringFromClass([cell class]));
    }

    return mutableItems;
}

static BOOL wcpl_isRepeatSupportedForCell(id cell) {
    if (!wcpl_isRepeatLongPressMenuEnabled()) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!msgWrap) {
        return NO;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    SEL supportSel = @selector(wchook_isMessageSupportedForRepeat:);
    if ([cell respondsToSelector:supportSel]) {
        @try {
            return ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, supportSel, msgWrap);
        } @catch (__unused NSException *exception) {
        }
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
        default:
            return NO;
    }
}

static NSArray *wcpl_injectRepeatMenuItemIfNeeded(id cell, NSArray *items) {
    if (!wcpl_isRepeatSupportedForCell(cell)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleRepeatMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if (![item isKindOfClass:menuItemClass] || ![item respondsToSelector:@selector(action)]) {
            continue;
        }
        @try {
            SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
            if (itemAction == action) {
                return mutableItems;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id menuItem = wcpl_createRepeatMenuItem(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
        WCPLLogDebug(@"[复读] 注入长按菜单: type=%u class=%@",
                     msgWrap ? msgWrap.m_uiMessageType : 0,
                     NSStringFromClass([cell class]) ?: @"(nil)");
    }
    return mutableItems;
}

static void wcpl_perf_logRepeatDispatchResult(NSString *result,
                                              uint64_t startMs,
                                              CMessageWrap *msgWrap,
                                              id cell) {
    uint64_t endMs = wcpl_message_perf_uptimeMillis();
    uint64_t elapsedMs = endMs >= startMs ? (endMs - startMs) : 0;
    WCPLLogInfo(@"[PERF][REPEAT] phase=menu_dispatch result=%@ elapsed_ms=%llu local_id=%u msg_type=%u class=%@",
                result ?: @"unknown",
                (unsigned long long)elapsedMs,
                msgWrap ? msgWrap.m_uiMesLocalID : 0,
                msgWrap ? msgWrap.m_uiMessageType : 0,
                NSStringFromClass([cell class]) ?: @"(nil)");
}

static void wcpl_handleRepeatMenuActionForCellInternal(id cell, uint64_t startMs) {
    if (!cell) {
        return;
    }

    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            wcpl_handleRepeatMenuActionForCellInternal(cell, startMs);
        });
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!msgWrap || !wcpl_isRepeatSupportedForCell(cell)) {
        wcpl_perf_logRepeatDispatchResult(@"unsupported_or_missing_msg", startMs, msgWrap, cell);
        return;
    }

    SEL repeatSel = @selector(wchook_repeatMessageWrap:);
    if (![cell respondsToSelector:repeatSel]) {
        WCPLLogWarning(@"[复读] 菜单触发失败: selector 缺失 class=%@",
                       NSStringFromClass([cell class]) ?: @"(nil)");
        wcpl_perf_logRepeatDispatchResult(@"selector_missing", startMs, msgWrap, cell);
        return;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(cell, repeatSel, msgWrap);
        wcpl_perf_logRepeatDispatchResult(@"dispatch_ok", startMs, msgWrap, cell);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[复读] 菜单触发异常: class=%@ reason=%@",
                       NSStringFromClass([cell class]) ?: @"(nil)",
                       exception.reason ?: @"unknown");
        wcpl_perf_logRepeatDispatchResult(@"dispatch_exception", startMs, msgWrap, cell);
    }
}

static void wcpl_handleRepeatMenuActionForCell(id cell) {
    wcpl_handleRepeatMenuActionForCellInternal(cell, wcpl_message_perf_uptimeMillis());
}

static void wcpl_reloadCellAfterLocalReplace(id viewController, CMessageWrap *msgWrap, id cell) {
    if (!viewController || !msgWrap) {
        return;
    }

    if ([viewController respondsToSelector:@selector(clearNodeLayoutCache)]) {
        @try {
            [(BaseMsgContentViewController *)viewController clearNodeLayoutCache];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([viewController respondsToSelector:@selector(reloadNodeWithMessageWrap:)]) {
        @try {
            [viewController reloadNodeWithMessageWrap:msgWrap];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([viewController respondsToSelector:@selector(reloadVisibleNodeWithCellView:)]) {
        @try {
            [(BaseMsgContentViewController *)viewController reloadVisibleNodeWithCellView:cell];
        } @catch (__unused NSException *exception) {
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        if (![viewController respondsToSelector:@selector(getMsgTableView)]) return;
        UITableView *tableView = nil;
        @try {
            id tv = [(BaseMsgContentViewController *)viewController getMsgTableView];
            if ([tv isKindOfClass:[UITableView class]]) {
                tableView = (UITableView *)tv;
            }
        } @catch (__unused NSException *exception) {
            tableView = nil;
        }
        if (!tableView) return;
        [UIView performWithoutAnimation:^{
            @try {
                [tableView beginUpdates];
                [tableView endUpdates];
            } @catch (__unused NSException *exception) {
            }
        }];
    });
}

static void wcpl_presentClownEditorForCell(id cell) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return;
    }

    UIViewController *viewController = wcpl_viewControllerFromCell(cell);
    if (!viewController || ![viewController respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return;
    }

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    NSString *originText = wcpl_displayTextForMessage(msgWrap, cell);
    if (originText.length == 0) {
        originText = msgWrap.m_nsContent ?: @"";
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"小丑"
                                                                   message:@"仅在当前聊天页面生效，离开后自动恢复"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.text = originText;
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
        if (isTransfer) {
            textField.keyboardType = UIKeyboardTypeDecimalPad;
            textField.placeholder = @"例如：88.88";
        }
    }];

    __weak id weakCell = cell;
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        __strong id strongCell = weakCell;
        if (!strongCell) {
            return;
        }

        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (isTransfer) {
            trimmed = wcpl_normalizeTransferAmountText(trimmed) ?: @"";
        }

        if (isPlainText && trimmed.length > 0 && !wcpl_originalContentForMessageWrap(msgWrap)) {
            NSString *savedOriginText = msgWrap.m_nsContent ?: @"";
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, savedOriginText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        wcpl_setLocalReplaceText(viewController, msgWrap, trimmed);
        if (wcpl_isClownSupportedMessage(msgWrap)) {
            wcpl_syncLocalReplaceContent(viewController, msgWrap);
        }

        WCPLLogInfo(@"[小丑] 应用替换: type=%u len=%lu", msgWrap.m_uiMessageType, (unsigned long)trimmed.length);
        wcpl_reloadCellAfterLocalReplace(viewController, msgWrap, strongCell);
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];
    [viewController presentViewController:alert animated:YES completion:nil];
}
