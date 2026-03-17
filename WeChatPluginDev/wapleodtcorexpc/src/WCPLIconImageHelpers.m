//
// WCPLIconImageHelpers.m
//

#import "WCPLIconImageHelpers.h"

#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLTypeGuard.h"
#import <objc/message.h>
#import <objc/runtime.h>

static UIImage * _Nullable wcpl_iconImageFromSVGString(NSString *svg) {
    NSString *text = WCPLTrimText(svg);
    if (text.length == 0) {
        return nil;
    }

    NSData *data = [text dataUsingEncoding:NSUTF8StringEncoding];
    if (data.length == 0) {
        return nil;
    }

    Class themeProxyClass = objc_getClass("WAThemeProxy");
    SEL svgFromDataSel = @selector(svgImageFromData:);
    if (!(themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel])) {
        return nil;
    }

    @try {
        id image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
        return [image isKindOfClass:[UIImage class]] ? (UIImage *)image : nil;
    } @catch (__unused NSException *exception) {
        WCPLCatchLog(exception);
        return nil;
    }
}

static UIImage * _Nullable wcpl_iconImageFromSystemSymbols(NSArray<NSString *> *symbols, CGFloat pointSize) {
    if (![UIImage respondsToSelector:@selector(systemImageNamed:)]) {
        return nil;
    }

    NSArray<NSString *> *candidates = WCPLArrayOrNil(symbols);
    if (candidates.count == 0) {
        return nil;
    }

    UIImageSymbolConfiguration *config = nil;
    if (pointSize > 0 &&
        [UIImageSymbolConfiguration respondsToSelector:@selector(configurationWithPointSize:weight:scale:)]) {
        config = [UIImageSymbolConfiguration configurationWithPointSize:pointSize
                                                                weight:UIImageSymbolWeightRegular
                                                                 scale:UIImageSymbolScaleMedium];
    }

    for (NSString *name in candidates) {
        NSString *symbolName = WCPLTrimText(name);
        if (symbolName.length == 0) {
            continue;
        }

        UIImage *image = nil;
        if (config && [UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
            image = [UIImage systemImageNamed:symbolName withConfiguration:config];
        }
        if (!image) {
            image = [UIImage systemImageNamed:symbolName];
        }
        if ([image isKindOfClass:[UIImage class]]) {
            return image;
        }
    }

    return nil;
}

UIImage *WCPLIconImageFromSVGOrSystemSymbols(NSString *svg, NSArray<NSString *> *fallbackSymbols, CGFloat pointSize) {
    UIImage *icon = wcpl_iconImageFromSVGString(svg);
    if (!icon) {
        icon = wcpl_iconImageFromSystemSymbols(fallbackSymbols, pointSize);
    }

    if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
        icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    }
    return icon;
}
