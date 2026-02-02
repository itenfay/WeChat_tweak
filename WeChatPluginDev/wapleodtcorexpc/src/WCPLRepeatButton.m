#import "WCPLRepeatButton.h"

@implementation WCPLRepeatButton

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event {
    CGRect bounds = self.bounds;
    CGFloat inset = -10.0f;
    CGRect hitFrame = CGRectInset(bounds, inset, inset);
    return CGRectContainsPoint(hitFrame, point);
}

@end

