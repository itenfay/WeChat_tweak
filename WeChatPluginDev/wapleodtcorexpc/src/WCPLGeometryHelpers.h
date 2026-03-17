//
// WCPLGeometryHelpers.h
//
// 小型几何 helper（纯函数/inline），统一 CGRect 合法性与阈值口径。
//

#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

static inline BOOL WCPLCGRectIsValid(CGRect rect) {
    return !CGRectIsEmpty(rect) && !CGRectIsNull(rect) && !CGRectIsInfinite(rect);
}

static inline BOOL WCPLCGRectHasMinSide(CGRect rect, CGFloat minSide) {
    if (!WCPLCGRectIsValid(rect)) {
        return NO;
    }
    return CGRectGetWidth(rect) > minSide && CGRectGetHeight(rect) > minSide;
}

static inline BOOL WCPLCGRectIsUsableInBounds(CGRect rect, CGRect bounds, CGFloat minSide) {
    if (!WCPLCGRectHasMinSide(rect, minSide)) {
        return NO;
    }
    if (!WCPLCGRectIsValid(bounds)) {
        return NO;
    }
    return CGRectIntersectsRect(rect, bounds);
}

NS_ASSUME_NONNULL_END
