// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLGeometryHelpers.h"

static const CGFloat kWCPLTapPolicyMinRectSide = 8.0f;
static const CGFloat kWCPLTapPolicyBubbleHitInset = 1.0f;
static const CGFloat kWCPLTapPolicyBlankBandTextExtraTop = 14.0f;
static const CGFloat kWCPLTapPolicyBlankBandTextExtraBottom = 16.0f;
static const CGFloat kWCPLTapPolicyBlankBandMediaExtraTop = 10.0f;
static const CGFloat kWCPLTapPolicyBlankBandMediaExtraBottom = 12.0f;
static BOOL wcpl_tapPolicyRectUsable(CGRect rect, UIView *containerView) {
    if (![containerView isKindOfClass:[UIView class]]) {
        return NO;
    }
    return WCPLCGRectIsUsableInBounds(rect, containerView.bounds, kWCPLTapPolicyMinRectSide);
}

static BOOL wcpl_tapPolicyRectLooksRowWide(CGRect rect, UIView *containerView) {
    if (!wcpl_tapPolicyRectUsable(rect, containerView)) {
        return NO;
    }

    CGFloat cellWidth = CGRectGetWidth(containerView.bounds);
    if (cellWidth <= 24.0f) {
        return NO;
    }

    CGFloat widthRatio = CGRectGetWidth(rect) / cellWidth;
    BOOL spansBothSides = (CGRectGetMinX(rect) <= 10.0f) &&
                          ((cellWidth - CGRectGetMaxX(rect)) <= 10.0f);
    return widthRatio >= 0.80f || spansBothSides;
}

static CGRect wcpl_tapPolicyRectFromViewInCell(UIView *candidate, UIView *cellView) {
    if (![candidate isKindOfClass:[UIView class]] || ![cellView isKindOfClass:[UIView class]]) {
        return CGRectZero;
    }

    CGRect rect = [cellView convertRect:candidate.bounds fromView:candidate];
    if (!wcpl_tapPolicyRectUsable(rect, cellView)) {
        UIView *superview = candidate.superview;
        if ([superview isKindOfClass:[UIView class]]) {
            rect = [cellView convertRect:candidate.frame fromView:superview];
        } else if (candidate == cellView) {
            rect = cellView.bounds;
        }
    }
    return rect;
}

static CGRect wcpl_tapPolicyResolvedBubbleRect(id cell, UIView *cellView, BOOL *validOut) {
    CGRect displayRect = CGRectZero;
    BOOL displayRectValid = NO;
    if ([(id)cell respondsToSelector:@selector(wchook_repeatDisplayAnchorViewByNFQPrinciple)]) {
        @try {
            UIView *displayView = ((id (*)(id, SEL))objc_msgSend)((id)cell, @selector(wchook_repeatDisplayAnchorViewByNFQPrinciple));
            if ([displayView isKindOfClass:[UIView class]]) {
                displayRect = wcpl_tapPolicyRectFromViewInCell(displayView, cellView);
                displayRectValid = wcpl_tapPolicyRectUsable(displayRect, cellView);
            }
        } @catch (__unused NSException *exception) {
            displayRectValid = NO;
        }
    }

    CGRect anchorRect = CGRectZero;
    BOOL anchorRectValid = NO;
    if ([(id)cell respondsToSelector:@selector(wchook_bubbleAnchorView)]) {
        @try {
            UIView *bubbleView = ((id (*)(id, SEL))objc_msgSend)((id)cell, @selector(wchook_bubbleAnchorView));
            if ([bubbleView isKindOfClass:[UIView class]]) {
                anchorRect = wcpl_tapPolicyRectFromViewInCell(bubbleView, cellView);
                anchorRectValid = wcpl_tapPolicyRectUsable(anchorRect, cellView);
            }
        } @catch (__unused NSException *exception) {
            anchorRectValid = NO;
        }
    }

    CGRect menuRect = CGRectZero;
    BOOL menuRectValid = NO;
    menuRect = WCPLRepeatCellAdapterMenuRect(cell);
    menuRectValid = wcpl_tapPolicyRectUsable(menuRect, cellView);

    if (displayRectValid && wcpl_tapPolicyRectLooksRowWide(displayRect, cellView)) {
        displayRectValid = NO;
        displayRect = CGRectZero;
    }
    if (anchorRectValid && wcpl_tapPolicyRectLooksRowWide(anchorRect, cellView)) {
        anchorRectValid = NO;
        anchorRect = CGRectZero;
    }
    if (menuRectValid && wcpl_tapPolicyRectLooksRowWide(menuRect, cellView)) {
        menuRectValid = NO;
        menuRect = CGRectZero;
    }

    CGRect bubbleRect = CGRectZero;
    BOOL bubbleRectValid = NO;
    if (displayRectValid || anchorRectValid) {
        if (displayRectValid && anchorRectValid) {
            CGFloat displayArea = CGRectGetWidth(displayRect) * CGRectGetHeight(displayRect);
            CGFloat anchorArea = CGRectGetWidth(anchorRect) * CGRectGetHeight(anchorRect);
            bubbleRect = (anchorArea >= displayArea) ? anchorRect : displayRect;
        } else {
            bubbleRect = displayRectValid ? displayRect : anchorRect;
        }
        bubbleRectValid = YES;
    } else if (menuRectValid) {
        bubbleRect = menuRect;
        bubbleRectValid = YES;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    BOOL textPolicy = wcpl_messageUsesTripleTapPolicy(cell, msgWrap);
    if (bubbleRectValid && !textPolicy && menuRectValid) {
        CGRect mergedRect = CGRectUnion(bubbleRect, menuRect);
        mergedRect = CGRectIntersection(mergedRect, cellView.bounds);
        if (wcpl_tapPolicyRectUsable(mergedRect, cellView)) {
            bubbleRect = mergedRect;
        }
    }
    if (bubbleRectValid && textPolicy && msgWrap && CGRectGetWidth(cellView.bounds) > 20.0f) {
        BOOL isSelf = !wcpl_isMessageFromOther(msgWrap);
        CGFloat cellMidX = CGRectGetMidX(cellView.bounds);
        CGRect sideClampedRect = bubbleRect;
        if (isSelf) {
            CGFloat minX = MAX(CGRectGetMinX(sideClampedRect), cellMidX - 12.0f);
            CGFloat maxX = CGRectGetMaxX(sideClampedRect);
            if ((maxX - minX) > kWCPLTapPolicyMinRectSide) {
                sideClampedRect.origin.x = minX;
                sideClampedRect.size.width = maxX - minX;
            }
        } else {
            CGFloat minX = CGRectGetMinX(sideClampedRect);
            CGFloat maxX = MIN(CGRectGetMaxX(sideClampedRect), cellMidX + 12.0f);
            if ((maxX - minX) > kWCPLTapPolicyMinRectSide) {
                sideClampedRect.origin.x = minX;
                sideClampedRect.size.width = maxX - minX;
            }
        }
        bubbleRect = sideClampedRect;
    }

    if (validOut) {
        *validOut = bubbleRectValid;
    }
    return bubbleRect;
}

static CGRect wcpl_tapPolicyResolvedHeadRect(id cell, UIView *cellView, BOOL *validOut) {
    if (validOut) {
        *validOut = NO;
    }
    if (![cellView isKindOfClass:[UIView class]] || ![(id)cell respondsToSelector:@selector(getHeadImageView)]) {
        return CGRectZero;
    }

    CGRect headRect = CGRectZero;
    BOOL headRectValid = NO;
    @try {
        id candidate = ((id (*)(id, SEL))objc_msgSend)((id)cell, @selector(getHeadImageView));
        if ([candidate isKindOfClass:[UIView class]]) {
            headRect = wcpl_tapPolicyRectFromViewInCell((UIView *)candidate, cellView);
            headRectValid = wcpl_tapPolicyRectUsable(headRect, cellView);
        }
    } @catch (__unused NSException *exception) {
        headRectValid = NO;
    }

    if (validOut) {
        *validOut = headRectValid;
    }
    return headRect;
}

static CGRect wcpl_tapPolicyResolvedReferRect(id cell, UIView *cellView, BOOL *validOut) {
    if (validOut) {
        *validOut = NO;
    }
    if (![cellView isKindOfClass:[UIView class]]) {
        return CGRectZero;
    }

    SEL selectors[] = {
        @selector(getMsgReplyView),
        @selector(msgReplyView)
    };

    CGRect resolvedRect = CGRectZero;
    BOOL resolvedValid = NO;
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![(id)cell respondsToSelector:selector]) {
            continue;
        }

        @try {
            id candidate = ((id (*)(id, SEL))objc_msgSend)((id)cell, selector);
            if (![candidate isKindOfClass:[UIView class]]) {
                continue;
            }
            CGRect candidateRect = wcpl_tapPolicyRectFromViewInCell((UIView *)candidate, cellView);
            if (!wcpl_tapPolicyRectUsable(candidateRect, cellView) ||
                wcpl_tapPolicyRectLooksRowWide(candidateRect, cellView)) {
                continue;
            }
            if (!resolvedValid) {
                resolvedRect = candidateRect;
                resolvedValid = YES;
            } else {
                CGRect unionRect = CGRectIntersection(CGRectUnion(resolvedRect, candidateRect), cellView.bounds);
                if (wcpl_tapPolicyRectUsable(unionRect, cellView)) {
                    resolvedRect = unionRect;
                }
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (validOut) {
        *validOut = resolvedValid;
    }
    return resolvedRect;
}

static CGRect wcpl_tapPolicyFallbackBodyRect(CGRect bubbleRect) {
    CGFloat insetX = MIN(MAX(CGRectGetWidth(bubbleRect) * 0.08f, 6.0f), 14.0f);
    CGFloat insetY = MIN(MAX(CGRectGetHeight(bubbleRect) * 0.10f, 4.0f), 12.0f);
    CGRect insetRect = CGRectInset(bubbleRect, insetX, insetY);
    if (CGRectGetWidth(insetRect) <= kWCPLTapPolicyMinRectSide ||
        CGRectGetHeight(insetRect) <= kWCPLTapPolicyMinRectSide) {
        insetRect = CGRectInset(bubbleRect, 4.0f, 4.0f);
    }
    if (CGRectGetWidth(insetRect) <= kWCPLTapPolicyMinRectSide ||
        CGRectGetHeight(insetRect) <= kWCPLTapPolicyMinRectSide) {
        return bubbleRect;
    }
    return insetRect;
}

static CGRect wcpl_tapPolicyResolvedBlankBandRect(id cell, UIView *cellView, CGRect bubbleRect) {
    BOOL headRectValid = NO;
    CGRect headRect = wcpl_tapPolicyResolvedHeadRect(cell, cellView, &headRectValid);
    BOOL referRectValid = NO;
    CGRect referRect = wcpl_tapPolicyResolvedReferRect(cell, cellView, &referRectValid);
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    BOOL textPolicy = wcpl_messageUsesTripleTapPolicy(cell, msgWrap);

    CGFloat minY = CGRectGetMinY(bubbleRect);
    CGFloat maxY = CGRectGetMaxY(bubbleRect);
    if (headRectValid) {
        minY = MIN(minY, CGRectGetMinY(headRect));
        maxY = MAX(maxY, CGRectGetMaxY(headRect));
    }
    if (referRectValid) {
        minY = MIN(minY, CGRectGetMinY(referRect));
        maxY = MAX(maxY, CGRectGetMaxY(referRect));
    }

    CGFloat extraTop = textPolicy ? kWCPLTapPolicyBlankBandTextExtraTop : kWCPLTapPolicyBlankBandMediaExtraTop;
    CGFloat extraBottom = textPolicy ? kWCPLTapPolicyBlankBandTextExtraBottom : kWCPLTapPolicyBlankBandMediaExtraBottom;
    minY = MAX(CGRectGetMinY(cellView.bounds), minY - extraTop);
    maxY = MIN(CGRectGetMaxY(cellView.bounds), maxY + extraBottom);
    if ((maxY - minY) <= kWCPLTapPolicyMinRectSide) {
        return CGRectZero;
    }

    return CGRectMake(CGRectGetMinX(cellView.bounds),
                      minY,
                      CGRectGetWidth(cellView.bounds),
                      maxY - minY);
}

static CGRect wcpl_tapPolicyResolvedAdjacentBlankRect(id cell,
                                                      UIView *cellView,
                                                      CGRect bubbleRect,
                                                      BOOL bubbleRectValid,
                                                      BOOL *validOut) {
    if (validOut) {
        *validOut = NO;
    }
    if (![cellView isKindOfClass:[UIView class]]) {
        return CGRectZero;
    }
    if (!bubbleRectValid) {
        return CGRectZero;
    }

    CGRect adjacentRect = wcpl_tapPolicyResolvedBlankBandRect(cell, cellView, bubbleRect);
    if (!wcpl_tapPolicyRectUsable(adjacentRect, cellView)) {
        return CGRectZero;
    }

    if (validOut) {
        *validOut = YES;
    }
    return adjacentRect;
}

static CGRect wcpl_tapPolicyResolvedBodyRect(id cell,
                                             UIView *cellView,
                                             BOOL textPolicy,
                                             CGRect bubbleRect,
                                             BOOL bubbleRectValid,
                                             BOOL *validOut) {
    (void)cell;
    (void)cellView;
    (void)textPolicy;
    if (!bubbleRectValid) {
        if (validOut) {
            *validOut = NO;
        }
        return CGRectZero;
    }
    CGRect bodyRect = wcpl_tapPolicyFallbackBodyRect(bubbleRect);
    BOOL bodyRectValid = WCPLCGRectHasMinSide(bodyRect, kWCPLTapPolicyMinRectSide);

    if (validOut) {
        *validOut = bodyRectValid;
    }
    return bodyRect;
}

static BOOL wcpl_messageUsesTripleTapPolicy(id cell, CMessageWrap *msgWrap) {
    if (msgWrap) {
        return msgWrap.m_uiMessageType == 1;
    }

    NSString *className = cell ? NSStringFromClass([cell class]) : nil;
    if (![className isKindOfClass:[NSString class]]) {
        return NO;
    }
    return [className isEqualToString:@"TextMessageCellView"];
}

static NSInteger wcpl_configuredTapCountForCell(id cell, CMessageWrap *msgWrap) {
    return wcpl_messageUsesTripleTapPolicy(cell, msgWrap) ? 3 : 2;
}

static NSString *wcpl_configuredTapSceneTagForCell(id cell, CMessageWrap *msgWrap) {
    return wcpl_messageUsesTripleTapPolicy(cell, msgWrap) ? @"三击" : @"双击";
}

static NSString *wcpl_tapHitZoneName(WCPLTapHitZone zone) {
    switch (zone) {
        case WCPLTapHitZoneBubbleBlank:
            return @"bubble_blank";
        case WCPLTapHitZoneTextBody:
            return @"text_body";
        case WCPLTapHitZoneMediaBody:
            return @"media_body";
        default:
            return @"outside";
    }
}

static WCPLTapHitZone wcpl_tapGestureHitZoneForPoint(id cell, CGPoint pointInCell, NSString *scopeTag) {
    (void)scopeTag;
    if (![cell isKindOfClass:[UIView class]]) {
        return WCPLTapHitZoneOutside;
    }

    UIView *cellView = (UIView *)cell;
    if (!CGRectContainsPoint(cellView.bounds, pointInCell)) {
        return WCPLTapHitZoneOutside;
    }

    BOOL bubbleRectValid = NO;
    CGRect bubbleRect = wcpl_tapPolicyResolvedBubbleRect(cell, cellView, &bubbleRectValid);
    if (!bubbleRectValid) {
        return WCPLTapHitZoneOutside;
    }

    BOOL headRectValid = NO;
    CGRect headRect = wcpl_tapPolicyResolvedHeadRect(cell, cellView, &headRectValid);
    if (headRectValid && CGRectContainsPoint(headRect, pointInCell)) {
        return WCPLTapHitZoneOutside;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    BOOL textPolicy = wcpl_messageUsesTripleTapPolicy(cell, msgWrap);
    BOOL referRectValid = NO;
    CGRect referRect = wcpl_tapPolicyResolvedReferRect(cell, cellView, &referRectValid);
    if (textPolicy && referRectValid && CGRectContainsPoint(referRect, pointInCell)) {
        return WCPLTapHitZoneOutside;
    }

    CGRect hitRect = CGRectInset(bubbleRect, -kWCPLTapPolicyBubbleHitInset, -kWCPLTapPolicyBubbleHitInset);
    if (!wcpl_tapPolicyRectUsable(hitRect, cellView)) {
        hitRect = bubbleRect;
    }
    BOOL insideBubbleRect = CGRectContainsPoint(hitRect, pointInCell);

    BOOL adjacentRectValid = NO;
    CGRect adjacentRect = wcpl_tapPolicyResolvedAdjacentBlankRect(cell,
                                                                 cellView,
                                                                 bubbleRect,
                                                                 bubbleRectValid,
                                                                 &adjacentRectValid);
    BOOL insideAdjacentRect = adjacentRectValid && CGRectContainsPoint(adjacentRect, pointInCell);
    if (!insideAdjacentRect) {
        return WCPLTapHitZoneOutside;
    }

    if (!textPolicy && insideBubbleRect) {
        return WCPLTapHitZoneOutside;
    }

    BOOL bodyRectValid = NO;
    CGRect bodyRect = wcpl_tapPolicyResolvedBodyRect(cell, cellView, textPolicy, bubbleRect, bubbleRectValid, &bodyRectValid);
    BOOL insideBody = bodyRectValid && CGRectContainsPoint(bodyRect, pointInCell);
    if (insideBody) {
        return textPolicy ? WCPLTapHitZoneTextBody : WCPLTapHitZoneMediaBody;
    }

    return WCPLTapHitZoneBubbleBlank;
}

static BOOL wcpl_shouldAllowCustomTapForZone(id cell, CMessageWrap *msgWrap, WCPLTapHitZone zone) {
    if (zone == WCPLTapHitZoneOutside) {
        return NO;
    }

    if (wcpl_messageUsesTripleTapPolicy(cell, msgWrap)) {
        return zone == WCPLTapHitZoneBubbleBlank || zone == WCPLTapHitZoneTextBody;
    }
    return zone == WCPLTapHitZoneBubbleBlank;
}

static UIView *wcpl_tapPolicyOriginViewFromOwnerAndSender(id ownerView, id sender) {
    if ([sender isKindOfClass:[UIGestureRecognizer class]]) {
        return ((UIGestureRecognizer *)sender).view;
    }
    if ([sender isKindOfClass:[UIView class]]) {
        return (UIView *)sender;
    }
    if ([ownerView isKindOfClass:[UIGestureRecognizer class]]) {
        return ((UIGestureRecognizer *)ownerView).view;
    }
    if ([ownerView isKindOfClass:[UIView class]]) {
        return (UIView *)ownerView;
    }
    return nil;
}

static BOOL wcpl_tapPolicyTryResolvePointFromObject(id object, UIView *cellView, CGPoint *pointOut) {
    if (!object || ![cellView isKindOfClass:[UIView class]]) {
        return NO;
    }
    if (![object isKindOfClass:[UITouch class]] &&
        ![object isKindOfClass:[UIGestureRecognizer class]]) {
        return NO;
    }

    SEL locationSelector = @selector(locationInView:);
    if (![object respondsToSelector:locationSelector]) {
        return NO;
    }

    @try {
        CGPoint point = ((CGPoint (*)(id, SEL, id))objc_msgSend)(object, locationSelector, cellView);
        if (isfinite(point.x) && isfinite(point.y)) {
            if (pointOut) {
                *pointOut = point;
            }
            return YES;
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    return NO;
}

static CGPoint wcpl_resolveTapPointInCellFromOwnerAndSender(UIView *cellView, id ownerView, id sender, BOOL *resolvedOut) {
    if (resolvedOut) {
        *resolvedOut = NO;
    }

    CGPoint point = CGPointZero;
    if (wcpl_tapPolicyTryResolvePointFromObject(sender, cellView, &point) ||
        wcpl_tapPolicyTryResolvePointFromObject(ownerView, cellView, &point)) {
        if (resolvedOut) {
            *resolvedOut = YES;
        }
        return point;
    }

    UIView *originView = wcpl_tapPolicyOriginViewFromOwnerAndSender(ownerView, sender);
    if (![originView isKindOfClass:[UIView class]]) {
        return CGPointZero;
    }

    CGPoint center = CGPointMake(CGRectGetMidX(originView.bounds), CGRectGetMidY(originView.bounds));
    point = [cellView convertPoint:center fromView:originView];
    if (!isfinite(point.x) || !isfinite(point.y)) {
        return CGPointZero;
    }

    if (resolvedOut) {
        *resolvedOut = YES;
    }
    return point;
}

static BOOL wcpl_shouldBlockNativeDoubleTapForResolvedZone(id cell,
                                                           CMessageWrap *msgWrap,
                                                           WCPLTapHitZone zone,
                                                           BOOL zoneResolved,
                                                           NSString *scopeTag) {
    (void)scopeTag;
    if (wcpl_messageUsesTripleTapPolicy(cell, msgWrap)) {
        if (!zoneResolved) {
            return YES;
        }
        return wcpl_shouldAllowCustomTapForZone(cell, msgWrap, zone);
    }

    if (!zoneResolved) {
        return NO;
    }
    return zone == WCPLTapHitZoneBubbleBlank;
}
