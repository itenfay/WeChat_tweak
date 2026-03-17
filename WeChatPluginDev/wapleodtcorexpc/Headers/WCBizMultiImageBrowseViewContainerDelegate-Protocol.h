//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCBizImageBrowseItem;

@protocol WCBizMultiImageBrowseViewContainerDelegate <NSObject>
- (void)onLongPressedWithWCBizImageBrowseItem:(WCBizImageBrowseItem *)arg1;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideWithRotate;
@end

