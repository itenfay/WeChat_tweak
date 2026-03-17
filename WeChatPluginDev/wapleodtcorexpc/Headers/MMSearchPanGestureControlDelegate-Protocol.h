//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol MMSearchPanGestureControlDelegate <NSObject>

@optional
- (void)didCancelMove;
- (void)onTriggerToCancelMove;
- (void)onTriggerToMoveRight;
- (void)onBeginDrag;
- (UIView *)gesturingBottomView;
@end

