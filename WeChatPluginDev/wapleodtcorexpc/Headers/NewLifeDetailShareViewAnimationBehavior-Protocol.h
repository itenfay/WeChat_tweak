//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol NewLifeDetailShareViewAnimationBehavior <NSObject>
- (void)onNewLifeDetailShareViewAnimationEnd;
- (void)onNewLifeDetailShareViewAnimationBegin;
- (UIView *)getNewLifeAnimationCardImageView;
- (UIView *)getNewLifeAnimationCardView;
- (NSString *)getNewLifeZoomAnimatorKey;
@end

