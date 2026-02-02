//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView, WCFinderShareCustomTransition;

@protocol WCFinderShareAbstractCell <NSObject>
- (NSString *)cellIdentifier;
- (void)updateTransitionAnimator:(WCFinderShareCustomTransition *)arg1;
- (void)doShareAnimationWillPresent:(_Bool)arg1;
- (void)doShareAnimation;
- (void)willOpenShareViewController;
- (struct CGRect)transitionStartImageRectInView:(UIView *)arg1 willPresent:(_Bool)arg2;
- (UIImage *)transitionEndImage;
- (UIImage *)transitionStartImage;
@end

