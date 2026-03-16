//
// WCPLMenuItemIconHelpers.m
//

#import "WCPLMenuItemIconHelpers.h"

#import "WCPLLogger.h"
#import <objc/message.h>

void WCPLApplyMenuItemIcon(id menuItem, UIImage *icon, UIColor *tintColor) {
    if (!menuItem || ![icon isKindOfClass:[UIImage class]]) {
        return;
    }

    UIImage *finalIcon = icon;
    if (tintColor && [finalIcon respondsToSelector:@selector(imageWithTintColor:)]) {
        @try {
            finalIcon = [finalIcon imageWithTintColor:tintColor];
        } @catch (__unused NSException *exception) {
            WCPLCatchLog(exception);
            finalIcon = icon;
        }
    }
    if ([finalIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
        finalIcon = [finalIcon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    }

    if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), finalIcon);
            return;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    @try {
        [menuItem setValue:finalIcon forKey:@"iconImage"];
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

