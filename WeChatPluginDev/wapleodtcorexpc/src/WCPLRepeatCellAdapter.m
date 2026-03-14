//
// WCPLRepeatCellAdapter.m
//

#import "WCPLRepeatCellAdapter.h"

#import "WCPLLogger.h"
#import <objc/message.h>

static BOOL wcpl_repeatCellAdapterIsUsableAnchorView(id candidate, CGFloat minWidth, CGFloat minHeight) {
    if (![candidate isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *view = (UIView *)candidate;
    return (!view.hidden &&
            CGRectGetWidth(view.frame) > minWidth &&
            CGRectGetHeight(view.frame) > minHeight);
}

static UIView *wcpl_repeatCellAdapterViewFromSelectors(id cell,
                                                       NSArray<NSString *> *selectorNames,
                                                       CGFloat minWidth,
                                                       CGFloat minHeight) {
    for (NSString *selectorName in selectorNames) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!(selector && [cell respondsToSelector:selector])) {
            continue;
        }

        @try {
            id candidate = ((id (*)(id, SEL))objc_msgSend)(cell, selector);
            if (wcpl_repeatCellAdapterIsUsableAnchorView(candidate, minWidth, minHeight)) {
                return (UIView *)candidate;
            }
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }
    return nil;
}

static UIView *wcpl_repeatCellAdapterViewFromKVC(id cell,
                                                 NSArray<NSString *> *keys,
                                                 CGFloat minWidth,
                                                 CGFloat minHeight) {
    for (NSString *key in keys) {
        @try {
            id candidate = [cell valueForKey:key];
            if (wcpl_repeatCellAdapterIsUsableAnchorView(candidate, minWidth, minHeight)) {
                return (UIView *)candidate;
            }
        } @catch (NSException *exception) {
            WCPLCatchLog(exception);
        }
    }
    return nil;
}

UIView *WCPLRepeatCellAdapterBubbleAnchorView(id cell) {
    if (![cell isKindOfClass:[UIView class]]) {
        return nil;
    }

    UIView *bubbleView = wcpl_repeatCellAdapterViewFromKVC(cell,
                                                           @[@"m_bgImageView", @"_bgImageView", @"m_maskImageView"],
                                                           20.0f,
                                                           12.0f);
    if (bubbleView) {
        return bubbleView;
    }

    UIView *cellView = (UIView *)cell;
    UIView *bestView = nil;
    CGFloat bestScore = 0.0f;
    CGFloat cellWidth = CGRectGetWidth(cellView.bounds);
    for (UIView *subview in cellView.subviews) {
        if (subview.hidden) {
            continue;
        }
        NSString *name = NSStringFromClass([subview class]);
        if ([name containsString:@"Head"] ||
            [name containsString:@"Avatar"] ||
            [name containsString:@"Label"] ||
            [name containsString:@"Button"]) {
            continue;
        }
        CGRect frame = subview.frame;
        if (CGRectGetWidth(frame) < 24.0f || CGRectGetHeight(frame) < 16.0f) {
            continue;
        }
        if (cellWidth > 20.0f && CGRectGetWidth(frame) >= (cellWidth - 12.0f)) {
            continue;
        }
        CGFloat score = CGRectGetWidth(frame) * CGRectGetHeight(frame);
        if (score > bestScore) {
            bestScore = score;
            bestView = subview;
        }
    }
    return bestView;
}

UIView *WCPLRepeatCellAdapterDisplayAnchorView(id cell) {
    if (!cell) {
        return nil;
    }

    UIView *anchorView = wcpl_repeatCellAdapterViewFromSelectors(cell,
                                                                 @[@"getContentView",
                                                                   @"contentView",
                                                                   @"getBgImageView",
                                                                   @"bgImageView"],
                                                                 16.0f,
                                                                 12.0f);
    if (anchorView) {
        return anchorView;
    }

    anchorView = wcpl_repeatCellAdapterViewFromKVC(cell,
                                                   @[@"m_contentView",
                                                     @"_contentView",
                                                     @"contentView",
                                                     @"m_bgImageView",
                                                     @"_bgImageView",
                                                     @"bgImageView"],
                                                   16.0f,
                                                   12.0f);
    if (anchorView) {
        return anchorView;
    }

    return WCPLRepeatCellAdapterBubbleAnchorView(cell);
}

CGRect WCPLRepeatCellAdapterMenuRect(id cell) {
    SEL selector = @selector(showRectForMenuController);
    if (!(cell && [cell respondsToSelector:selector])) {
        return CGRectZero;
    }

    @try {
        return ((CGRect (*)(id, SEL))objc_msgSend)(cell, selector);
    } @catch (__unused NSException *exception) {
        return CGRectZero;
    }
}
