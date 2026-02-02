//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CABasicAnimation, UILongPressGestureRecognizer, WCFinderBulletItem;

@protocol WCFinderBulletGroupViewDelegate <NSObject>

@optional
- (void)onAddAnimationForItem:(WCFinderBulletItem *)arg1 animation:(CABasicAnimation *)arg2;
- (void)onTapBulletGroupViewDidSelectedItem:(_Bool)arg1;
- (void)onLongPressBulletGroupView:(UILongPressGestureRecognizer *)arg1;
@end

